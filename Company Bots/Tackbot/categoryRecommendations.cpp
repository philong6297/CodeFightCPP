#include "Header.h"
/*
As you might already know, Thumbtack helps Professionals (Pros) grow their business by identifying new customers. Upon registering on Thumbtack, Pros must select categories that match the type of services they provide. To make this step easier for Pros, Thumbtack would like to provide smart suggestions of categories that usually accompany those the Pro has already selected. To do this, Thumbtack engineers analyze historical user requestData and categories in proSelections using a Jaccard index statistic.

Your task is to implement the following algorithm that returns a single category recommendation:

for each request from requestData:
calculate the Jaccard index of this request and proSelections;
Assign a score to each category that is present in the request but not in proSelections equal to the value of the Jaccard index;
divide each score by the number of summands it was obtained from;
return the category with the highest positive score. If several categories have the same positive score, return the lexicographically smallest one. If there are no categories with positive score, return an empty string instead.
*/
std::string categoryRecommendations(std::vector<std::vector<std::string>> requestData, std::vector<std::string> proSelections) {
	vector<string> different;
	auto jaccardIndex = [&](vector<string> request, vector<string> selection)->double {
		different.clear();
		set_intersection(begin(request), end(request), begin(selection), end(selection), back_inserter(different));
		return (double)size(different) / (size(request) + size(selection) - size(different));
	};
	map<string, vector<double>> requestIndex;
	sort(begin(proSelections), end(proSelections));
	for (auto &it : requestData) {
		sort(begin(it), end(it));
		double index = jaccardIndex(it, proSelections);
		different.clear();
		set_difference(begin(it), end(it), begin(proSelections), end(proSelections), back_inserter(different));
		for (auto &request : different)
			requestIndex[request].push_back(index);
	}
	auto score = [&](vector<double> request)->double {
		return request.empty() ? -1 : (double)accumulate(begin(request), end(request), 0.0) / size(request);
	};
	auto retScore = -1.0;
	auto retString = string();
	for (auto &it : requestIndex) {
		auto tempScore = score(it.second);
		if (retScore < tempScore)
			retString = it.first, retScore = tempScore;
		else if (retScore == tempScore)
			if (retString > it.first)
				retString = it.first, retScore = tempScore;
	}
	if (retScore == 0) return "";
	return retString;
}