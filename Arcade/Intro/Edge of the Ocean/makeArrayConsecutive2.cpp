/*
Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, each statue
having an non-negative integer size. Since he likes to make things perfect, he wants to arrange them
from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He
may need some additional statues to be able to accomplish that. Help him figure out the minimum
number of additional statues needed.

Example

For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive2(statues) = 3.

Ratiorg needs statues of sizes 4, 5 and 7.
*/

int makeArrayConsecutive2(std::vector<int> statues) {
    int maxValue = statues[0], minValue = statues[0];
    for (int i = 1; i < size(statues); i++)
        maxValue = max(maxValue, statues[i]), minValue = min(minValue, statues[i]);
    return maxValue - minValue + 1 - size(statues);
}