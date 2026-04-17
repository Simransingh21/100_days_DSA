/* Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
*/

#include <iostream>
using namespace std;

int removeElement(int nums[], int n, int val) {
    int k = 0; // position for next valid element

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    int nums[] = {0,1,2,2,3,0,4,2};
    int n = 8;
    int val = 2;

    int k = removeElement(nums, n, val);

    cout << "k = " << k << endl;
    cout << "Updated array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}