/*
Proper nouns always begin with a capital letter, followed by small letters.

Correct a given proper noun so that it fits this statement.

Example

For noun = "pARiS", the output should be
properNounCorrection(noun) = "Paris";
For noun = "John", the output should be
properNounCorrection(noun) = "John".
*/
std::string properNounCorrection(std::string noun) {

	struct Helper {
		bool isLowerCase(char symbol) {
			if ('a' <= symbol && symbol <= 'z') {
				return true;
			}
			return  false;
		}
	};
	Helper h;

	std::string result = "";

	if (h.isLowerCase(noun[0])) {
		result += noun[0] - 'a' + 'A';
	}
	else {
		result += noun[0];
	}

	for (int i = 1; i < noun.length(); i++) {
		if (!h.isLowerCase(noun[i])) {
			result += noun[i] - 'A' + 'a';
		}
		else {
			result += noun[i];
		}
	}

	return result;
}
