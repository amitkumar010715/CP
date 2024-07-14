#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(i);
            st.insert(n / i);
        }

        //   {OR}
        
        // if(n%i==0){
        //     if(i==n/i){
        //         cout<<i;
        //     }
        //     else{
        //         cout<<i<<" "<<n/i;
        //     }
        // }
    }
    for (int x : st)
    {
        cout << x << " ";
    }
    return 0;
}




// *************************prime factor and their frequency*******************************************
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void add_divs(int x, map<int, int>&mp){
    for (int j = 2; j*j <=x; j++)
        { 
        while (x % j == 0){
            mp[j]++;
            x /= j;
        }
        }
        if(x!=1){
            mp[x]++;
        }
}
int main(int argc, char const *argv[])
{
 int x;
 cin>>x;
 map<int,int>divs;
 add_divs(x,divs);
 for(auto x:divs){
    cout<<x.first<<" "<<x.second<<endl;
 }
return 0;
}