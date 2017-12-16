/*
You are ordering Coffee at a vending machine and thinking how you would implement the algorithm that chooses which coffee to give you based on a keypad selection.

Example

For number = 2, the output should be
myCoffee(number) = "Colombian".
*/
std::string myCoffee(int number) {
	std::string coffees[3] = { "French Roast","Colombian","Kona" };
	return coffees[number - 1];
}

