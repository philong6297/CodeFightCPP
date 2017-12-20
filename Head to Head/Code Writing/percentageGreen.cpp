/*
Given the number of green apples on a shelf and total number of apples return the percentage of green apples.

Example

For green = 2 and total = 5, the output should be
percentageGreen(green, total) = 40.
*/
int percentageGreen(int green, int total) {
	return (double)green / total * 100;
}
