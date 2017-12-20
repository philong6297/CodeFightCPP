/*
Run-length encoding algorithm (RLE) works by taking the occurrence of each repeating character and outputting that number along with a single character of the repeating sequence.

We need an algorithm that applies the RLE to a given string.

Example

For inputString = "abbaaaac", the output should be
runLengthEncoding(inputString) = "1a2b4a1c".
*/
std::string runLengthEncoding(std::string inputString) {

	int repeatLength = 1;
	std::string answer = "";
	for (int i = 1; i < inputString.length(); i++) {
		if (inputString[i] != inputString[i - 1]) {
			answer += std::to_string(repeatLength);
			answer += inputString[i - 1];
			repeatLength = 1;
		}
		else {
			repeatLength++;
		}
	}
	answer += std::to_string(repeatLength);
	answer += inputString[inputString.length() - 1];
	return answer;
}
