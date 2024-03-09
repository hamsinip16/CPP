//Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, start = 0;
        for(int end = 0; end < s.length(); ++end){
            char currentChar = s[end];
            for(int i = start; i < end; ++i){
                if(s[i] == currentChar){
                    start = i + 1;
                    break;
                }
            }
            maxLen = max(maxLen, end - start +1);
        }
        return maxLen;
    }
};
