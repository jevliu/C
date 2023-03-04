/*
基数排序
2023/3/4
*/
#include <iostream>
using namespace std;
// 定义一个求一组数中最大值的函数

int maxNum(int arr[], int n)
{
    int max_num = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }

    return max_num;
}

// 定义一个计数排序函数来作为基数排序的一个子过程
void countSort(int arr[], int n, int exp)
{
    const int MAX = 100;
    int bucket[10] = {0}; // 初始化一个保存临时变量的篮子，长度为10初始值都为1
    int output[MAX];      // 定义一个存放每次排序完成后正确输出的数组

    for (int i = 0; i < n; i++)
    {
        // 对数组中每个元素做取模运算后分别放到对应的篮子中，每个篮子中个数同时加一
        bucket[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        // 现在每个篮子中储存的是小于等于i的个数，也就是篮子中第i个元素实际的位置
        bucket[i] += bucket[i - 1];
    }
    // 从右向左遍历输出，保证坐标递减
    for (int i = n - 1; i >= 0; i--)
    {
        output[bucket[(arr[i] / exp) % 10] - 1] = arr[i];
        bucket[(arr[i] / exp) % 10]--;
    }
    // 将output的值再赋给原数组，以便进行下一次排序
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

// 定义基数排序函数
void radixSort(int arr[], int n)
{
    int max_num = maxNum(arr, n);
    for (int exp = 1; max_num / exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << arr[n - 1] << endl;
    }
}

int main()
{
    const int MAX = 100;
    int arr[MAX];
    int n = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    radixSort(arr, n);
    return 0;
}