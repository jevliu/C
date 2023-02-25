/*
题目：C++排序算法学习
作者： 刘季伟
时间：2022/2/25 16：15
地点：4区401
*/
#include <iostream>
#include <vector>
using namespace std;

// 返回一组数据中最大元素的位置
template <class T>
int indexOfMax(T a[], int n)
{
    if (n <= 0)
    {
        cout << "n must be > 0" << endl;
    }
    // 初始化最大元素的位置
    int index_of_max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[index_of_max] < a[i])
        {
            index_of_max = i;
        }
    }
    return index_of_max;
}

int main()
{
    // 创建一个储存整数的vector
    vector<int> vec;

    // 向vector末尾添加元素
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // 遍历vector并输出
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // 在指定位置插入元素
    vec.insert(vec.begin() + 2, 15);

    // 遍历vector并输出
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // 删除指定位置的元素
    vec.erase(vec.begin() + 1);

    // 遍历vector并输出
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // 修改指定位置的元素
    vec[0] = 22;

    // 遍历vector并输出
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // 查看vector的大小
    cout << "The size of vector vec is " << vec.size();
    cout << endl;

    // 清空vector
    vec.clear();

    // 查看当前vec的大小
    cout << "After clearing vec,now the size of it is " << vec.size();
    cout << endl;
}
// 名次计算函数,将一个整数型数组中的元素进行比较后返回一个储存各个元素名次的数组
