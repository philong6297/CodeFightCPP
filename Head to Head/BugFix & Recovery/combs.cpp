/*
Miss X has only two combs in her possession, both of which are old and miss a tooth or two. She also has many purses of different length, in which she carries the combs. The only way they fit is horizontally and without overlapping. Given teeth' positions on both combs, find the minimum length of the purse she needs to take them with her.

It is guaranteed that there is at least one tooth at each end of the comb.
It is also guaranteed that the total length of two strings is smaller than 32.
Note, that the combs can not be rotated/reversed.

Example

For comb1 = "*..*" and comb2 = "*.*", the output should be
combs(comb1, comb2) = 5.
*/
int combs(std::string comb1, std::string comb2) {

	struct Helper {
		int getMask(std::string const & comb) {
			int mask = 0;
			for (int i = 0; i < comb.size(); i++) {
				char c = comb[i];
				mask = (mask << 1) + (c == '*');
			}
			return mask;
		}
	};
	Helper h;

	int m1 = h.getMask(comb1);
	int m2 = h.getMask(comb2);
	int len1 = comb1.size();
	int len2 = comb2.size();
	int answer = len1 + len2;
	for (int i = -len1; i <= len2; i++) {
		int tmp, length;
		if (i < 0) {
			tmp = m2 << (-i) & m1;
			length = std::max(-i + len2, len1);
		}
		else {
			tmp = m1 << (i)& m2;
			length = std::max(i + len1, len2);
		}
		if (tmp == 0 && answer > length) {
			answer = length;
		}
	}

	return answer;
}
