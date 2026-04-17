/* Given two integer arrays nums1 and nums2, return an array of their intersection. 
Each element in the result must appear as many times as it shows in both arrays and you may return the result 
in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    unordered_map<int, int> freq;
    vector<int> result;

    for(int num : nums1) {
        freq[num]++;
    }

    for(int num : nums2) {
        if(freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }

    for(int num : result) {
        cout << num << " ";
    }

     cout << endl;
    return 0;
}