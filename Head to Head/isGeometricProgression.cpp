#include "Header.h"
/*
Given a sequence determine if it's a geometric progression or not.
*/
bool isGeometricProgression(std::vector<int> sequence) {

	for (int i = 2; i < sequence.size(); i++) {
		if (sequence[i] * sequence[0] != sequence[i - 1] * sequence[1]) {
			return false;
		}
	}
	return true;
}