/*
You are given an array of integers. Sort it in such a way that if a comes before b then the sum of digits of a is less than or equal to the sum of digits of b. If two numbers have the same sum of digits, the smaller one (in the regular sense) should come first. For example 4 and 13 have the same sum of digits, however 4 < 13 thus 4 comes before 13 in any digitalSum sorting where both are present.

Example

For a = [13, 20, 7, 4], the output should be
digitalSumSort(a) = [20, 4, 13, 7].
*/
std::vector<int> digitalSumSort(std::vector<int> a) {

	struct Helper {
		int digitalSum(int n) {
			int sum = 0;
			while (n > 0) {
				sum += n % 10;
				n /= 10;
			}
			return sum;
		}
	};
	Helper h;

	std::map<int, std::vector<int>> buckets;
	for (int i = 0; i < a.size(); i++) {
		int sum = h.digitalSum(a[i]);
		buckets[sum].push_back(a[i]);
	}

	std::vector<int> b;
	for (auto& kv : buckets) {
		std::vector<int>& bucket = kv.second;
		std::sort(bucket.begin(), bucket.end());
		for (int i = 0; i < bucket.size(); i++) {
			b.push_back(bucket[i]);
		}
	}

	return b;
}
