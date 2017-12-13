/*
Check if the given string is a correct time representation of the 24-hour clock.

Example

For time = "13:58", the output should be
validTime(time) = true;
For time = "25:51", the output should be
validTime(time) = false;
For time = "02:76", the output should be
validTime(time) = false.
*/
bool validTime(std::string time) {
	int h = time[0] * 10 + time[1] - 528;
	int m = time[3] * 10 + time[4] - 528;
	return (h >= 0 && h<24 && m >= 0 && m < 60);
}
