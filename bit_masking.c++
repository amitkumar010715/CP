

// count 1 in any number
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
	
     int N;
     cin>>N;
 	int count = 0;
		while (N != 0){
		    count++;
		 N = N & (N-1);    
        }
		cout<<count;
return 0;
}


/*
// Note:--------

//count no. of bit in a number
      //return (int)log2(number)+1;

// with help of above notes we can find no of 0bit in number

ex:

	    int no_bit=(log2(x)+1);


	    1<<(no_bit-1))); // largest  (power of 2 ) <=x ex: for 6 it is 4 and for 11 it is 8.


	    int zeros=(log2(x)+1 -__popcount(x));// unset bit
*/






// :-- to find which bit  is set from right start with zero index
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;
 int i=1;//i is bit position of n to check that it is set or not
 if((n&(1<<i))!=0){// left shifting of 1,    ith index from last(assume last value is at 0 index) of n is set then expression is !=0
	cout<<"bit set"<<endl;
 }
 else
 {
	cout<<"unset"<<endl;
 }
 

return 0;
}



// NOTE:
// if we want to set any bit of number then :
// n=5; //101
// i=1;
// n=n|(1<<i)//now 111 because 1 index is now set  (OR) if  we know particular bit is 0 then making 1 we can also use xor n=n^(1<<i)

// n=n^(1<<i) // it can make particular bits 0 if it is 1 and also use if 0 and make particular bit 1


    // in simple sentance
	// FOR MAKING (INSERT AND DELETE) OR FOR TOGLE THE BIT WE USE XOR : n=n^(1<<i) 

// ***************************************************************************************************************



/*NOTE:

A INBUILT FUNTION ALSO USE FOR COUNT NO OF SET bit:
*/
 int n;
 cin>>n;
 cout<< __builtin_popcount(n); //for unsign integer 


 ll n;
 cin>>n;
 cout<< __builtin_popcountll(n); // for long long 

*************************************************************************************************************

question: Data structure fan

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 int t;
 cin>>t;
 while (t--)
 {
    int n;
    cin>>n;
    ll arr[n];
    vector<int>prefix(n+1,0);// for storing prefix xor
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
      prefix[i+1]=arr[i];
      prefix[i+1]^=prefix[i];
    }
    string s;
    cin>>s;
    ll xr=0;
for (int i = 0; i < s.length(); i++)
{
    if(s[i]=='1'){
      xr^=arr[i];
    }
}



    ll q;
    cin>>q;
    while (q--)
    {
        int type,l,r,g;
        cin>>type;
        if(type==1){
           
            cin>>l>>r;
           

          xr^=(prefix[r]^prefix[l-1]);// xor_of_1^(xor_up_r ^ xor_up_to_l-1
        }
        else{
            cin>>g;
           if(g==1){ // '1' ka xor
            cout<<xr<<" ";
           }
           else{
            cout<<(xr^prefix[n])<<" ";// '0' ka xor hai
           }
        } 
   
    }
    
   
    cout<<endl;
 }
 
return 0;
}