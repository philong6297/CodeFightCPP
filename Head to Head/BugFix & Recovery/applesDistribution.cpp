/*
There are some apples that you want to give out as a present. You are going to distribute them between some gift boxes in such a way that all the boxes will contain an equal number of apples. You can leave out some of the apples, but no more than maxResidue. You also don't want to leave out more apples than necessary; that is, if each box contains x apples, the number of left out apples should be less than x.

Assume that you have an infinite number of gift boxes, and that all of them have the capacity of boxCapacity. In how many ways can you distribute the apples satisfying all of the above conditions?

Example

For apples = 7, boxCapacity = 4 and maxResidue = 1, the output should be
applesDistribution(apples, boxCapacity, maxResidue) = 3.

There are three ways to distribute the apples:

seven boxes, one apple into each box, no apples left out;
three boxes, two apples into each box, one apple left out;
two boxes, three apples into each box, one apple left out.
*/

int applesDistribution(int apples, int boxCapacity, int maxResidue) {
	int result = 0;
	for (int i = 1; i <= boxCapacity; i++) {
		if (apples % i <= maxResidue) {
			result++;
		}
	}
	return result;
}
