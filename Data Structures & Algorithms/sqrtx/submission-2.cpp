class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        // LINERA APPROACH
        // long long i=1;
        // while(i*i <= x){
        //     i++;
        // }
        // return i-1;

        // BINARY SEARCH APPROACH
        long long s = 1, e = x;
        long long ans = 0;
        while(s <= e){
            long long mid = s + (e-s)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x){
                ans = mid;
                s = mid + 1;
            }
            else e = mid - 1;
        }
        return ans;
    }
};