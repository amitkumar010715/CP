#define mod 1000000007; //but #define mod 1e9+7 not valid
class Solution {
  public:
 //int mod =1e9; is valid and int mod= 1000000007 is also valid
    int nthFibonacci(int n){
        // code here
        vector<int>dp(n+1);
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[n];
    }
};