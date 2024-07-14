#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    int n, m;
    cin >> n >> m;
    cout << "no of unique possible path from oo to  nm: ";

    /*Tabulation:

     vector<vector<int>>dp(n,vector<int>(m,1));
                for(int i=1;i<n;i++){
                    for(int j=1;j<m;j++){
                        dp[i][j]=dp[i-1][j]+dp[i][j-1];
                    }
                }

            cout<< dp[n-1][m-1];
     */


 /*space optimization: if there are pre row and  prev col then we apply space optimization

    vector<int> dummy(m, 0);
    for (int i = 0; i < n; i++)
    {
        vector<int> curr(m, 0);
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                curr[j] = 1;
            }
            else
            {
                int up = 0;
                int left = 0;
                if (i > 0)
                    up = dummy[j];
                if (j > 0)
                    left = curr[j - 1];
                curr[j] = up + left;
            }
        }
        dummy = curr;
    }
    cout << dummy[m - 1];
*/
    return 0;
}