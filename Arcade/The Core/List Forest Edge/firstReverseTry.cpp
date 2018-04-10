std::vector<int> firstReverseTry(std::vector<int> arr) {
    if (size(arr) > 1)
        swap(arr[0], arr[size(arr) - 1]);
    return arr;
}
