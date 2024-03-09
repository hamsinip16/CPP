/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.
*/

#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mapping = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty() || st.top() != mapping[c]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};

int main() {
    Solution solution;
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";
    string s4 = "([)]";
    string s5 = "{[]}";

    cout << "Is \"" << s1 << "\" valid? " << (solution.isValid(s1) ? "Yes" : "No") << endl;
    cout << "Is \"" << s2 << "\" valid? " << (solution.isValid(s2) ? "Yes" : "No") << endl;
    cout << "Is \"" << s3 << "\" valid? " << (solution.isValid(s3) ? "Yes" : "No") << endl;
    cout << "Is \"" << s4 << "\" valid? " << (solution.isValid(s4) ? "Yes" : "No") << endl;
    cout << "Is \"" << s5 << "\" valid? " << (solution.isValid(s5) ? "Yes" : "No") << endl;

    return 0;
}

