#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int strs = s.size();
        vector<vector<int>> digits(strs, vector<int>(strs, 0));
        for (int i = 0; i < strs; i++)
        {
            digits[i][i] = 1;
            if (i + 1 < strs)
            {
                if (s[i] == s[i + 1])
                {
                    digits[i][i + 1] = 1;
                }
                else
                {
                    digits[i][i + 1] = 0;
                }
            }
        }
        int start = 0;
        int len = 0;
        for (int i = 2; i < strs; i++)
        {
            for (int j = i; j < strs; j++)
            {
                if ((1 == digits[j - i + 1][j - 1]) && s[j - i] == s[j])
                {
                    digits[j - i][j] = 1;
                }
                else
                {
                    digits[j - i][j] = 0;
                }
            }
        }

        for (int i = 0; i < strs; i++)
        {
            for (int j = i; j < strs; j++)
            {
                if (1 == digits[i][j])
                {
                    if (j - i + 1 > len)
                    {
                        start = i;
                        len = j - i + 1;
                    }
                }
            }
        }
        return s.substr(start, len);
    }
};