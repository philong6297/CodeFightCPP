/*
Given a sequence of integers as an array, determine whether it is possible to obtain a strictly
increasing sequence by removing no more than one element from the array.

Example

For sequence = [1, 3, 2, 1], the output should be
almostIncreasingSequence(sequence) = false;

There is no one element in this array that can be removed in order to get a strictly increasing
sequence.

For sequence = [1, 3, 2], the output should be
almostIncreasingSequence(sequence) = true.

You can remove 3 from the array to get the strictly increasing sequence [1, 2]. Alternately, you can
remove 2 to get the strictly increasing sequence [1, 3].
*/
bool almostIncreasingSequence(std::vector<int> sequence) {
    /* Longest Increasing Subsequence:
    *Let S(l) = the smallest value can be of last element in an increasing subsequence of length l
    ( 0<= l <= size(sequence))
    * So from this size of S will be the size of longest increasing subsequence(LIS) of input
    sequence *iterate through every element E of the input sequence:

    -If E > last element of S, S+=E : we have found a new size of LIS.

    -Else find element with smallest index in S, which is >= X, update it to X. Because S is sorted
    at any time, let think about using binary search to find the element in log(N).

    *Back to the task, check if size(S) == size(sequence)-1

    *Total runtime - N integers and a binary search for each of them - O(N log N)
    */
    vector<int> s;
    s.push_back(sequence[0]);
    for (int i = 1; i < size(sequence); i++)
        // if sequence[i] > last element of S, S+= sequence[i]
        if (sequence[i] > s.back())
            s.push_back(sequence[i]);
        // binary search for fisrt element in S which its value >= sequence[i]
        else
            *lower_bound(begin(s), end(s), sequence[i]) = sequence[i];
    return size(s) == size(sequence) - 1;
}
