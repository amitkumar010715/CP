// note:
// (a+b)%m=((a%m) +(b%m))%m;
// (a*b)%m=((a%m) *(b%m))%m;
// (a+b)%m=((a%m) -(b%m) + m)%m;
// (a/b)%m=((a%m)*(b^-1)%m)%m; // b^-1 is multiplicative inverse



// a^(m-1)= 1 mod m
// a^(m-2)= a^-1 mod m // on multiply a^-1 both side 
            //or
//  inverse of a = (a^(m-2))%mod (or)  binexp(a,mod-2,mod);

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int mod=1e9+7;
     int binexp(int x,int r,int m){ // this is nothing but the pow(x,r).
      int y=1;
      while(r>0){
          if(r%2!=0){
              y=(y *x)%m;
              
          }
          x=(x*x)%m;
          r/=2;
      }
      return y;
    }
int main(int argc, char const *argv[])
{ int a;
cin>>a;
 int temp=binexp(a,mod-2,mod);// invese of a
return 0;
}



// ncr code:--
//   recursive 

    int nCr(int n, int r){
    //   ncr=n-1cr-1 + n-1cr;
    if(r>n){
        return 0;
    }
    if(r==0){
        return 1;
    }
    return (nCr(n-1,r-1)+nCr(n-1,r))%mod;
    }
// Memoisation
#define mod (int)(1e9+7)
int f(int n,int r,vector<vector<int>>& dp)
{
    if(n<r) return 0;
    if(r==0) return 1;
    if(dp[n][r]!=-1) return dp[n][r];
    return dp[n][r]=(f(n-1,r-1,dp)+0LL+f(n-1,r,dp))%mod;
}
int nCr(int n, int r){
    vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
    return f(n,r,dp);
}

// Tabulation
#define mod (int)(1e9+7)
int nCr(int n, int r){
    if(n<r) return 0;

    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int i=0;i<=n;i++) dp[i][0]=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            dp[i][j]=(dp[i-1][j-1]+0LL+dp[i-1][j])%mod;
        }
    }
    return dp[n][r];
}

// Space Optimisation
#define mod (int)(1e9 + 7)
int nCr(int n, int r)
{
    if (n < r)
        return 0;

    vector<int> prev(n + 1, 0), curr(n + 1, 0);
    prev[0] = 1;
    curr[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            curr[j] = (prev[j - 1] + 0LL + prev[j]) % mod;
        }
        prev = curr;
    }
    return curr[r];
}