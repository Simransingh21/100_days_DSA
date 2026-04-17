/* Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards */

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    while(start < end) {
        if(s[start] != s[end]) {
            cout << "NO";
            return 0;
        }
        start++;
        end--;
    }

    cout << "YES";

    cout << endl;
    return 0;
}