/*
Given two version strings composed of several non-negative decimal fields separated by periods ("."), both strings contain equal number of numeric fields. Return true if the first version is higher than the second version and false otherwise.

The syntax follows the regular semver ordering rules:

1.0.5 < 1.1.0 < 1.1.5 < 1.1.10 < 1.2.0 < 1.2.2
< 1.2.10 < 1.10.2 < 2.0.0 < 10.0.0
There are no leading zeros in any of the numeric fields, i.e. you do not have to handle inputs like 100.020.003 (it would instead be given as 100.20.3).

Example

For ver1 = "1.2.2" and ver2 = "1.2.0", the output should be
higherVersion(ver1, ver2) = true;
For ver1 = "1.0.5" and ver2 = "1.1.0", the output should be
higherVersion(ver1, ver2) = false.
*/

bool higherVersion(std::string ver1, std::string ver2) {

	std::stringstream stream1(ver1),
		stream2(ver2);
	std::string a, b;
	while (std::getline(stream1, a, '.')) {
		std::getline(stream2, b, '.');
		int cmp = std::stoi(a) - std::stoi(b);
		if (cmp > 0) {
			return true;
		}
		else if (cmp < 0) {
			return false;
		}
	}

	return false;
}
