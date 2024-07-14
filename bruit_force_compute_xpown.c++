
//xpown

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    //complexity n

    //     int x=2,y=1;
    //     int n=7;
    //    for (int i = 0; i <n; i++)
    //    {
    //       y*=x;
    //    }
    //    cout<<y;


                       /*complexity is log(n)*/
                       /*pow(x,n) also gives logn*/
    int x = 2, n = 8;
    int y = 1;
    while (n > 0)
    {
        if (n % 2 != 0) 
        {
            y *= x;
        }
        x *= x;
        n /= 2;// or n=n>>1
    }

    cout << y;
    return 0;
}