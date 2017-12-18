/*
You are given an array of integers representing coordinates of obstacles situated on a straight line.

Assume that you are jumping from the point with coordinate 0 to the right. You are allowed only to make jumps of the same length represented by some integer.

Find the minimal length of the jump enough to avoid all the obstacles.

Example

For inputArray = [5, 3, 6, 7, 9], the output should be
avoidObstacles(inputArray) = 4.
*/
int avoidObstacles(std::vector<int> inputArray) {

	for (int i = 1; ; i++) {
		for (int j = 0; j < inputArray.size(); j++) {
			if (inputArray[j] % i == 0) {
				break;
			}
			if (j == inputArray.size() - 1) {
				return i;
			}
		}
	}
}
