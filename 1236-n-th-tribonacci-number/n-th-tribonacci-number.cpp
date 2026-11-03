class Solution {
public:
    int tribonacci(int n) {
        double a[38];
        a[0]=0;
        a[1]=a[2]=1;
        for (int i=0;i<=34;i++)
        {
            a[i+3]=a[i]+a[i+1]+a[i+2];
        }
        return a[n];
    }
};