/*
Given two 3D vectors, find their dot product.

Example

For v1 = [1, 1, 1] and v2 = [0, 1, -1], the output should be
dotProduct(v1, v2) = 0.

The answer is 1 * 0 + 1 * 1 + 1 * (-1) = 0.
*/
int dotProduct(std::vector<int> v1, std::vector<int> v2) {
	int ret = 0;
	for (int i = 0; i<size(v1); i++)
		ret += v1[i] * v2[i];
	return ret;
}
