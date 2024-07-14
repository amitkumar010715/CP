/*NOTE:---
 if( constrain is >10^4){
    then its 1D dp
 }*/









// // fabonacci with dp 
// //top town approch(recursive+memoization)

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
 
//  int fab(int n,vector<int>&dp){
//     if (n<=1)
//     {
//         return n;
//     }

//     if (dp[n]!=-1) // check karega ki pahle se isme value agar aa gayi hai kisi call me then yahi se return kar dega else goes to line no.16 
//     {
//         return dp[n];
//     }
    
//      dp[n]=fab(n-1,dp)+fab(n-2,dp);
//      return dp[n];
//  }
// int main(int argc, char const *argv[])
// {
//  int n;
//  cin>>n;
// vector<int>dp(n+1);
// for (int i = 0; i <=n; i++)
// {
//     dp[i]=-1;
// }

//  cout<<fab(n,dp);

// return 0;
// }

                    // **** bottom up approch  **


#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;

   for (int i = 2; i <=n; i++)
   {
    dp[i]=dp[i-1]+dp[i-2];
   }
    cout<<dp[n];
 
return 0;
}
            
                // done by variable only space complexity became now O(1)


#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;

 int prev1=1;
 int prev2=0;


 for (int i = 2; i <=n; i++)
 {
    int curr=prev1+prev2;

    // shifting logic
     prev2=prev1;
     prev1=curr;
 }
 cout<<prev1;
return 0;
}