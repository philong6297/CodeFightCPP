/*
PEP 8, Style Guide for Python Code, requires a coder to write lines no longer than 79 characters. Given some line's length, find out if it satisfies PEP 8 requirements.

Example

For line = 35, the output should be
pepEight(line) = true;
For line = 85, the output should be
pepEight(line) = false.
*/
bool pepEight(int line) {
	return line < 80;
}
`