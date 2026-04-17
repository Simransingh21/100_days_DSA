/*You are given an array arr[] of size n - 1 that contains distinct integers in the 
range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing.
Your task is to identify and return the missing element.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;

        int expectedSum = n * (n + 1) / 2;
        
        int actualSum = 0;
        for(int num : arr) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 2, 3, 5};

    cout << obj.missingNum(arr) << endl;

    return 0;
}