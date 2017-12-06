/*
A robot is standing at the (0, 0) point of the Cartesian plane and is oriented towards the vertical (y) axis in the direction of increasing y values (in other words, he's facing up, or north). The robot executes several commands each of which is a single positive integer. When the robot is given a positive integer K it moves K squares forward and then turns 90 degrees clockwise.

The commands are such that both of the robot's coordinates stay non-negative.

Determine if there is a square that the robot visits at least twice after executing all the commands.

Example

For a = [4, 4, 3, 2, 2, 3], the output should be
robotWalk(a) = true.

The path of the robot looks like this:



The point (4, 3) is visited twice, so the answer is true.
*/

bool robotWalk(std::vector<int> a) {
	int minX = 0;
	int minY = -1;
	int maxX = INT_MAX;
	int maxY = INT_MAX;

	int x = 0;
	int y = 0;

	for (int i = 0; i < a.size(); i++) {
		switch (i % 4) {

		case 0:
			y += a[i];
			if (y >= maxY) {
				return true;
			}
			maxY = y;
			break;

		case 1:
			x += a[i];
			if (x >= maxX) {
				return true;
			}
			maxX = x;
			break;

		case 2:
			y -= a[i];
			if (y <= minY) {
				return true;
			}
			minY = y;
			break;

		case 3:
			x -= a[i];
			if (x <= minX) {
				return true;
			}
			minX = x;
			break;
		}
	}

	return false;
}
