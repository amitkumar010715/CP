
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>adj[100000];
 void bfs(int v,int e){ 
   while (e--)
   {
    int x,y;
    cin>>x>>y;
     adj[x].push_back(y);
    adj[y].push_back(x);
   }
   vector<bool>vis(v,false);
   vector<int>dist(v);
   vector<int>parent(v);
   
   cout<<"enter source:";
   int src;
   cin>>src;
   vis[src]=true;
   parent[src]=-1;
   
   queue<int>q;
   q.push(src);
   while (!q.empty())
   {
    int temp=q.front();
    q.pop();

    for(auto x:adj[temp]){
        if (!vis[x])
        {
            vis[x]=true;
            dist[temp]=dist[x]+1;
            parent[x]=temp;
        }
        
    }
   }
   cout<<"enter destination:";
   int dest;
   cin>>dest;
   if (!vis[dest])
   {
    cout<<"no path"<<endl;
    return;
   }
   
   vector<int>path;
   int x=dest;
   while (x!=-1)
   {
      path.push_back(x);
      x=parent[x];
   }
   reverse(path.begin(),path.end());
   for(auto x:path){
    cout<<x<<" "; 
   }
    
 }

int main(int argc, char const *argv[])
{
 int v,e;
 cin>>v>>e;
 bfs(v,e);
return 0;
}








// question of codeforce

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int arr[3001][3001];
// int main()
// {
//     int n, m, f;
//     cin >> n >> m >> f;
//     pair<int, int> ans = {-1, -1};
//     // make adj list 
//     vector<int> adj[n + 1];
//     for (int i = 1; i <= m; i++)
//     {
        
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     map<pair<pair<int, int>, int>, int> mp;
//     for (int i = 1; i <= f; i++)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         mp[{{a, b}, c}]++;
//     }
//     // bfs start 

//     queue<pair<int, int>> q;
//     q.push({1, 1});  //source 
//     while (!q.empty())
//     {
//         pair<int, int> x = q.front();
//         q.pop();
//         if (x.second == n)
//         {
//             ans = x;
//             break;
//         }
//         for (int i : adj[x.second])
//         {
//             if (arr[x.second][i] || mp[{x, i}])
//                 continue;
//             arr[x.second][i] = x.first;
//             q.push({x.second, i});
//         }
//     }
// //  bfs end 

//     if (ans.first == -1){
//         cout <<-1;
//         return 0;
//     }
//     vector<int> path;
//     while (ans.second != 1)// jab tak dest se source tak rich ho jaye
//     {
//         path.push_back(ans.second);
//         ans = {arr[ans.first][ans.second], ans.first};
//     }
//     path.push_back(1);
//     cout << path.size() - 1 << endl;

//     for (int i = path.size() - 1; i >= 0; i--){ //reverse 
//         cout << path[i] <<" ";  
//     }
      
// }