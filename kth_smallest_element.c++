#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 int arr[5]={2,3,6,4,9};
 int k=3; //3rd smallest element
 priority_queue<int,vector<int>,greater<int>>pq;
 for (int i = 0; i <5; i++)
 {
    pq.push(arr[i]);
 }
 int count=0;
 while (!pq.empty())
 {
    count++;
   int temp=pq.top();

    pq.pop();
    if (count==k)
    {
        cout<<temp;
       break;
    }
    
 }
 

return 0;
}