/*
You are given some water tubes. For each i where i is the tube index, it is known that the ith tube contains wateri liters of liquid, but each minute flowPerMinutei liters flows out of it. After every minute you check the tubes. How many minutes will pass until you first see that all of them are empty?

Example

For water = [1, 2, 5] and flowPerMinute = [1, 1, 2], the output should be
waterTubes(water, flowPerMinute) = 3;
For water = [1, 2, 3] and flowPerMinute = [1, 1, 2], the output should be
waterTubes(water, flowPerMinute) = 2.
*/
int waterTubes(std::vector<int> water, std::vector<int> flowPerMinute) {
	int result = 0;

	for (int i = 0; i < water.size(); i++) {
		int minutes = water[i] / flowPerMinute[i];
		if (water[i] % flowPerMinute[i]) {
			minutes++;
		}
		if (result < minutes) {
			result = minutes;
		}
	}
	return result;
}