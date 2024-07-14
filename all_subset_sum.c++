/*store all subset_sum of given arr using dp*/ 
/*other method is also using recursion or combinatory we can find subset element also*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> store;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }



    /*tabulation of subset_sum upto sum*/
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    for (int j = 0; j <= sum; j++)
    {

        dp[0][j] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j >= arr[i - 1])
            {
                dp[i][j] = (dp[i - 1][j - arr[i - 1]] | dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }


  /*concept to check that if (dp[n][any col]==1) then this col is a subset_sum */
    int mini = INT_MAX;
    for (int i = 0; i <= sum; i++)
    {
        if (dp[n][i] == 1)
        {
            store.push_back(i);
        }
    }
    for (auto x : store)
    {
        cout << x << " ";
    }
    return 0;
}