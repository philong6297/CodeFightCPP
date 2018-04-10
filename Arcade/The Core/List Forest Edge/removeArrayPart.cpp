std::vector<int> removeArrayPart(std::vector<int> inputArray, int l, int r) {
    vector<int> ret;
    for (size_t i = 0; i < size(inputArray); i++)
        if (i < l || i > r)
            ret.push_back(inputArray[i]);
    return ret;
}
