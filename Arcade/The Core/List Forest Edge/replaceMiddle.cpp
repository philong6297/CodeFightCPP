std::vector<int> replaceMiddle(std::vector<int> arr) {
    auto n = size(arr);
    if (n & 1)
        return arr;
    vector<int> ret;
    for (size_t i = 0; i < n / 2 - 1; i++)
        ret.push_back(arr[i]);
    ret.push_back(arr[n / 2 - 1] + arr[n / 2]);
    for (size_t i = n / 2 + 1; i < n; i++)
        ret.push_back(arr[i]);
    return ret;
}
