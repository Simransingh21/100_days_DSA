/* Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order. */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++){
            int x = target - nums[i];

            if(mp.count(x)) return {mp[x], i};

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}