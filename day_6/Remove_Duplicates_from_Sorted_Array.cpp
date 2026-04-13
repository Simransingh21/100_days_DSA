/* Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation: Keep first occurrence of each element: 1, 2, 3 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[n];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Edge case
    if(n == 0) return 0;

    int k = 1;  // first element is always unique

    for(int i = 1; i < n; i++) {
        if(nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Print unique elements
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    
    cout <<endl;
    return 0;
}