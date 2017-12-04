/*
If you have a task that you need to complete on a regular basis, you can set it up in Asana as a recurring task. This allows you to schedule the task to repeat on specific days of the week every k weeks.

For instance, you could set up a recurring task that reminds you to call your sister on Tuesday and Friday every 3 weeks. You set up the first instance of the task for Tuesday, March 1. The next instance will fall on Friday, March 4. The third instance will fall 3 weeks later on Tuesday, March 22, the fourth instance will fall on Friday, March 25, the fifth instance will fall on Tuesday, April 12, and so on.

Given a firstDate that represents the day your recurring task becomes active, an array daysOfTheWeek that indicates which days of the week the task should occur on, and a number k that represents the interval between weeks on which the task occurs, return an array that contains the first n dates on which the task is scheduled.

In this task, you'll likely need to know the how long the months are and the names of the days of week, provided here:

Month lengths from January to December: 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31.
During leap years February has 29 days.
Names of weekdays: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday".
January 1, 2015 was a Thursday.
Example

For firstDate = "01/01/2015", k = 2, daysOfTheWeek = ["Monday", "Thursday"] and n = 4, the output should be

recurringTask(firstDate, k, daysOfTheWeek, n) =
["01/01/2015", "05/01/2015", "15/01/2015", "19/01/2015"]

firstDate falls on a Thursday. The first Monday after it is January 5, "05/01/2015". Since k = 2, the next two days for which the task is scheduled are Thursday, January 15, and Monday, January 19.
*/
std::vector<std::string> recurringTask(std::string firstDate, int k, std::vector<std::string> daysOfTheWeek, int n) {
	
	//get date
	tm *dateInfo = new tm();
	tm *prevDateInfo = new tm();
	dateInfo->tm_mday = stoi(firstDate.substr(0, 2));
	dateInfo->tm_mon = stoi(firstDate.substr(3, 2)) - 1;
	dateInfo->tm_year = stoi(firstDate.substr(6)) - 1900;
	time_t time = mktime(dateInfo);
	char buff[80];
	map<string, int> weekDay = {
		{ "Sunday",0 },
		{ "Monday",1 },
		{ "Tuesday",2 },
		{ "Wednesday",3 },
		{ "Thursday",4 },
		{ "Friday",5 },
		{ "Saturday",6 },
	};
	
	//sort daysOfTheWeek as the week day of first date will be at the front and so on
	//for Example :
	// daysOfTheWeek = { "Monday","Tuesday", "Thursday","Friday","Sunday" };
	//and the firstDate is 01/01/2015 is Thursday so after sorting this it will be:
	// Thursday,Friday,Sunday,Monday,Tuesday
	sort(begin(daysOfTheWeek), end(daysOfTheWeek), [=](string a, string b)mutable->bool {
		int valueA = weekDay[a] - dateInfo->tm_wday;
		int valueB = weekDay[b] - dateInfo->tm_wday;
		if (valueA == 0)
			return true;
		if (valueB == 0)
			return false;
		if (valueA * valueB > 0)
			return valueA < valueB;
		return valueA > 0;
	});
	//result
	vector<string> ret;
	//continue add date to result while n > 0
	while (n)
	{
		//save the instance so we can move it to next after k weeks
		prevDateInfo->tm_mday = dateInfo->tm_mday;
		prevDateInfo->tm_mon = dateInfo->tm_mon;
		prevDateInfo->tm_year = dateInfo->tm_year;
		for (auto &day : daysOfTheWeek)
		{
			int diff = weekDay[day] - dateInfo->tm_wday;
			if (diff < 0) diff += 7;
			time += diff * 24 * 60 * 60;
			n--;
			dateInfo = localtime(&time);
			strftime(buff, size(buff), "%d/%m/%Y", dateInfo);
			ret.push_back(string(buff));
			if (!n) break;
		}

		//move back date to the date which have the same Week day as firstDate
		dateInfo = prevDateInfo;
		//move next to the date which have the same Week day as firstDate but after k week
		time = mktime(dateInfo);
		time += k * 7 * 24 * 60 * 60;
		dateInfo = localtime(&time);
	}

	return ret;
}
