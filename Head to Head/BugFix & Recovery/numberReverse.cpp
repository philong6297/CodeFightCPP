/*
Reverse a given integer by rearranging its digits.

Example

For input = 123, the output should be
numberReverse(input) = 321;
For input = 120, the output should be
numberReverse(input) = 21.
*/
int numberReverse(int input) {

	int reversed = 0;
	while (input > 0) {
		reversed = reversed * 10 + input % 10;
		input /= 10;
	}
	return reversed;

}
