/*
题目：C++排序算法学习3
作者： 刘季伟
时间：2022/2/25 18：52
地点：4区401
*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> selectionSort(vector<int> &nums)
{
    int n = nums.size();
    bool swapped = true;
    for (int i = 0; i < n - 1 && swapped; i++)
    {
        int min_idx = i;
        swapped = false;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_idx])
            {
                min_idx = j;
                swapped = true;
            }
        }
        if (swapped)
        {
            swap(nums[i], nums[min_idx]);
        }
    }
    return nums;
}

int main()
{
    vector<int> nums = {3, 5, 2, 4, 1};
    vector<int> sorted_nums = selectionSort(nums);
    for (int num : sorted_nums)
    {
        cout << num << " ";
    }
    return 0;
}
