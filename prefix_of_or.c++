#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{

 int n=6;
 vector<int>arr(6);
 for(auto &x:arr)cin>>x;// 1 3 2 5 4 2

  
vector<vector<int>>v;
vector<int>ans(31,0);
 for(int i=0;i<n;i++){
 for(int j=0;j<=31;j++){
    if((arr[i]&(1<<j))!=0){
    ans[j]++; 
    } 
 }
 v.push_back(ans);
 }

for(int i=0;i<n;i++){
   for(auto x:v[i]){
    cout<<x;
 }  
 cout<<endl;
}  
// ind 3 to 4 tak ka or
vector<int>temp=v[4];
for (int i = 0; i <=31; i++)
{
    temp[i]-=v[2][i];
}

int sum=0;
for (int i = 0; i <=31; i++)
{
    if(temp[i]!=0){
        sum+=(1<<i);
    }
}
cout<<"final:";
for(auto x:temp){
    cout<<x;
}
cout<<endl;
cout<<sum;
return 0;
}




// leetcode:With OR at Least K II

class Solution {
public:
    
    void modify(unordered_map<int,int>& f,int num){
        for(int i = 0;i<32;i++){
            if((1 << i) & num)
                f[i]++;
        }
    }
    
    
    int remove(unordered_map<int,int>& f,int num){
        int res = 0;
        for(int i = 0;i<32;i++){
            if((1 << i) & num)
                --f[i];
            if(f[i] > 0)
                res |= (1 << i);
        }
        return res;
    }
    
    
    
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int l = 0,run = 0,res = 1e9;
        unordered_map<int,int> f;
        for(int i = 0;i<nums.size();i++){
            run |= nums[i];
            modify(f,nums[i]);
            while(l < i && run >= k){
                res = min(res,i - l  + 1);
                run = remove(f,nums[l]);
                l++;
            }
            if(run >= k)
                res = min(res,i - l  + 1);
        }
        return res == 1e9 ? -1 : res;
    }
};




/*******sliding window in AND operation*******/

// 3171. Find Subarray With Bitwise AND Closest to K



#define ll long long

ll cal(vector<int> &fr) // function for calculating the value of the window
{
    ll ans = 0;
 
    for(int i=0; i<32; ++i)
    {
        if(fr[i] == 0)          // setting the bit if zero count is 0.
            ans+=pow(2, i);
    }
    
    return ans;
}


void add(vector<int> &fr, int val) // function for adding to the window
{
    
    for(int i=0; i<32; ++i)
    {
        if( !((val>>i) & 1) ) // checking if the bit is zero
            fr[i]++;
    }   
}


void sub(vector<int> &fr, int val) // function for removing from window
{
    for(int i=0; i<32; ++i)
    {
        if( !((val>>i) & 1) ) // checking if the bit is zero
            fr[i]--;
    }   
}

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
            
        int n = nums.size();
        int high = *max_element(nums.begin(), nums.end());
        
        if(nums.size() == 1)
            return abs(k - nums[0]);
        
        if(k >= high)         // if k > max value there is no point in further calculation as bitwise AND alays reduces the value.
            return k - high;
        
        vector<int> fr(32, 0);
        
        int p1 = 0;
        int p2 = 1;
        
        ll curr = nums[0]; 
        add(fr, nums[0]);
        
        ll ans = 1e9+1;
        
        while(p2<n)
        {
            ans = min(ans, abs(curr-k));
            
            while(curr > k && p2 < n)
            {
                add(fr, nums[p2]);
                curr = cal(fr);
                ans = min(ans, abs(curr-k));
                ++p2;
            }
        
            
            while(curr < k && p1 < p2)
            {
                sub(fr, nums[p1]);
                curr = cal(fr);
                ans = min(ans, abs(curr-k));
                ++p1;
            }
                
            if(curr == k)
                return 0;    
        }

        return ans;   
    }
};




/****bitwise or of contigious number like [4 to 12]*****/
// note: we can use map for that but here l,r range is about 1e9 that'why


// B - Turtle and an Infinite Sequence

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll ans = 0;

        // Iterate from the highest bit to the lowest bit
        for (int i = 0; i <32; i++) {
            // Check if bit i is set in either l or r or if the range spans a number with that bit set
            if ((l & (1LL << i)) || (r & (1LL << i)) || ((r - l) > (1LL << i))) {
                ans |= (1LL << i);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
