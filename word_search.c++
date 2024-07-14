

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int dx[4]={-1,0,1,0};
 int dy[4]={0,1,0,-1};

 void dfs(int x,int y,vector<vector<char>>&arr,vector<vector<int>>& visited,vector<pair<int,int>>&v, unordered_map<char,int>&mp,int n,int m){
   
   visited[x][y]=1;
   if (mp[arr[x][y]]>0)
   {
    v.push_back({x,y});
    mp[arr[x][y]]--;
   
   }
   for (int i = 0; i <4; i++)
   {
    int nrow=x+dx[i];
    int ncol=y+dy[i];
    
    if (nrow>=0 && ncol>=0 && nrow<n&& ncol<m && !visited[nrow][ncol])
    {
       dfs(nrow,ncol,arr,visited,v,mp,n,m);
    }
    
   }
   
  
 }

int main(int argc, char const *argv[])
{
 int n,m;
 cin>>n>>m;
  string s;
 cin>>s;
 unordered_map<char,int>mp;
 for(auto x:s){
    mp[x]++;
 }

 int x,y;
 vector<vector<char>>arr(n,vector<char>(m));
 for (int i = 0; i <n; i++)
 {
    for (int j = 0; j <m; j++)
    {
        cin>>arr[i][j];
           if (arr[i][j]==s[0])
    {
        x=i;
        y=j;
    }
    } 
    
 }

 vector<vector<int>>visited(n,vector<int>(m,0));
 vector<pair<int,int>>v;
 dfs(x,y,arr,visited,v,mp,n,m);

 for(auto x:v){
    cout<<arr[x.first][x.second]<<" ";
 }
//   for (int i = 0; i <n; i++)
//  {
//     for (int j = 0; j <m; j++)
//     {
//         cout<<visited[i][j];
   
//     } 
    
//  }

 
return 0;
}


// 3 3
// amit
// a x i
// z m y
// b c t