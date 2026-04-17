/* Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"] */

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        // swap characters
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;   // size of array

    vector<char> s(n);

    // input characters
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    reverseString(s);

    // print reversed array
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }

     cout << endl;
    return 0;
}