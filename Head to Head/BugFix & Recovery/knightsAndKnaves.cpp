/*
There is an island where all inhabitants are either knights, who always tell the truth, or knaves, who always lie. Once a visitor came to the island and met a group of its inhabitants. He asked everyone to tell about each person in a group whether he was a knight or a knave, and wrote down the answers. But now he is not sure if his notes are correct, so your task is to check if there is a combination of knights and knaves that would have given the same answers the visitor got.

Example

For answers = [5, 2, 5], the output should be
knightsAndKnaves(answers) = true.

It is possible that the 1st and the 3rd inhabitants are knights, while the 2nd is a knave, so their answers are 101, 010 and 101.

For answers = [0], the output should be
knightsAndKnaves(answers) = false.

Both knight and knave would have called themselves a knight.

For answers = [3, 3], the output should be
knightsAndKnaves(answers) = true.

There can be either two knights or two knaves in the group.
*/

bool knightsAndKnaves(std::vector<int> answers) {

	int n = answers.size();
	std::vector<bool> isKnight(n);
	isKnight[0] = true;
	for (int i = 1; i < n; i++) {
		isKnight[i] = answers[0] >> i & 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (
				!(isKnight[i] ^ isKnight[j]) ^
				(answers[i] >> j & 1)
				) {
				return false;
			}
		}
	}

	return true;
}
