#include "Header.h"
/*
Thumbtack tries to identify spam coming from multiple user accounts by comparing job request descriptions and identifying clusters that have high similarity. Their data analysis engineers are testing out a new clusterization algorithm that uses the Jaccard index. As a prospective team member, you've been asked to implement this algorithm.

You are given a list of requests and ids of the users who submitted them. Implement the following algorithm to identify possible spammers:

-first, split each request into a set of words and convert them to lowercase. We formally define a word as a substring consisting of English letters, such that characters to the left of the leftmost letter and to the right of the rightmost letter are not letters;
-next, calculate the Jaccard index of each pair of sets;
-divide the sets into clusters so that:
+each set belongs to some cluster;
+if Jaccard index of two sets A and B is not less than the given threshold (meaning they are too similar), they belong to the same cluster. Note that if A and B as well as B and C satisfy this criteria, then A, B and C belong to the same cluster;
-for each cluster that has more than one element, return the list of their author IDs in ascending order.
*/
struct Counter
{
	struct value_type { template<typename T> value_type(const T&) { } };
	void push_back(const value_type&) { ++count; }
	size_t count = 0;
};

std::vector<std::vector<int>> spamClusterization(std::vector<std::string> requests, std::vector<int> ids, double threshold) {
	vector<vector<int>> ret;

	//convert to lowercase
	for (auto &it : requests)
		transform(begin(it), end(it), begin(it), ::tolower);

	//split in to set of words
	vector<set<string>> wordSets;
	regex getWord("\\b(\\w+?)\\b");
	auto wordSetOf = [=](string request)->set<string> {
		set<string> ret;
		for (auto it = sregex_iterator(begin(request), end(request), getWord); it != sregex_iterator(); it++)
			ret.insert((*it).str(1));
		return ret;
	};
	for (auto &req : requests)
		wordSets.push_back(wordSetOf(req));

	//Jaccard Index value of two set
	Counter counter;
	auto jaccardIndex = [&](set<string> a, set<string> b)->double {
		counter.count = 0;
		set_intersection(begin(a), end(a), begin(b), end(b), back_inserter(counter));
		return (double)counter.count / (size(a) + size(b) - counter.count);
	};

	//get pairs accard index of two sets A and B is not less than the given threshold
	vector<pair<int, int>> pairList;
	for (int i = 0; i < size(ids); i++)
		for (int j = i + 1; j < size(ids); j++)
			if (jaccardIndex(wordSets[i], wordSets[j]) >= threshold)
				pairList.push_back({ ids[i],ids[j] });

	//add to same cluster
	vector<bool> checked(size(pairList), false);
	set<int> temp;
	for (int i = 0; i < size(pairList); i++)
	{
		if (checked[i]) continue;
		checked[i] = true;
		temp = { pairList[i].first,pairList[i].second };
		for (int j = i + 1; j < size(pairList); j++)
			if (!checked[j] &&
				find_if(begin(temp), end(temp), [=](const int& x)->bool {return x == pairList[j].first || x == pairList[j].second; })
				!= end(temp))
			{
				checked[j] = true;
				temp.insert({ pairList[j].first,pairList[j].second });
			}
		ret.emplace_back(begin(temp), end(temp));
	}
	sort(begin(ret), end(ret), [](vector<int> a, vector<int> b)->bool {
		return a[0] < b[0];
	});
	return ret;
}