/*
Given the age of a person and the adulthood age in a particular country, determine if the person is considered an adult in that country. Note that people whose age is the same as the adulthood age are considered adult.

Example

For age = 18 and adulthoodAge = 21, the output should be
isAdult(age, adulthoodAge) = false.
*/
bool isAdult(int age, int adulthoodAge) {
	bool answer;
	if (adulthoodAge <= age) {
		answer = true;
	}
	else {
		answer = false;
	}
	return answer;
}
