/*
You are processing the results of an online poll and your task is to exclude answers that might have been submitted by bots from the final results. The poll consists of three questions, the answer to each one is either true or false. You think that a response is suspicious (i.e. it might be from a bot) if all of the submissions are the same.

Given a response list to each of the three questions, check if it might have come from a bot using the above described criteria.

Example

For ans1 = false, ans2 = false and ans3 = false, the output should be
isSuspiciousRespondent(ans1, ans2, ans3) = true;
For ans1 = true, ans2 = true and ans3 = false, the output should be
isSuspiciousRespondent(ans1, ans2, ans3) = false.
*/
bool isSuspiciousRespondent(bool ans1, bool ans2, bool ans3) {
	return (ans1 && ans2 && ans3) || (!ans1 && !ans2 && !ans3);
}
