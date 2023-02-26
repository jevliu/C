/*
题目：C++排序算法学习4
作者： 刘季伟
时间：2022/2/26 8:46
地点：4区401
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// // 定义一个采用及时终止策略的选择排序函数
// vector<int> selectionSort(vector<int> &nums)
// {
//     // 定义变量n来记录输入的向量长度
//     int n = nums.size();

//     // 定义一个标志变量swapped来记录当前循环下是否发生了元素之间的交换
//     bool swapped = true;

//     // 外层for循环用来定义需要比较的轮数,当i<n-1且剩余未排序的循环中发生了交换时，
//     // 才继续进行下一轮的循环
//     for (int i = 0; i < n - 1 && swapped; i++)
//     {
//         // 初始化记录当前最小值的index,并将swapped修改为false
//         int min_index = i;
//         swapped = false;

//         // 内层for循环定义每轮比较需要比较的次数
//         for (int j = i + 1; j < n; j++)
//         {
//             // 如果循环中有j对应的值小于当前的min_index,那么就将j赋给min_index
//             if (nums[j] < nums[min_index])
//             {
//                 min_index = j;

//                 // 此时修改swapped为true
//                 swapped = true;
//             }
//                 }

//         // 每一轮循环都判断变量间是否发生了位置变化，若发生则交换两个位置对应的值
//         if (swapped)
//         {
//             swap(nums[i], nums[min_index]);
//         }
//     }

//     // 全部循环结束后返回排序后的nums
//     return nums;
//

// 不采用及时终止策略的选择排序算法
template <class T>
T selectionSort(T &nums)
{
    int len = nums.size();
    for (int i = 0; i < len - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < len; j++)
        {
            if (nums[j] < nums[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(nums[i], nums[min_index]);
        }
    }
    return nums;
}

// 加入终止条件的选择排序
template <class T>
T selectionSortEarlySto(T &nums)
{
    int len = nums.size();

    for (int i = 0; i < len - 1; i++)
    {
        // 引入一个标志变量来记录剩余排序是否已有序
        bool sorted = true;
        int min_index = i;

        for (int j = i + 1; j < len; j++)
        {
            if (nums[j] < nums[min_index])
            {
                min_index = j;
            }
            // 查看待排序元素中是否有前值大于后值的情况，若没有则说明序列已经排序完成
            if (nums[j] < nums[j - 1])
            {
                sorted = false;
            }
        }

        if (min_index != i)
        {
            swap(nums[min_index], nums[i]);
        }
        // 若sorted值为发生改变则说明当前待排序的元素已经有序,就跳出循环不再执行
        // 接下来的循环
        if (sorted)
        {
            break;
        }
    }
    return nums;
}

int main()
{
    // 定义一个整型向量
    vector<float> nums = {2.3, 1, 4.6, 3, 6};

    // 调用排序函数并将排序后的结果赋值给一个新的vector
    vector<float> sorted_nums = selectionSort(nums);
    vector<float> sorted_nums_early = selectionSortEarlySto(nums);

    // 输出进行排序后的新变量
    cout << "使用一般排序算法后排序后的数组为：\n";
    for (float num : sorted_nums)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "使用带终止条件的排序算法后排序后的数组为：\n";
    for (float num : sorted_nums)
    {
        cout << num << " ";
    }

    return 0;
}