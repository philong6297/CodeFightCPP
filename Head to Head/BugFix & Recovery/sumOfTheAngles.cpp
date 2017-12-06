/*
Find the sum of the angles of a convex n-gon for a given n.

Example

For n = 3, the output should be
sumOfTheAngles(n) = 180.
*/

int sumOfTheAngles(int n) {
	int result = n * 180;
	result -= 360;
	return result;
}