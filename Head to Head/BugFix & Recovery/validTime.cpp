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
bool validTime(std::string Time) {

	struct Helper {
		int charToInt(char symbol) {
			return int(symbol) - int('0');
		}
	};

	Helper h;

	int hours = h.charToInt(Time[0]) * 10 + h.charToInt(Time[1]),
		minutes = h.charToInt(Time[3]) * 10 + h.charToInt(Time[4]);

	if (hours < 24 && minutes < 60) {
		return true;
	}
	return false;
}
