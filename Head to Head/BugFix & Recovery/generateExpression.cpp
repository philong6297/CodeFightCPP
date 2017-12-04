/*
Given an arithmetic expression containing symbols +, -, * and underscores (_) instead of digits determine whether it is possible to replace all underscores with digits from the given list, so that the result of the obtained expression is equal to some number k.

Leading zeros in the numbers of the expression are allowed.

The number of given digits is equal to the number of underscores in the expression.

Example

For k = 2, expression = "__-_*_" and digits = [1, 3, 4, 4], the output should be
generateExpression(k, expression, digits) = true.

It is possible to construct an expression 14-3*4 which is equal to 2, so the answer is true.
*/
bool generateExpression(int k, std::string expression,
	std::vector<int> digits) {
	struct Helper {
		int evaluate(std::string expression) {
			std::size_t leftmostMinus = expression.find('-');
			std::size_t leftmostPlus = expression.find('+');
			if (std::min(leftmostMinus, leftmostPlus) < expression.size()) {
				std::size_t firstOperator = std::min(leftmostMinus, leftmostPlus);
				if (expression[firstOperator] == '+') {
					return evaluate(expression.substr(0, firstOperator)) +
						evaluate(expression.substr(firstOperator + 1));
				}
				else {
					return evaluate(expression.substr(0, firstOperator)) -
						evaluate(expression.substr(firstOperator + 1));
				}
			}
			else {
				std::size_t leftmostAsterisk = expression.find('*');
				if (leftmostAsterisk == std::string::npos) {
					return stoi(expression);
				}
				else {
					return evaluate(expression.substr(0, leftmostAsterisk)) *
						evaluate(expression.substr(leftmostAsterisk + 1));
				}
			}
		}
	};

	std::size_t leftmostUnderscore = expression.find('_');
	if (leftmostUnderscore == std::string::npos) {
		Helper h;
		return h.evaluate(expression) == k;
	}
	else {
		for (int i = 0; i < digits.size(); i++) {
			std::string newExpression = expression;
			std::vector<int> newDigits = digits;
			newExpression[leftmostUnderscore] = char(int('0') + digits[i]);
			newDigits.erase(newDigits.begin() + i);
			if (generateExpression(k, newExpression, newDigits)) {
				return true;
			}
		}
		return false;
	}
}
