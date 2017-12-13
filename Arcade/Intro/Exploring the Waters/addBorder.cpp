/*
Given a rectangular matrix of characters, add a border of asterisks(*) to it.

Example

For

picture = ["abc",
"ded"]
the output should be

addBorder(picture) = ["*****",
"*abc*",
"*ded*",
"*****"]
*/

std::vector<std::string> addBorder(std::vector<std::string> picture) {
	string asterisks(size(picture[0]) + 2, '*');
	for (auto &it : picture)
		it = "*" + it + "*";
	picture.insert(begin(picture), asterisks);
	picture.insert(end(picture), asterisks);
	return picture;
}
