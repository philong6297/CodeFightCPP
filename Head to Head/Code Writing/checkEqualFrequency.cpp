/*
Given array of integers, check whether each integer, that occurs in it, is contained there the same number of times as any other integer from the given array.

Example

For inputArray = [1, 2, 2, 1], the output should be
checkEqualFrequency(inputArray) = true;
For inputArray = [1, 2, 2, 3, 1, 3, 1, 3], the output should be
checkEqualFrequency(inputArray) = false.
*/
bool checkEqualFrequency(std::vector<int> inputArray) {
	map<int, int> countNum;
	for (auto &it : inputArray)
		if (countNum.insert({ it,1 }).second == false)
			countNum[it]++;
	return none_of(begin(countNum), end(countNum), [countNum](pair<int, int> i)->bool {
		return i.second != (*begin(countNum)).second;
	});
}
