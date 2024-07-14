#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 void built(int ind,int low,int high,int arr[],vector<int>&seg){
  if(low==high){
    seg[ind]=arr[low];
    return;
  }
    int mid=(low+high)/2;
    built(2*ind+1,low,mid,arr,seg);
    built(2*ind+2,mid+1,high,arr,seg);
    seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);

 }

int query(int ind,int low ,int high,int l,int r,int arr[],vector<int>&seg){
    // no overlap
       if(low>r || high<l ){
        return INT_MAX;
       }
    // full overlaped
    if(low>=l && high<=r){
        return seg[ind];
    }
    else{// partially 
        int mid=(low+high)/2;
        return min(query(2*ind+1,low,mid,l,r,arr,seg),query(2*ind+2,mid+1,high,l,r,arr,seg));
    
    }
}


void update(int ind,int low,int high,int i,int val,vector<int>&seg){
     if (low==high)
     {
        seg[ind]=val;
        return;
     }
     int mid=(low+high)/2;
     if(i<=mid){
      update(2*ind+1,low,mid,i,val,seg);        
     }
     else{
    update(2*ind+2,mid+1,high,i,val,seg);
     }
     seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
     
}

int main(int argc, char const *argv[])
{
 
 int n;
 cin>>n;
 vector<int>seg(4*n);
 int arr[n];
 for (int i = 0; i <n; i++)
 {
    cin>>arr[i];
 }
 built(0,0,n-1,arr,seg);
 
// for (int i = 0; i <4*n; i++)
// {
//     cout<<seg[i]<<" ";
// }
// cout<<endl;

int t;
cin>>t;
while (t--)
{
    int type;
    cin>>type;
  
    if(type==1) {
      int l,r;
    cin>>l>>r;  
    cout<<query(0,0,n-1,l,r,arr,seg)<<endl;
    } 
  else{
    int i,val;
    cin>>i>>val;
    update(0,0,n-1,i,val,seg);// update segment tree
    arr[i]=val;//update arr


 for (int i = 0; i <4*n; i++)
{
    cout<<seg[i]<<" ";
}
cout<<endl;
 for (int i = 0; i <n; i++)
 {
    cout<<arr[i];
 }

  }
}

return 0;
}