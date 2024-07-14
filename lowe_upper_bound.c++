// note: sorted


lower bound gives index of first occurence of key 
upper bound gives index of next number after the last occurence of key

if(key not present ) then it gives index right range:
ex: 1,3,4,5,8,15 key=7
     we know 7 is in range (5,8) so upper and lower both bound gives index of right limit i.e 4.




if key is greater than all element of array then lower uper will give idex an size of arr.
ex:
    int n=8,key=6;
  int arr[n]={1,1,1,2,2,2,5,5};
 
  int x=lower_bound(arr,arr+n,key)-arr; return 8
  int y=upper_bound(arr,arr+n,key)-arr;  return 8




//   count smaller element after self
// using lower bound

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
  
    vector<int> ans,temp;
    for(int i=0;i<n;i++)
    {
        temp.push_back(arr[i]);
    }
    
    sort(temp.begin(),temp.end());
    
    for(int i=0;i<n;i++)
    {
        int index=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
        ans.push_back(index);
        temp.erase(temp.begin()+index);// it delete the particular index value
    }
    for(auto x: ans){
        cout<<x<<" ";
    }
 
return 0;
}





// binary search ITMO practice 
 /* hum l=mid+1,h=mid-1 nahi karenge agar hume double me ans chahiye 
  ya ans real no me aa sakta hai so hume log2(maxans/esp) iteration chahiye approx 100 me ho hi jata hai so l=mid and h=mid karenge .*/

// example:ques: rope
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  n,k;

vector<int>arr;
 bool good(double mid){
    int x=0;
    for(int i=0;i<n;i++){
       x+=floor(arr[i]/mid);
    }
    return (x>=k);
 }
int main(int argc, char const *argv[])
{

 cin>>n>>k;
 arr.resize(n);
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }

 double l=0,h=1e8;
double ans;
 cout<<setprecision(20);
 for(int i=0;i<100;i++){
 double mid=(l+h)/2;
  if(good(mid)){
    l=mid;// we can shift by one because optimal sol can be in deciamal
    ans=mid;
  }
  else{
    h=mid;//dfs
  }
 
 }

 cout<<ans<<endl;
return 0;
}
