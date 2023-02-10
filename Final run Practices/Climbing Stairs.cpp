class Solution {
public:
int solve(int x){
    if(x<=1)
    return 1;
    return solve(x-1)+solve(x-2);
}
    int climbStairs(int n) {
        int x=solve(n);
        return x;
    }
};
