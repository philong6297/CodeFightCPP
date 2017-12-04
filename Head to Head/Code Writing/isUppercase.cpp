#include "Header.h"
/*
Determine if an input is an uppercase Latin letter.

Example

For symbol = 'A', the output should be
isUppercase(symbol) = true;
For symbol = 'a', the output should be
isUppercase(symbol) = false;
For symbol = '0', the output should be
isUppercase(symbol) = false.
*/

bool isUppercase(char symbol) {

	if (isalpha(symbol) && symbol < 91) {
		return true;
	}
	return false;
}
