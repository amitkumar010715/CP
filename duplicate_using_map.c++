#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(int argc, char const *argv[])
{
 int n=6;
 int arr[n]={2,5,6,8,2,5};
 unordered_map<int,int>freq;
 for (int i = 0; i <n; i++)
 {
    freq[arr[i]]++;

 }
 bool dup=false;
 unordered_map<int,int>::iterator itr;

 for (itr =freq.begin(); itr!=freq.end(); itr++)
 {
   if (itr->second>1)
   {
    cout<<itr->first;
    dup=true;
   }
   
 }
 if (dup==false)
 {
  cout<<-1;
 }
 
 
return 0;
}
//THIS IS DONE IN O(N)



// OR
// IN O(N*LOGN)
//Function to Print elements that occurs in arr more than 1
void printDuplicates(int arr[], int n)
{  
    sort(arr,arr+n);//sort array for binary search
      
    cout<<"[";
    for(int i = 0 ; i < n ;i++)
    {
      //index of first and last occ of arr[i];
      int first_index = lower_bound(arr,arr+n,arr[i])- arr;
      int last_index = upper_bound(arr,arr+n,arr[i])- arr-1;
       
      int occur_time = last_index-first_index+1;//frequency of arr[i]
       
      if(occur_time > 1 )// elements that occur more than 1
      {  i=last_index; //update i to last_index 
       cout<<arr[i]<<", ";  }// print repeat element
    }   cout<<"]";
}
 



//  using unordered set



 // C++ program to find duplicate from an array using
// unordered_set
#include <bits/stdc++.h>
using namespace std;

// Print duplicates in arr[0..n-1] using unordered_set
void printDuplicates(int arr[], int n)
{
	// declaring unordered sets for checking and storing
	// duplicates
	unordered_set<int> uniq;
	unordered_set<int> duplicate;

	// looping through array elements
	for (int i = 0; i < n; i++) {
		// if element is not there then insert that
		if (uniq.find(arr[i]) == uniq.end())
			uniq.insert(arr[i]);

		// if element is already there then insert into
		// duplicate set
		else
			duplicate.insert(arr[i]);
	}

	// printing the result
	cout << "Duplicate item are : ";
	unordered_set<int>::iterator itr;

	// iterator itr loops from begin() till end()
	for (itr = duplicate.begin(); itr != duplicate.end();
		itr++)
		cout << *itr << " ";


      // (or)
  // iterate using for
  for(int x:duplicate){
  cout<<x<<" ";
}


}

// Driver code
int main()
{
	int arr[] = { 1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5 };
	int n = sizeof(arr) / sizeof(int);

	printDuplicates(arr, n);
	return 0;
}
