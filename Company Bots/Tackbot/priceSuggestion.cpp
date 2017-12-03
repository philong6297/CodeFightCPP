#include "Header.h"
/*
When a customer submits a job request on Thumbtack, this information is sent to Pros in the area who might be interested in it. If it looks like there's a fit, a Pro can respond with a custom quote that includes a personal message and a price estimate.

Thumbtack tries to help Pros pick a price estimate range using historical contractData, which contains prices for the same job type in the same area. You have been asked to implement the following two-step price suggestion algorithm:

	In the first step, contractData, which is guaranteed to have an even length, is sorted and divided into two groups:
		the first group contains the first half of the elements in contractData.
		the second group contains the other half;
	In the second step, the median values of the first and the second groups are found:
		the median of the first group is rounded down and returned as the lower price bound;
		the median of the second group is rounded up and returned as the upper price bound.
	If the data is insufficient (i.e. contractData contains fewer than 2 elements), a suggestion cannot be made, so nothing should be returned.
Using the given contractData, find the lower and the upper bounds of the suggested price estimate range.
*/
std::vector<int> priceSuggestion(std::vector<int> contractData) {
	sort(begin(contractData), end(contractData));
	vector<int> ret;
	if (!contractData.empty() && size(contractData) % 2 == 0)
	{
		int mid = size(contractData) / 2;
		int sub = mid / 2;
		if (mid % 2)
			ret = { contractData[sub],contractData[sub + mid] };
		else
			ret = { (contractData[sub] + contractData[sub - 1]) / 2,(contractData[sub + mid] + contractData[sub + mid - 1]) / 2 + 1 };
	}
	return ret;
}