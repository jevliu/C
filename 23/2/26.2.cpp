/*
题目：线性表的数组实现
作者： 刘季伟
时间：2022/2/26 19：21
地点：4区401
*/
#include <iostream>
#include <vector>
using namespace std;

const int MAX_SIZE = 100; // 定义线性表的最大产长度

// 定义一个线性表结构体
struct List
{
    int data[MAX_SIZE]; // 线性表中的数据类型和最大长度
    int length;         // 线性表的长度
};

// 定义初始化线性表的函数
void initialList(List &L)
{
    L.length = 0;
}

// 在指定位置插入元素
bool listInsert(List &L, int pos, int ele)
{
    // 判断插入的位置是否合法
    if (pos < 1 || pos > L.length + 1)
    {
        return false;
    }

    // 判断线性表是否已满
    if (L.length >= MAX_SIZE)
    {
        return false;
    }

    // 将插入位置及以后位置的元素都向后移动一位
    for (int i = L.length; i >= pos; i--)
    {
        L.data[i] = L.data[i - 1];
    }

    // 将新的元素插入到线性表中的指定位置并更新表的长度
    L.data[pos - 1] = ele;
    L.length++;
    return true;
}

// 删除指定位置的元素
bool listDeleat(List &L, int pos)
{
    // 判断删除的位置是否合法
    if (pos < 1 || pos > L.length)
    {
        return false;
    }

    // 删除指定位置的元素，并将其右侧的所有元素都左移一位，更新数组的长度
    for (int i = pos; i < L.length; i++)
    {
        L.data[i - 1] = L.data[i];
    }

    L.length--;
    return true;
}

// 打印线性表中的所有元素
void printList(List &L)
{
    if (L.length == 0)
    {
        cout << "当前线性表为空表。" << endl;
    }

    cout << "当前线性表中的所有元素为：" << endl;
    for (int i = 0; i < L.length; i++)
    {
        cout << L.data[i] << " ";
    }
    cout << endl;
}

// 查找指定元素所在的第一个位置并返回其下标
int findElement(List &L, int element)
{
    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] == element)
        {
            return i + 1;
        }
    }
    return 0;
}
int main()
{

    // 创建并初始化一个线性表
    List L;
    initialList(L);

    // 给线性表赋值
    listInsert(L, 1, 1);
    listInsert(L, 2, 3);
    listInsert(L, 3, 5);

    // 打印当前线性表
    printList(L);

    // 删除线性表中指定位置的元素
    listDeleat(L, 2);

    // 打印跟新后的线性表
    printList(L);

    cout << "更新后的数组长度为：" << L.length << endl;

    // 查找指定元素的下标
    int indexOfElement = findElement(L, 7);
    cout << "元素7在数组中的位置是：" << indexOfElement << endl;
    return 0;
}