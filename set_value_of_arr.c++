#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;


           /*ASSIGNING VALUE OF 2D VECTOR*/

 vector<vector<int>>arr(n,vector<int>(m,4));// 2d matrix assignment;
 for (int i = 0; i <n; i++)
 {
   for (int j = 0; j <m; j++)
   {
     cout<<arr[i][j];
   }
   cout<<endl;
 }

                  /* TAKING VALUE OF 2D ARRAY*/

vector<vector<int>>arr(n,vector<int>(m));// 2d matrix assignment;
 for (int i = 0; i <n; i++)
 {
   for (int j = 0; j <m; j++)
   {
     cin>>arr[i][j];
   }
   cout<<endl;
 }

 for (int i = 0; i <n; i++)
 {
   for (int j = 0; j <m; j++)
   {
     cout<<arr[i][j];
   }
   cout<<endl;
 }



           /*how to set the value of arr*/


 int arr[n]={6};  // this will not set all element of arr is to {6} this technique is only for zero(0).
 vector<int>v(n,6);  // this will set all element of arr is to {6}.

return 0;
}