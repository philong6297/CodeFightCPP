/*
Given some integer, find the maximal number you can obtain by deleting exactly one digit of the given number.

Example

For n = 152, the output should be
deleteDigit(n) = 52;
For n = 1001, the output should be
deleteDigit(n) = 101.
*/
int deleteDigit(int n) {
	string value = to_string(n);
	for (int i = 0; i<size(value) - 1; i++)
	{
		if (value[i] < value[i + 1])
		{
			value.erase(i, 1);
			break;
		}
		if (i == size(value) - 2) return stoi(value.substr(0, i + 1));
	}
	return stoi(value);
}

