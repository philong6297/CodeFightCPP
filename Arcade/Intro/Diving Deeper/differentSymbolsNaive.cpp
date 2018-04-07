/*
Given a string, find the number of different characters in it.

Example

For s = "cabca", the output should be
differentSymbolsNaive(s) = 3.

There are 3 different characters a, b and c.
*/
int differentSymbolsNaive(std::string s) {
    set<char> diffList;
    for (auto &it : s)
        diffList.insert(it);
    return size(diffList);
}
