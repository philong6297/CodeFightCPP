/*
Some people are standing in a row in a park. There are trees between them which cannot be moved.
Your task is to rearrange the people by their heights in a non-descending order without moving the
trees.

Example

For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190]
*/

std::vector<int> sortByHeight(std::vector<int> a) {
    priority_queue<int, vector<int>, greater<int>> heightList;
    for (auto &it : a)
        if (it != -1)
            heightList.push(it);
    for (auto &it : a)
        if (it != -1)
            it = heightList.top(), heightList.pop();
    return a;
}
