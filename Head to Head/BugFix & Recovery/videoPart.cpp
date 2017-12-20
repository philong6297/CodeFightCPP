/*
You have been watching a video for some time. Knowing the total video duration find out what portion of the video you have already watched.

Example

For part = "02:20:00" and total = "07:00:00", the output should be
videoPart(part, total) = [1, 3].

You have watched 1 / 3 of the whole video.
*/

std::vector<int> videoPart(std::string part, std::string total) {

	struct Helper {

		int getSeconds(std::string const & time) {
			int h = std::stoi(time.substr(0, 2)),
				m = std::stoi(time.substr(3, 2)),
				s = std::stoi(time.substr(6, 2));
			return h * 60 * 60 + m * 60 + s;
		}

		int gcd(int a, int b) {
			while (a > 0) {
				int tmp = a;
				a = b % a;
				b = tmp;
			}
			return b;
		}
	};
	Helper h;

	int partTime = h.getSeconds(part);
	int totalTime = h.getSeconds(total);
	int divisor = gcd(partTime, totalTime);
	return std::vector<int> {partTime / divisor, totalTime / divisor};
}

