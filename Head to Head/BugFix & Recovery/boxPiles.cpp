#include "Header.h"
/*
A pile of boxes can be constructed by placing boxes one on top of the other forming a vertical column (it is not possible to place more than one box on top of another one directly). Each box has a strength value - the number of boxes that it can be under without collapsing.

Given some boxes with their strength values, calculate the minimal number of piles that need to be constructed to use up all of these boxes.
*/
int boxPiles(std::vector<int> a) {

	std::sort(a.begin(), a.end());
	std::vector<bool> used(a.size(), false);
	int usedNum = 0;
	int answer = 0;
	while (usedNum < (int)used.size()) {
		int height = 0;
		for (int i = 0; i < (int)a.size(); i++) {
			if (used[i] == false && a[i] >= height) {
				height++;
				used[i] = true;
				usedNum++;
			}
		}
		answer++;
	}

	return answer;
}