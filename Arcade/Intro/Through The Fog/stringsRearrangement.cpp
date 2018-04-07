/*
Given an array of equal-length strings, check if it is possible to rearrange the strings in such a
way that after the rearrangement the strings at consecutive positions would differ by exactly one
character.

Example

For inputArray = ["aba", "bbb", "bab"], the output should be
stringsRearrangement(inputArray) = false;

All rearrangements don't satisfy the description condition.

For inputArray = ["ab", "bb", "aa"], the output should be
stringsRearrangement(inputArray) = true.

Strings can be rearranged in the following way: "aa", "ab", "bb".
*/

bool stringsRearrangement(std::vector<std::string> inputArray) {
    /*think of it as a graph (as a matrix since there is only 10 elements)
    only connections allowed should be those with 1 character of diference,
    therefore search a path that includes all of the elements by using Hamilton path
    */

    auto isConnect = [&](string a, string b) -> bool {
        int count = 0;
        for (int i = 0; i < size(a); i++)
            if (a[i] != b[i])
                if (++count > 1)
                    break;
        return count == 1;
    };
    vector<vector<bool>> graph(size(inputArray), vector<bool>(size(inputArray), 0));
    for (int i = 0; i < size(inputArray); i++)
        for (int j = i + 1; j < size(inputArray); j++)
            if (isConnect(inputArray[i], inputArray[j]))
                graph[i][j] = graph[j][i] = true;
    vector<int> path;
    for (int i = 0; i < size(inputArray); i++)
        path.push_back(i);
    do {
        bool valid = true;
        for (int i = 0; i < size(path) - 1; i++)
            if (graph[path[i]][path[i + 1]] == false) {
                valid = false;
                break;
            }
        if (valid)
            return true;
    } while (next_permutation(begin(path), end(path)));
    return false;
}