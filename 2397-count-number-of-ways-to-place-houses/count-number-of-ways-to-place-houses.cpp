class Solution {
public:
    int countHousePlacements(int n) {
        vector<long long >a(n+1,0);
        int  MOD= 1e9+7;
        a[0]=1;
        a[1]=2;
        for(int i=2;i<=n;i++)
        {
            a[i]=(a[i-1]+a[i-2])% MOD ;
        }
        long long ans= (a[n]*a[n])% MOD;
        return ans;
    }
};