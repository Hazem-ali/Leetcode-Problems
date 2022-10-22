#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:

    void rotate(vector<int>& nums, int k) {
        
        // k is the number of rotations
        
        int size = nums.size();
        k = k % size;

        vector<int> newNums;


        for (int i = 0; i < k; i++)
        {
            newNums.push_back(nums[size-k+i]);
        }
        
        int j = 0;
        for (int i = k; i < size; i++)
        {
            newNums.push_back(nums[j]);
            j++;
        }
        


        nums = newNums;

    }
};

