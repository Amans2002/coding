class Solution {
public:
    bool isCircularSentence(string s) 
    {
        int n = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (s[i - 1] != s[i + 1]) return false;
            }
        }
        return (s[0] == s[n - 1]);
    }
};