// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int search(int arr[], int l, int h, int key)
// {
//     if (l > h)
//     {
//         return -1;
//     }
//     int mid = (l + h) / 2;
//     if (arr[mid] == key)
//     {
//         return mid;
//     }
//     if (arr[l] <= arr[mid]) // this indicate that arr is sorted upto mid
//     {

//         if (key >= arr[l] && key <= arr[mid]) // if key found
//         {
//             return search(arr, l, mid - 1, key);
//         }
//         return search(arr, mid + 1, h, key); // else do recrsive for other half
//     }
//     else  // this indecate that next subarray is sorted
//     {
//         if (key >= arr[mid] && key <= arr[h])// if key found
//         {
//             return search(arr, mid + 1, h, key);
//         }
//         return search(arr, l, mid - 1, key); // else do recursive for fist half
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 3;
//     int i = search(arr, 0, n - 1, key);

//     if (i != -1)
//         cout << "Index: " << i << endl;
//     else
//         cout << "Key not found";
//     return 0;
// }




// to handle duplicacy

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int search(int arr[], int l, int h, int key)
{
    if (l > h)
    {
        return -1;
    }
    int mid = (l + h) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }

    if ((arr[l] == arr[mid])
        && (arr[h] == arr[mid]))  // if arr[l]==arr[mid]==arr[h]
    {
        ++l;
        --h;
        return search(arr, l, h, key);
    }


    if (arr[l] <= arr[mid]) // this indicate that arr is sorted upto mid
    {

        if (key >= arr[l] && key <= arr[mid]) // if key found
        {
            return search(arr, l, mid - 1, key);
        }
        return search(arr, mid + 1, h, key); // else do recrsive for other half
    }
    else  // this indecate that next subarray is sorted
    {
        if (key >= arr[mid] && key <= arr[h])// if key found
        {
            return search(arr, mid + 1, h, key);
        }
        return search(arr, l, mid - 1, key); // else do recursive for fist half
    }
}

int main(int argc, char const *argv[])
{
   int arr[] = { 3, 3, 1, 2, 3, 3 };
    int n = sizeof(arr) / sizeof(int);
    int key = 3; //  if multiple ans print any of them
    int i = search(arr, 0, n - 1, key);

    if (i != -1)
        cout << "Index: " << i << endl;
    else
        cout << "Key not found";
    return 0;
}