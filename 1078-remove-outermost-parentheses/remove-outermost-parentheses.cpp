class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter = 0;
        string ans;

        for (char c : s) {
            if (c == '(') {
                if (counter > 0)
                    ans += c;
                counter++;
            } else { // c == ')'
                counter--;
                if (counter > 0)
                    ans += c;
            }
        }

        return ans;
    }
};