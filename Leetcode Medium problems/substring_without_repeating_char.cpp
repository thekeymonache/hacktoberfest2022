/*Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int res=0;
        for(int i=0;i<n;i++){
            set<char> st;
            for(int j=i;j<n;j++){
                if(st.find(s[j])!=st.end()){
                    break;
                }
                else{
                    res=max(res,j-i+1);
                    st.insert(s[j]);
                }
            }
            st.erase(s[i]);
        }
        return res;
    }
};