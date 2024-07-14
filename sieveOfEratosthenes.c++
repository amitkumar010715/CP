#include <iostream>
#include <vector>
using namespace std;

// Function to perform the Sieve of Eratosthenes
vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return isPrime;
}



int main() {
  int n;
  cin>>n;
   vector<bool> isPrime = sieveOfEratosthenes(n);// Function to print all prime numbers up to n
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
