#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
    stack<int>s;
 int arr[8]={11,13,5,20,7,6,21,3};

s.push(arr[0]);
int next=-1;
for (int i = 1; i <8; i++)
{
     if (arr[i]>s.top())
     {
        while (!s.empty())
        {
            next=arr[i];
            cout<<s.top()<<" "<<next<<endl;
            s.pop();
        }
        s.push(arr[i]);
        next=-1;
        
     }
     else
     {
        s.push(arr[i]);
     }


 
     
}

 while (!s.empty())
 {
    cout<<s.top()<<" "<<next<<endl;
    s.pop();
    
 }


return 0;
}




// // function for NGE according to input 

   //  vector<long long> nextLargerElement(vector<long long> arr, int n){
   //      // Your code here
   //      stack<long long>s;
   //      vector<long long>ans(n,-1);
   //      s.push(0);
   //      for(long long i=1;i<n;i++){
   //          while(!s.empty()&&arr[i]>=arr[s.top()]){
   //              ans[s.top()]=arr[i];
   //              s.pop();
   //          }
   //          s.push(i);
   //      }
   //      return ans;
   //  }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     stack<int>s;
//    //  vector<int>v;
//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mp[arr[i]]=-1;
      
//     }
//        s.push(arr[0]); 
   
//      for(int i=1;i<n;i++){
//       //int temp =  arr[i];
//          while(!s.empty()&&arr[i]>s.top()){
//             mp[s.top()]=arr[i];
//             s.pop();
//          }
//          s.push(arr[i]);
//       }
    
   

// for (int i = 0; i <mp.size(); i++)
// {
//    cout<<mp[arr[i]];
// }



//    return 0;
// }