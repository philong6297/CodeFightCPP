#include "Header.h"
/*
We define the weakness of number x as the number of positive integers smaller than x that have more divisors than x.

It follows that the weaker the number, the greater overall weakness it has. For the given integer n, you need to answer two questions:

	what is the weakness of the weakest numbers in the range [1, n]?
	how many numbers in the range [1, n] have this weakness?
Return the answer as an array of two elements, where the first element is the answer to the first question, and the second element is the answer to the second question.
*/
std::vector<int> weakNumbers(int n)
{
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int p = 2; p * p <= n; p++)
        if (prime[p])
        {
            for (int i = p * 2; i <= n; i += p)
                prime[i] = 0;
        }
    vector<int> d(n + 1, 0);
    vector<int> weakness(n + 1, 0);
    vector<int> answer = {0, 1};
    d[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int count = 1;
        int value = i;
        for (int p = 2; p <= value; p++)
        {
            if (prime[p])
            {
                int times = 1;
                while (value % p == 0)
                {
                    value /= p;
                    times++;
                }
                count *= times;
            }
        }
        d[i] = count;
        for (int j = 1; j < i; j++)
            if (d[j] > d[i])
                weakness[i]++;
        if (weakness[i] > answer[0])
        {
            answer[0] = weakness[i];
            answer[1] = 1;
        }
        else if (weakness[i] == answer[0])
            answer[1]++;
    }
    return answer;
}
