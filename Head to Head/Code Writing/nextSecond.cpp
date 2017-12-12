/*
Given some time output the time after one second.

Example

For currentTime = [23, 59, 59], the output should be
nextSecond(currentTime) = [0, 0, 0].
*/
std::vector<int> nextSecond(std::vector<int> currentTime) {
	currentTime[2]++;
	if (currentTime[2] == 60)
	{
		currentTime[2] = 0;
		currentTime[1]++;
		if (currentTime[1] == 60)
		{
			currentTime[1] = 0;
			currentTime[0]++;
			if (currentTime[0] == 24)
				currentTime[0] = 0;
		}
	}
	return currentTime;
}
