#include <bits/stdc++.h>

using namespace std;


//  learn the applications of pre-computation techniques like prefix sum, prefix max, suffix max etc. 
//  Pre-processing helps in efficiently answering multiple queries and is used with linear data structures like arrays and vectors.
// In the given problem, there is an integer array ‘Arr[N]’ and 
// we have to print the individual sum of ‘Q’ subarrays whose first index - ‘l’ and the last index - ‘r’ is given.
//
// Approach:
//
// Brute force - Create two nested loops to print the sum of different subarrays respectively.
// Time Complexity: O(Q*N)
// Space Complexity: O(1)
//
// Prefix sum - We can pre-compute the prefix sum of the array and store it in an array PS[N].
// PS[ i ] = Arr[ i ] + PS[ i - 1 ];
//
//  We can then print the sum of subarray(l, r) within O(1) time complexity.
//
// Sum of Subarray(l, r) = PS[ r ] - PS[ l - 1 ]  (l>=1)
//                                     = PS[ r ]                     (l==0)
//
// Time Complexity: O(N+Q)
//
// Space Complexity: O(N)
//
// Note: It can also be solved in O(1) space complexity if we use the original array to store the prefix sum. 

void computePreSum(int *prefixSum, int *arr, int n) {
  prefixSum[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefixSum[i] = prefixSum[i-1] + arr[i];
  }
}

void computePreMax(int *prefixMax, int *arr, int n) {
  prefixMax[0] = arr[0];
  for (int i = 0; i < n; i++) {
    prefixMax[i] = max(prefixMax[i-1], arr[i]); // similarly for prefixMin
  }
}

void computeSufMin(int *suffixMin, int *arr, int n) {
  suffixMin[n-1] = arr[n-1];
  for (int i = n-2; i >= 0; i--) {
    suffixMin[i] = min(suffixMin[i+1], arr[i]); // similarly for suffixMax
  }
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int q;
  cin >> q;
  
  int prefixSum[n];
  computePreSum(prefixSum, arr, n);
  
  while (q--) {
    int l, r;
    cin >> l >> r; // assuming l is always<= r
    if (l >= 0) cout << prefixSum[r] - prefixSum[l-1] << '\n';
    else cout << prefixSum[r] << '\n';
  }

  return 0;
}
