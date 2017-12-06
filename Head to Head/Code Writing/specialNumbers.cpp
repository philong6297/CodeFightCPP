/*
A number is considered special, if it remains the same (and continues being a valid number) when rotated by 180°. For example, number 986 is special, but 11 or 9 aren't, because 1 ceases to be a digit after the rotation and 9 becomes 6 after the rotation.

Determine the number of special integers between l and r, inclusive.

Example

For l = 8 and r = 8, the output should be
specialNumbers(l, r) = 1;
For l = 66 and r = 96, the output should be
specialNumbers(l, r) = 3.
*/

int specialNumbers(int l, int r) {
	int count = 0;
	string value;
	bool flag;
	auto isValid = [&](int idx)->bool {
		if (value[idx] != value[size(value) - idx - 1])
		{
			return
				(value[idx] == '9' && value[size(value) - idx - 1] == '6')
				|| (value[idx] == '6' && value[size(value) - idx - 1] == '9');
		}
		return value[idx] == '8' || value[idx] == '0';
	};
	for (int n = l; n <= r; n++)
	{
		value = to_string(n);
		flag = true;
		for (int i = 0; i<size(value); i++)
			if (!isValid(i))
			{
				flag = false;
				break;
			}

		if (flag) count++;
	}
	return count;
}
