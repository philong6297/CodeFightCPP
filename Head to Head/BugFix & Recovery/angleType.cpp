/*
Given the angle measure, find its type. Here's how different angles are called:

angles less than 90� are called "acute" angles;
an angle equal to 90� is called a "right" angle;
angles between 90� and 180� are called "obtuse" angles;
an angle equal to 180� is called a "straight" angle.
Example

For measure = 125, the output should be
angleType(measure) = "obtuse";
For measure = 72, the output should be
angleType(measure) = "acute".
*/
std::string angleType(double measure) {

	if (measure < 90) {
		return "acute";
	}

	if (measure == 90) {
		return "right";
	}

	if (measure < 180) {
		return "obtuse";
	}

	return "straight";
}
