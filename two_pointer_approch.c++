#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 int arr[5]={4,5,6,3,1};
 int arr2[5]={9,5,2,3,1};

 sort(arr,arr+5);
 int k=8;
 int p1=0,p2=4;
 while (arr[p1]+arr[p2]!=8)
 {
    if (arr[p1]+arr[p2]>8)
    {
       p2--;
    }
    if (arr[p1]+arr[p2]<8)
    {
        p1++;
    }
    
 }
 cout<<arr[p1]<<" "<<arr[p2];
 
 
return 0;
}