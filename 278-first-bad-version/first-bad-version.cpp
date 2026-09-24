// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        return minimize(0,n);
    }
    int minimize(long long low,long long  high)
    {
        long long  mid=(low+high)/2;
        //base case
        if(low==high) return low;
        if(isBadVersion(mid))
        return minimize(low,mid); // if its true then either mid or left to mid is at fault
        //cause the only case mid would be bad is by itself or by the ones before it
        else
        return minimize(mid+1,high); //if mid is not bad , bad might exist right to it
    }
};