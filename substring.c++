// vector<string> generate_substrings(string s) {
//     vector<string> substrings;
//     int n = s.size();
    
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j <= n; j++) {
//             substrings.push_back(s.substr(i, j - i));
//         }
//     }
    
//     return substrings;
// }



#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate_subarrays(vector<int>& arr) {
    vector<vector<int>> subarrays;
    int n = arr.size();
    
    // Generate all subarrays
    for (int i = 0; i < n; i++) {
        vector<int> subarray;
        for (int j = i; j < n; j++) {
            subarray.push_back(arr[j]);
            subarrays.push_back(subarray);
        }
    }
    
    return subarrays;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> subarrays = generate_subarrays(arr);
    
    // Print all generated subarrays
    for (const vector<int>& subarray : subarrays) {
        cout << "[";
        for (int num : subarray) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << endl;
    
    return 0;
}
