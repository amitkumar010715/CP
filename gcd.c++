/*Note:    
1)   a*b=gcd*lcm
     lcm=a*b/gcd
2)   gcd(0,n)=n;
3)  inbuilt function: __gcd(a,b);
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 // bhag vidhi method wale ka code hai
 int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);//divisor ko dividend and remainder ko divisor 
 }
            // (or)
 int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b,a%b);
 }


int main(int argc, char const *argv[])
{

 cout<<gcd(18,12);
return 0;
}

