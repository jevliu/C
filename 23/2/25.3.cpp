/*
题目：C++排序算法学习2
作者： 刘季伟
时间：2022/2/25 18：52
地点：4区401
*/
#include <iostream>
using namespace std;

// 定义一个实现冒泡排序的函数bubbleSort
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) // 外层for循环定义排序的轮数
    {
        for (int j = 0; j < n - i - 1; j++) // 内层for循环定义每轮需要比较的次数
        {

            if (a[j] > a[j + 1]) // 如果前一个值大于后一个值就交换两值的位置
            {
                int temp; // 定义一个临时变量
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
// 定义一个在一个有序数组中插入一个元素并形成新的有序数组的函数insertElement
void insertElement(int a[], int n, int x)
{
    int i = n - 1;
    while (i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
}

int main()
{
    int arr[] = {12, 33, 4, 6, 39, 9};    // 待排序的数组
    int n = sizeof(arr) / sizeof(arr[0]); // 数组的长度

    // 调用冒泡排序函数
    bubbleSort(arr, n);

    // 输出排序完成后的结果
    cout << "冒泡排序后的数组为：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x = 22; // 带插入的值
    insertElement(arr, n, x);

    // 输出插入新数字后的数组
    cout << "插入新数字" << x << "后的数组为：";
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}