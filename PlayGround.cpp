#include <bits/stdc++.h>
using namespace std;

class Solution {

    void getFirstCharacter(vector<string>& strs, char &ch, int &i)
    {
        ch = '\0';
        if (i < strs[0].size()) {
            ch = strs[0][i];
        }
    }
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int size = strs.size(), i=0;
        string result = "";
        bool breakLoop = false;

        while (!breakLoop)
        {
            char firstChar;
            getFirstCharacter(strs, firstChar, i);
            for (int j=0; j<size; ++j)
            {
                if (i < strs[j].size()) {
                    breakLoop = (firstChar != strs[j][i]) ? true : false;
                }
                else {
                    breakLoop = true;
                }
            }
            if (!breakLoop) {
                result += firstChar;
            }
            ++i;
        }

        return result;
    }
};

int main ()
{

    vector<string> strs = {"aaa", "aa", "aaa"};
    Solution obj;
    obj.longestCommonPrefix(strs);
    return 0;
}