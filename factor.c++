
// // all factor
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
 
// int main(int argc, char const *argv[])
// {
//  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//  ifstream infile("input.txt");
//  ofstream outfile("output.txt");
//  int n;
//  cin>>n;
//  for (int i = 1; i*i <=n; i++)
//  {
//     if(n%i==0){
//        if(n/i!=i){
      
//         cout<<n/i<<" ";
//        }
       
//        cout<<i<<" ";
//     }
//  }

 
// return 0;
// }





// // only prime factor( same as LCM matlab smaller element(2) se start karo and traverse );
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long   
 
//  void primeFactor(int n){
  
//     for (int i = 2; i*i<=n; i++)
//     {
//         while (n%i==0)
//         {
//             cout<<i<<" ";
//             n/=i;
//         }
        
//     }
//     if(n!=1){
//         cout<<n<<" ";
//     }
    
//  }

// int main(int argc, char const *argv[])
// {
//  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//  ifstream infile("input.txt");
//  ofstream outfile("output.txt");
 
//  int n;
//  cin>>n;
//  primeFactor(n);
// return 0;
// }







// // check for prime
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
 
// int main(int argc, char const *argv[])
// {
//  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//  ifstream infile("input.txt");
//  ofstream outfile("output.txt");
//  int n;
//  cin>>n;
//  bool flag=true;
//  for (int i = 2; i*i <=n; i++)
//  {
//     if(n%i==0){
//         flag=false;
//         break;
//     }
//  }
//  if(flag==true){
//     cout<<"prime"<<endl;
//  }
//  else{
//     cout<<"not";
//  }
 
// return 0;
// }



