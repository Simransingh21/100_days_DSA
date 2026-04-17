/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0] */

#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n) {
    int k = 0;

    // Move non-zero elements
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Fill zeros
    while(k < n) {
        nums[k] = 0;
        k++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(nums, n);

    cout << "Result: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout <<endl;
    return 0;
}