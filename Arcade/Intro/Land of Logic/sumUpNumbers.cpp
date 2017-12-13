/*
CodeMaster has just returned from shopping. He scanned the check of the items he bought and gave the resulting string to Ratiorg to figure out the total number of purchased items. Since Ratiorg is a bot he is definitely going to automate it, so he needs a program that sums up all the numbers which appear in the given input.

Help Ratiorg by writing a function that returns the sum of numbers that appear in the given inputString.

Example

For inputString = "2 apples, 12 oranges", the output should be
sumUpNumbers(inputString) = 14.
*/
int sumUpNumbers(std::string inputString) {
	int ret = 0;
	int temp, i = 0;
	while (i<size(inputString))
	{
		temp = 0;
		while (isdigit(inputString[i]))
			temp = temp * 10 + inputString[i++] - 48;
		i++;
		ret += temp;
	}
	return ret;
}
