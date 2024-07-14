#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> sol(vector<int> &arr, int n)
{

    vector<int> ans, temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(arr[i]);
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++)
    {
        int index = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        ans.push_back(index);
        temp.erase(temp.begin() + index);
    }

    return ans;
}

vector<int> constructLowerArray(vector<int> &arr, int n)
{

    vector<int> ans, temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(arr[i]);
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++)
    {
        int index = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        ans.push_back(index);
        temp.erase(temp.begin() + index);
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;

    vector<int> sright = constructLowerArray(arr, n); // sright
    for (auto x : sright)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> lright(n); // lright
    map<int, int> mp1;
    for (int i = n - 1; i >= 0; i--)
    {
        lright[i] = (n - (i + 1) - sright[i] - ((i == n - 1) ? 0 : mp1[arr[i]]));
        mp1[arr[i]]++;
    }

    for (auto x : lright)
    {
        cout << x << " ";
    }
    cout << endl;

    reverse(arr.begin(), arr.end());
    vector<int> sleft = constructLowerArray(arr, n); // sleft
    reverse(sleft.begin(), sleft.end());

    for (auto x : sleft)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> lleft; // lleft
    map<int, int> mp2;
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        lleft.push_back(i - sleft[i] - ((i == 0) ? 0 : mp2[arr[i]]));
        mp2[arr[i]]++;
    }

    for (auto x : lleft)
    {
        cout << x << " ";
    }
    cout << endl;



    return 0;
}
// 12321
