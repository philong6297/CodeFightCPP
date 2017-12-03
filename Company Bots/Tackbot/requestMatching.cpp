#include "Header.h"
/*
A Thumbtack customer has just submitted a request for a house painter to paint a one bedroom house in San Francisco. Our job is to find Pros who provide this service and whose travel distance preference is ideal for the job. To measure how well the Pro and the request match, we calculate their matching score and non-matching score as follows:

if the Pro's distance from the customer's house does not exceed their maximum preferred travel distance, then their matching score equals the distance between the pro and the customer;
otherwise we calculate a non-matching score as the difference between the distance from the pro to the customer, and their maximum preferred travel distance.
For example, let's say a pro Jane has a maximum travel distance of 10 miles.

If a customer is located 5 miles away, their matching score is 5 miles.
If a customer is located 12 miles away, their "non-matching" score is 2 miles.
To select the top 5 Pros, we sort them so that those who have a matching score are always shown before those who have a non-matching score, and both matching scores and non-matching scores are sorted in ascending order. If two or more Pros have equal scores, they are sorted by their names in lexicographical order.

You're given a list of pros who match the "house painting" category, their distances from the customer's house, and their travelPreferences, which denotes the maximum distance each Pro is willing to travel for a given job. Return the top 5 Pros sorted as described above. If there are fewer than 5 Pros, return them all.
*/
std::vector<std::string> requestMatching(std::vector<std::string> pros, std::vector<int> distances, std::vector<int> travelPreferences) {
	struct proInfo {
		string name;
		int score;
		bool isMatching;
		proInfo(string n, int distance, int travelPreference) {
			name = n;
			if (travelPreference >= distance)
				score = distance, isMatching = true;
			else
				score = distance - travelPreference, isMatching = false;
		}
	};
	vector<proInfo> info;
	for (int i = 0; i<size(pros); i++)
		info.push_back(proInfo(pros[i], distances[i], travelPreferences[i]));
	sort(begin(info), end(info), [&](proInfo a, proInfo b)->bool {
		if (a.isMatching == b.isMatching) {
			if (a.score == b.score) return a.name < b.name;
			return a.score < b.score;
		}
		return a.isMatching == true;
	});
	vector<string> ret;
	for (int i = 0; i< (size(info) < 6 ? size(info) : 5); i++)
		ret.push_back(info[i].name);
	return ret;
}