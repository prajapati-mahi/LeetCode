class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        function<void(string, int, int)> dfs = [&](string current, int open, int close) {
            if (current.size() == 2 * n) {
                result.push_back(current);
                return;
            }
            if (open < n) dfs(current + '(', open + 1, close);
            if (close < open) dfs(current + ')', open, close + 1);
        };
        dfs("", 0, 0);
        return result;
    }
};