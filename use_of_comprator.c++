// NOTE:
/*without comparator sort with stability:*/

/*forword sort:*/
sort(arr.begin(),arr.end());

/*reverse sort:*/ take (-) of second parameter
 vector<pair<int,int>>v;

 v.push_back({2,-1});
 v.push_back({8,-2});
 v.push_back({8,-3});
 v.push_back({6,-4});
 v.push_back({6,-5});
 v.push_back({2,-6});
 sort(v.rbegin(),v.rend());
 for(auto x:v){
    cout<<-x.second<<" ";
 }

************************************************************************

class Solution{

    public:
    //note: if not write here static gfg compilor will give error but vscode not

    static bool comp( pair<int,int>&x, pair<int,int>&y){
      return (x.first>y.first);//descending order according to first
        }

    void sortBySetBitCount(int arr[], int n)
    {
        vector<pair<int,int>>v;
        // unordered_map<int ,int>mp;
        // Your code goes here
        for(int i=0;i<n;i++){
            int temp=arr[i];
            int count=0;
            while(temp!=0){
                 temp=temp&temp-1;
                 count++;
            }
            v.push_back({count,arr[i]});

        }

        sort(v.begin(),v.end(),comp);
        for(int i=0;i<n;i++){
            arr[i]=v[i].second;
        }

    }
};

// **************************************************using vector pair*********************

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<int,int>&x,pair<int,int>&y){// this sort will sort with stable the other pair entity.
                                            // if we not use the comp. then we have to take negative sign on other pair entity as mention in above example.
    return x.first<y.first;
}

int main(int argc, char const *argv[])
{

 vector<pair<int,int>>arr;
 arr.push_back({5,8});
 arr.push_back({7,9});
 arr.push_back({3,6});
 arr.push_back({1,3});
 arr.push_back({1,2});

 sort(arr.begin(),arr.end(),comp);
 for(auto x:arr){
    cout<<x.first<<" "<<x.second<<endl;
 }
return 0;
}

// *************************************using struct******************************



#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct ram
{
    int x, y;

} ram;

bool comp(ram &a, ram &b)
{
    return a.x < b.x;
}

int main(int argc, char const *argv[])
{
    ram arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr, arr + 5, comp);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].x << " " << arr[i].y << endl;
    }

    return 0;
}


// *****************************sorting based on second pair_first_entity  ********** 
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<int,pair<int,int>>&x,pair<int,pair<int,int>>&y){
                                            
    return x.second.first<y.second.first;
}

int main(int argc, char const *argv[])
{

 vector<pair<int,pair<int,int>>>arr;
 arr.push_back({1,{5,8}});
 arr.push_back({2,{7,9}});
 arr.push_back({3,{3,6}});
 arr.push_back({4,{1,3}});
 arr.push_back({5,{1,2}});

 sort(arr.begin(),arr.end(),comp);
 for(auto x:arr){
    cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
 }
return 0;
}