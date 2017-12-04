/*
Given two sorted arrays of integers, check if there is at least one element which occurs in both arrays.

Example

For arr1 = [1, 2, 3, 5] and arr2 = [1, 4, 5], the output should be
checkSameElementExistence(arr1, arr2) = true;
For arr1 = [1, 3, 5] and arr2 = [-2, 0, 2, 4, 6], the output should be
checkSameElementExistence(arr1, arr2) = false.
*/
bool checkSameElementExistence(std::vector<int> arr1, std::vector<int> arr2) {

	int i = 0;
	int j = 0;
	while (i < arr1.size() && j < arr2.size()) {
		if (arr1[i] == arr2[j]) {
			return true;
		}
		if (arr1[i] < arr2[j]) {
			i++;
		}
		else {
			j++;
		}
	}

	return false;
}