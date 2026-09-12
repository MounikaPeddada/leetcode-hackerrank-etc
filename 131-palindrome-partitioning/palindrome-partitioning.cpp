class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string>path;
        vector<vector<string>>ans;
        solve(0,s,path,ans);
        return ans;
    }
    void solve(int ind,string&s,vector<string>&path,vector<vector<string>>&ans)
    {
        if(ind==s.size()) //base case
        {
            ans.push_back(path);
            return;
        }
        for(int i=ind;i<s.size();i++)
        {
            if(ispali(s,ind,i)==true)
            {
                path.push_back(s.substr(ind,i-ind+1));
                solve(i+1,s,path,ans);
                path.pop_back();
            }
        }
    }
    bool ispali(string &s,int start,int end)
    {
        while(start<end)
        {
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
};