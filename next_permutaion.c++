// // C++ program to display all permutations
// // of an array using STL in C++

// #include <bits/stdc++.h>
// using namespace std;

// // Function to display the array
// void display(int a[], int n)
// {
// for (int i = 0; i < n; i++) {
// 	cout << a[i] << " ";
// }
// cout << endl;
// }

// // Function to find the permutations
// void findPermutations(int a[], int n)
// {

// // Sort the given array
// sort(a, a + n);

// // Find all possible permutations
// cout << "Possible permutations are:\n";
// do {
// 	display(a, n);
// } while (next_permutation(a, a + n));
// }

// // Driver code
// int main()
// {

// int a[] = { 10, 20, 30, 40 };

// int n = sizeof(a) / sizeof(a[0]);

// findPermutations(a, n);

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
	int n=10;
 int arr[n]={5,4,8,9,3,5,5,1,4,2};
 next_permutation(arr,arr+n);
 next_permutation(arr,arr+n);
 next_permutation(arr,arr+n);
 next_permutation(arr,arr+n);

 for (int i = 0; i <n; i++)
 {
   cout<<arr[i];
 }
 
return 0;
}
