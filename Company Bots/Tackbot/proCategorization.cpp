#include "Header.h"
/*
Thumbtack helps Professionals (Pros) grow their business by identifying new customers. Upon registering on Thumbtack, a Pro specifies which categories of services they provide. To help match customer requests with qualified Pros, Thumbtack maintains a list of Pros grouped by service categories.

Given a list of pros and their category preferences, return the list of Pros for each category.
*/
std::vector<std::vector<std::vector<std::string>>> proCategorization(std::vector<std::string> pros, std::vector<std::vector<std::string>> preferences) {
	map<string, vector<string>> list;
	vector<vector<vector<string>>> ret;
	for (auto &name : pros)
		for (auto &preference : preferences[&name - &pros[0]])
			list[preference].push_back(name);
	for (auto &it : list)
		ret.push_back({ vector<string>({ it.first }),it.second });
	return ret;
}