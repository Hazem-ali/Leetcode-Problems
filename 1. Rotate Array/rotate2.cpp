#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    void swap(int &a, int &b)
    {

        int tmp = a;
        a = b;
        b = tmp;
    }
    void rotate(vector<int> &nums, int k)
    {

        // k is the number of rotations

        int size = nums.size();
        k = k % size;


        for (size_t i = 0; i < k; i++)
        {
            for (size_t j = size - 1; j > 0; j--)
            {
                swap(nums[j], nums[j-1]);
                
            }
            
        }
        







    }
};
