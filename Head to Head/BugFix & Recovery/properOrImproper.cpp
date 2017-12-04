/*
Determine whether a given fraction is proper.

Example

For a = [7, 2], the output should be
properOrImproper(a) = "Improper".
*/

std::string properOrImproper(std::vector<int> a) {

	if (abs(a[0] / a[1]) < 1) {
		return "Proper";
	}
	return "Improper";
}