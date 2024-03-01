class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.length() , start = 0 , max_len = 1;
        for(int i = 0 ; i < n ; i++)
        {
            // Handling Palindrome if characters are consecutive
            int j = i-1;
            int k = i;
            while(j >= 0 && k < n && s[j] == s[k])
            {
                if(k-j+1 > max_len)
                {
                    max_len = k-j+1;
                    start = j;
                }
                j--; k++;
            }
            
            // Handling Palindrome if characters are separeted
            j = i-1;
            k = i+1;
            while(j >= 0 && k < n && s[j] == s[k])
            {
                if(k-j+1 > max_len)
                {
                    max_len = k-j+1;
                    start = j;
                }
                j--; k++;
            }
        }
        return s.substr(start, max_len);
    }
};