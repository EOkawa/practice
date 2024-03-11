class Solution {

public:
    string longestPalindrome(string s) {
        if (s.size() == 1) 
            return s;

        string temp;
        string longest;

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; ((j <= i) && (s[i-j] == s[i+j])); j++) {
                temp = s.substr(i-j, 1+2*j);
            }
            longest = (temp.size() > longest.size())? temp : longest; 
            for (int k = 0; ( (k <= i) && (s[i-k] == s[i+k+1]) ); k++) {
                temp = s.substr(i-k, 2+2*k);
            }
            longest = (temp.size() > longest.size())? temp : longest; 
        }
        return longest;
    }
};
