#include<algorithm>
#include<cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        for(char &c:s)
        {
            c=tolower(c);
        }
        s.erase(remove_if(s.begin(),s.end(),[](char c){
            return !isalnum(c);
        }),s.end());
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-i-1])
            return false;
        }
        return true;
    }
};