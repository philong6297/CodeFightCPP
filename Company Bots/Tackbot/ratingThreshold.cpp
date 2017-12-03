#include "Header.h"
/*
In Thumbtack, users are able to rate Pros based on their experience working with them. Each rating is an integer ranging from 1 to 5, and all ratings are averaged to produce a single number rating for any given Pro. Those Pros who have a rating lower than a specified threshold are manually reviewed by Thumbtack staff to ensure high quality of service.

You're given a list of ratings for some Pros. Find out which Pros should be manually reviewed.
*/
std::vector<int> ratingThreshold(double threshold, std::vector<std::vector<int>> ratings) {
	vector<int> ret;
	for (auto &it : ratings)
		if ((double)accumulate(begin(it), end(it), 0) / size(it) < threshold)
			ret.push_back(&it - &ratings[0]);
	return ret;
}
