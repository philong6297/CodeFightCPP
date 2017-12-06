/*
How many strings equal to a can be constructed using letters from the string b? Each letter can be used only once and in one string only.

Example

For a = "abc" and b = "abccba", the output should be
stringsConstruction(a, b) = 2.

We can construct 2 strings a with letters from b.
*/
int stringsConstruction(std::string a, std::string b) {
	map<char, int> mapA, mapB;
	for (auto &it : a)
		if (mapA.insert({ it,1 }).second == false)
			mapA[it]++;
	for (auto &it : b)
		if (mapB.insert({ it,1 }).second == false)
			mapB[it]++;
	int count = 0;
	for (auto &it : mapA)
	{
		if (mapB.find(it.first) == end(mapB)) return 0;
		if (it.second > mapB[it.first])
			return 0;
		count = count == 0 ? mapB[it.first] / it.second : min(mapB[it.first] / it.second, count);
	}
	return count;
}
