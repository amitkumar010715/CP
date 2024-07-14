// #Q. 1829E the lake



#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dx[4] = {-1, 1, 0, 0};
ll dy[4] = {0, 0, -1, 1};

int dfs(vector<vector<int>> &a, int i, int j, int n, int m,vector<vector<int>>&vis)
{
  int val = a[i][j];
  vis[i][j] = 1;
  a[i][j]=0;
  for (int k = 0; k < 4; k++)
  {
    int curi = i + dx[k];
    int curj = j + dy[k];
    if (curi >= 0 && curj >= 0 && curi < n && curj < m && a[curi][curj] != 0)
    {
      val += dfs(a, curi, curj, n, m,vis);
    }
  }

  return val;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> vis(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> a[i][j];
        vis[i][j]=0;
      }
    }

    int maxVolume = 0;

    // Iterate over each cell in the grid
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (a[i][j] > 0 && vis[i][j]==0)
        {
          int volume = dfs(a, i, j, n, m,vis);
          maxVolume = max(maxVolume, volume);
        }
      }
    }

    cout << maxVolume << endl;
  }

  return 0;
}