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
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(auto &x:arr)cin>>x;
    sort(arr.begin(),arr.end());
   if(k>=3){
    cout<<0<<endl;
    continue;
   }
   ll mini=arr[0];
    for(int i=0;i<n-1;i++){
        mini=min(mini,(arr[i+1]-arr[i]));
    }
    if(k==1){
        cout<<mini<<endl;
         continue;
    }
   if(k==2){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ll temp=(arr[j]-arr[i]);
           int lb=lower_bound(arr.begin(),arr.end(),temp)-arr.begin();
           if(lb<n)mini=min(mini,arr[lb]-temp);
           if(lb>0)mini=min(mini,temp-arr[lb-1]);
            
        }
    }
    cout<<mini<<endl;
   }

 }
 
 
return 0;
}