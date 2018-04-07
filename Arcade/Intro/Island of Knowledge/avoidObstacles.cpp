/*
You are given an array of integers representing coordinates of obstacles situated on a straight
line.

Assume that you are jumping from the point with coordinate 0 to the right. You are allowed only to
make jumps of the same length represented by some integer.

Find the minimal length of the jump enough to avoid all the obstacles.

Example

For inputArray = [5, 3, 6, 7, 9], the output should be
avoidObstacles(inputArray) = 4.
*/

int avoidObstacles(std::vector<int> inputArray) {
    // If mod of all obstacle by a number are not zero , that number is the answer.
    for (int i = 2; true; i++)
        if (none_of(begin(inputArray), end(inputArray), [i](int obstacle) {
                return obstacle % i == 0;
            }))
            return i;
}
