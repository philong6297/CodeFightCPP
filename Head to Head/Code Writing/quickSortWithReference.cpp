/*
You are given an array of integers. Sort its sub-array between the given indices l and r (inclusive) and leave the other elements intact.

Example

For a = [5, 2, 1, 7, 5, 3, 2, 3], l = 0 and r = 3, the output should be
quickSort(a, l, r) = [1, 2, 5, 7, 5, 3, 2, 3].
*/
void quickSortWithReference(std::vector<int>& a, int l, int r) {
	if (l >= r) {
		return;
	}

	int x = a[l];
	int i = l;
	int j = r;

	while (i <= j) {
		while (a[i] < x) {
			i++;
		}
		while (a[j] > x) {
			j--;
		}
		if (i <= j) {
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++, j--;
		}
	}

	quickSortWithReference(a, l, j);
	quickSortWithReference(a, i, r);
}

std::vector<int> quickSort(std::vector<int> a, int l, int r) {
	quickSortWithReference(a, l, r);
	return a;
}
