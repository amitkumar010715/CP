#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{

    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
        if (i == 3)
        {
            goto h; //jump to
        }
    }
 h:  // level

    cout << " "
         << "name";
    return 0;
}