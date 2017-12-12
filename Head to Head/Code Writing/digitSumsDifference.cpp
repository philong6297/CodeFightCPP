/*
Given an integer n, find the difference between the sums of its even and odd digits.

Example

For n = 412, the output should be
digitSumsDifference(n) = 5;
For n = 1203, the output should be
digitSumsDifference(n) = -2.
*/
int digitSumsDifference(int n) {
	int sum = 0;
	while (n)
	{
		int temp = n % 10;
		sum += (temp & 1 ? -1 : 1)*temp;
		n /= 10;
	}
	return sum;
}
