int arrayPacking(std::vector<int> a) {
    int result = 0;
    // 21784 = a[0]*2^0 + a[1]*2^8+a[2]*2^16...
    for (int i = 0; i < size(a); i++)
        result += a[i] << (8 * i);
    return result;
}
