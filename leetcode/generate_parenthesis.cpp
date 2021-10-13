class Solution
{
public:
    void backtrack(vector<string> &v, string s, int open, int close, int max)
    {
        if (s.size() == max * 2)
        {
            v.push_back(s);
            return;
        }
        if (open < max)
            backtrack(v, s + '(', open + 1, close, max);
        if (close < open)
            backtrack(v, s + ')', open, close + 1, max);
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> v;
        backtrack(v, "", 0, 0, n);
        return v;
    }
};
