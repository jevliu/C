/*
题目：C++排序算法学习3
作者： 刘季伟
时间：2022/2/25 18：52
地点：4区401
*/
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();
    bool sorted = false;
    while (!sorted)
    {
        bool sorted = true;
        bool swapped = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                swap(nums[i], nums[i + 1]);
                swapped = true;
            }
        }
        n--;
        if (!swapped)
        {
            break;
        }
        sorted = false;
        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] < nums[i - 1])
            {
                swap(nums[i], nums[i - 1]);
                sorted = false;
            }
        }
    }
}

int main()
{
    vector<int> nums = {1, 3, 2, 5, 4};
    selectionSort(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}
