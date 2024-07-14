#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 ifstream infile("input.txt");
 ofstream outfile("output.txt");
 int t;
 cin>>t;
 while (t--)
 {
    int n,m;
    cin>>n>>m;
    vector<ll>arr1(n);
    vector<ll>arr2(m);
    for (ll i = 0; i <n; i++)
    {
        cin>>arr1[i];
    }
    for (ll i = 0; i <m; i++)
    {
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    ll sum=0;
    for(ll int i=0;i<n/2;i++){
       sum+=abs(arr1[i]-arr2[m-i-1]);
    }
    int j=0;
      for(ll int i=n-1;i>=n/2;i--){
       sum+=abs(arr1[i]-arr2[j]);
       j++;

    }
    if(n%2!=0 && m>n){
        if(abs(arr1[n/2]-arr2[n/2])< abs(arr1[n/2]-arr2[m-n/2-1])){
            sum+=(abs(abs(arr1[n/2]-arr2[m-n/2-1])-abs(arr1[n/2]-arr2[n/2])));
        }
    }
    cout<<sum<<endl;
 }
 
 
return 0;
}