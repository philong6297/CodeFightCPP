/*
Programmer John was studying Lisp programming language, when he suddenly realized that he still does not have a calculator written by himself. Every respected programmer should have one! That is why he decided to write a classic calculator that accepts expressions in Polish notation.

Example

For tokens = ["+", "3", "7"], the output should be
polishNotation(tokens) = 10;
For tokens = ["*", "-", "5", "6", "7"], the output should be
polishNotation(tokens) = -7;
For tokens = ["-", "5", "*", "6", "7"], the output should be
polishNotation(tokens) = -37.
Examples in conventional notation

3 + 7 = 10;
(5 - 6) * 7 = -7;
5 - (6 * 7) = -37.
*/
int polishNotation(std::vector<std::string> tokens) {
	struct Helper {
		bool isNumber(std::string stringRepresentation) {
			return stringRepresentation.size() > 1 ||
				'0' <= stringRepresentation[0] &&
				stringRepresentation[0] <= '9';
		}
	};
	std::vector<std::string> myStack;
	Helper h;

	for (int i = 0; i < tokens.size(); i++) {
		myStack.push_back(tokens[i]);
		while (myStack.size() > 2 && h.isNumber(myStack[myStack.size() - 1])
			&& h.isNumber(myStack[myStack.size() - 2])) {
			int leftOperand = stoi(myStack[size(myStack) - 2]);
			int rightOperand = std::stoi(myStack[myStack.size() - 1]);
			int result = 0;
			if (myStack[myStack.size() - 3] == "-") {
				result = leftOperand - rightOperand;
			}
			if (myStack[myStack.size() - 3] == "+") {
				result = leftOperand + rightOperand;
			}
			if (myStack[myStack.size() - 3] == "*") {
				result = leftOperand * rightOperand;
			}
			myStack.erase(myStack.end() - 3, myStack.end());
			myStack.push_back(std::to_string(result));
		}
	}

	return std::stoi(myStack[0]);
}
