#include "header.h"
/*
Lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7.
*/
bool isLuckyNumber(int n) {
	while (n > 0) {
		int tmpDigit = n % 10;
		if (tmpDigit != 7 && tmpDigit != 4) {
			return false;
		}
		n /= 10;
	}
	return true;
}