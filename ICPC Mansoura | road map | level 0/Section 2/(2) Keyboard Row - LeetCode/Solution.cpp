#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        vector<string> rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> result;
        
        for (int i = 0 ; i < words.size() ; i++)
        {
            string word = words[i];
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            bool isExist = true;
            for (int z = 0 ; z < rows.size() ; z++)
            {           
                bool found = false;
                for (int j = 0 ; j < word.length() ; j++)
                {
                    if (rows[z].find(word[j]) != string::npos)
                    {
                        found = true;
                    }
                    else {
                        found = false;
                        break; 
                    }
                }
                if (found) {
                    result.push_back(words[i]);
                    break; 
                }
            }
        }
        return result;
    }
};