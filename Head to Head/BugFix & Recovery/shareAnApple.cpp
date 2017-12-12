/*
You have a apples, and your friend has b apples. You will be happy if - and only if - you both have the same number of apples.

Given integers a and b, check if you will be happy after you give your friend one of your apples.

Example

For a = 3 and b = 1, the output should be
shareAnApple(a, b) = true.
*/
bool shareAnApple(int a, int b) {
	if (--a == ++b) {
		return true;
	}
	return false;
}
