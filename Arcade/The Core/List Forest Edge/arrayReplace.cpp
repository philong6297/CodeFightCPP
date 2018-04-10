std::vector<int>
arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for (auto &it : inputArray)
        if (it == elemToReplace)
            it = substitutionElem;
    return inputArray;
}
