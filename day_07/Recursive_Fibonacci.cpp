/* Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

Input:
- Single integer n

Output:
- Print the n-th Fibonacci number

Example:
Input:
6

Output:
8

Explanation: Sequence: 0,1,1,2,3,5,8 at positions 0,1,2,3,4,5,6 */

#include <iostream>
using namespace std;

int fib(int n) {
    // Base case
    if(n == 0) return 0;
    if(n == 1) return 1;

    // Recursive call
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << fib(n);

    cout << endl;
    return 0;
}