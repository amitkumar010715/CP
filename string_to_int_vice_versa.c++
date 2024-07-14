/*string to int  ----> stoi(argu)
int to string  ----> to_string(arg)*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{

string s="";
s+=to_string(4);
s+=to_string(9);
s+=to_string(7);

string s1="";
s1+=to_string(4);
s1+=to_string(9);
s1+=to_string(7);

cout<<stoi(s)+stoi(s1);  // string to int
return 0;
}