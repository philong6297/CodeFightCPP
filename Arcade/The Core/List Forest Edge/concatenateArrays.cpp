std::vector<int> concatenateArrays(std::vector<int> a, std::vector<int> b) {
    a.insert(end(a), begin(b), end(b));
    return a;
}
