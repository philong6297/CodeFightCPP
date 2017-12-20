/*
As an economist, you are interested in Pingland PING to Pongland PONG currency chart. In a conference that will take place really soon, you want to show everyone that PING/PONG rate has been increasing lately. In order to do this you decided to remove from the chart some points so that the remaining points form a strictly increasing sequence. Find the smallest number of points you have to remove.

Example

For chart = [3, 2, 6, 4, 5, 1, 7], the output should be
chartFix(chart) = 3.

After you remove points 2, 6, and 1 the remaining points will form a sequence [3, 4, 5, 7], which is strictly increasing.
*/
int chartFix(std::vector<int> chart) {
	vector<int> s;
	s.push_back(chart[0]);
	for (int i = 1; i<size(chart); i++)
		if (chart[i] > s.back())
			s.push_back(chart[i]);
		else *lower_bound(begin(s), end(s), chart[i]) = chart[i];
		return size(chart) - size(s);
}
