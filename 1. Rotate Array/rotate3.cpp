#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    void swap(int *a, int *b)
    {

        int tmp = *a;
        *a = *b;
        *b = tmp;
    }

    void reverse(vector<int> &nums, int left, int right)
    {
        if (nums.size() == 1)
            return;

        while (left < right)
        {
            swap(&nums[left], &nums[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {

        int size = nums.size();
        k = k % size;
        int splitIndex = size - k;

        reverse(nums, 0, splitIndex - 1);
        reverse(nums, splitIndex, size - 1);
        reverse(nums, 0, size - 1);
    }
};
