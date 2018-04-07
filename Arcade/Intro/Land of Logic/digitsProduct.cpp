/*
Given an integer product, find the smallest positive (i.e. greater than 0) integer the product of
whose digits is equal to product. If there is no such integer, return -1 instead.

Example

For product = 12, the output should be
digitsProduct(product) = 26;
For product = 19, the output should be
digitsProduct(product) = -1.
*/
int digitsProduct(int product) {
    if (product == 0)
        return 10;
    if (product < 10)
        return product;
    stack<int> factorSet;
    for (int i = 9; i >= 2; i--)
        while (product % i == 0) {
            factorSet.push(i);
            product /= i;
            if (product == 1)
                break;
        }
    if (product != 1)
        return -1;
    int ret = 0;
    while (!factorSet.empty())
        ret = ret * 10 + factorSet.top(), factorSet.pop();
    return ret;
}
