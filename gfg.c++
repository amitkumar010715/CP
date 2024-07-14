
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
 
// // int main(int argc, char const *argv[])
// // {
// //  int t;
// //  cin>>t;
// //  while (t--)
// //  {
// //   int n;
// //   cin>>n;
// //   int a[n];
// //   int  b[n];
// //   for (int i = 0; i <n; i++)
// //   {
// //     cin>>a[i];
// //   }
// //     for (int i = 0; i <n; i++)
// //   {
// //     cin>>b[i];
// //   }
// //   int flag=1;
// //   for (int i = 0; i <n-1; i++)
// //   {
// //       if ((a[i]<=a[n-1]&&b[i]<=b[n-1])||(b[i]<=a[n-1]&&a[i]<=b[n-1]))
// //       {
// //        continue;
// //       }
// //       else
// //       {
// //         flag=0;
// //         break;
// //       }
      
// //   }
// //   if (flag)
// //   {
// //     cout<<"YES"<<endl;
// //   }
// //   else
// //   {
// //     cout<<"NO"<<endl;
    
// //   }
  
// //   }
// // return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
 
// int main(int argc, char const *argv[])
// {
//  int t;
//  cin>>t;
//  while (t--)
//  {
//     ll n;
//     cin>>n;
//     vector<ll>arr[n];
//     for (ll i = 0; i <n; i++)
//     {
//       ll x;
//       cin>>x;
//       for (ll j = 0; j <x; j++)
//       {
//         ll y;
//         cin>>y;
//         arr[i].push_back(y);
//       }
      
//     }
    
//     int store[50005]={0};
//     vector<ll>v;
//  for (int i = n-1; i >=0; i--)
//  {
//   int flag=0;
//   for(ll z:arr[i]){
//     if (flag==0&& store[z]==0)
//     {
//       flag=1;
//       v.push_back(z);
//       store[z]=1;
//     }
//     else
//     {
//       store[z]=1;
//     }
    
//   }
  
//  }
//  if (v.size()==n)
//  {
//   reverse(v.begin(),v.end());
//   for (int i = 0; i <v.size(); i++)
//   {
//      cout<<v[i]<<" ";
//   }
//   cout<<endl;
//  }else
//  {
//   cout<<"-1"<<endl;
//  }
 
 
//  }
 
// return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 50005;

// int t, m, n[MAXN];
// set<int> remaining[MAXN], winners;

// void solve() {
//     cin >> m;
//     for (int i = 1; i <= m; i++) {
//         cin >> n[i];
//         for (int j = 1; j <= n[i]; j++) {
//             int x;
//             cin >> x;
//             remaining[i].insert(x);
//         }
//     }

//     winners.clear();

//     for (int i = 1; i <= m; i++) {
//         int max_val = -1, winner = -1;
//         for (int p : remaining[i]) {
//             if (p > max_val) {
//                 max_val = p;
//                 winner = p;
//             }
//         }

//         if (winner == -1) {
//             cout << "-1\n";
//             return;
//         }

//         winners.insert(winner);
//         remaining[i].erase(winner);

//         for (int j = i + 1; j <= m; j++) {
//             remaining[j].erase(winner);
//         }
//     }

//     for (int i = 1; i <= m; i++) {
//         cout << *winners.begin() << " ";
//         winners.erase(winners.begin());
//     }
//     cout << "\n";
// }

// int main() {
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
