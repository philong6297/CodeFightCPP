/*
Given a set of complex values, find their product.

Example

For real = [1, 2] and imag = [1, 3], the output should be
arrayComplexElementsProduct(real, imag) = [-1, 5].
The task is to calculate product of 1 + 1 * i and 2 + 3 * i, so the answer is (1 + 1i) * (2 + 3i) = -1 + 5i.
*/
std::vector<int> arrayComplexElementsProduct(std::vector<int> real,
	std::vector<int> imag) {

	std::vector<int> answer;
	answer.push_back(real[0]);
	answer.push_back(imag[0]);
	for (int i = 1; i < real.size(); i++) {
		int tmp = answer[0] * real[i] + -answer[1] * imag[i];
		answer[1] = answer[1] * real[i] + answer[0] * imag[i];
		answer[0] = tmp;
	}
	return answer;
}
