#include <iostream>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int maxlen = 0;
        int start = 0;
        int ssize = s.size();
        int tempi = 0;
        int j = 0;
        for (int i = 0; i < ssize; i++)
        {
            tempi = i;
            for (int k = ssize - 1; k > i; k--)
            {
                if (s[i] == s[k])
                {
                    for (j = k; tempi < j; j--)
                    {
                        if (s[tempi] == s[j])
                        {
                            ++tempi;
                        }
                        else
                        {
                            tempi = i;
                            break;
                        }
                    }
                    int tt = 2 * (tempi - i);
                    if (tempi == j)
                    {
                        if (maxlen < tt + 1)
                        {
                            maxlen = tt + 1;
                            start = i;
                        }
                    }
                    else
                    {
                        if (maxlen < tt)
                        {
                            maxlen = tt;
                            start = i;
                        }
                    }
                    tempi = i;
                }
            }
        }
        if (maxlen == 0)
        {
            return s.substr(0, 1);
        }
        return s.substr(start, maxlen);
    }
};