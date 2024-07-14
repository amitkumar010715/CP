#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 vector<pair<int,int>>v;
v.push_back({5,8});
v.push_back({1,5});
v.push_back({2,2});

 
 sort(v.begin(), v.end());
 
 for (int i = 0; i <v.size(); i++)
 {
    cout<<v[i].first<<" "<<v[i].second<<endl;
 }
 
 
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
 
// int main(int argc, char const *argv[])
// {
//     int n=3,m=2;
//  vector<vector<int>>arr(n,vector<int>(m));// 2d vector with no initialization
//  vector<vector<int>>arr(n,vector<int>(m,0)); // all row and col are '0'.   both initialization are same.
// }