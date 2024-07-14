#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 string str;
 cin>>str;

unordered_set<char>s;
queue<char>q;
int hit=0;
for (int i = 0; i <str.size(); i++)
{
if (s.find(str[i])!=s.end())
{
   s.erase(str[i]);
   hit++;
}

 while(q.size()<=4)
 {  
 q.push(str[i]);
 s.insert(str[i]);
 }
 if (q.size()>4)
 {
    q.pop();
 }
 
}
cout<<"hit: "<<hit<<endl;
cout<<"miss: "<<str.size()-hit<<endl;
return 0;
}



