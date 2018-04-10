int makeArrayConsecutive2(std::vector<int> statues) {
    sort(begin(statues), end(statues));
    int res = 0;
    for (size_t i = 1; i < size(statues); i++)
        res += statues[i] - statues[i - 1] - 1;
    return res;
}
