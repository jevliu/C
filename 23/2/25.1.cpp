/*
题目：C++练习
作者： 刘季伟
时间：2022/2/25
地点：4区401
*/
#include <iostream>
using namespace std;
// 寻找最大元素位置的函数声明
template <class T>
int indexOfMax(T a[], int n);

// 编写一个模板函数返回值是数组a[0:n-1]的数值个数
template <class T>
int count(T a[], int n, const T &value)
{
    // 返回a[0:n-1]中的值
    int the_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            the_count++;
        }
    }
    return the_count;
}

// 编写一个模板函数fill，给数组a[start:end-1]赋值value
template <class T>
void fill(T *a, int start, int end, T &value)
{
    for (int i = start; i < end; i++)
    {
        a[i] = value;
    }
}

int main()
{
    // 返回a[0:n-1]中的值
    char a[5] = {'a', 'b', 'c', 'c', 'd'};
    char value = 'c';
    // 调用计数函数count
    int the_count_num = count(a, 5, value);
    // 调用赋值函数fill
    fill(a, 1, 4, value);
    // 输出调用fill后新的数组a
    for (int i = 0; i < sizeof(a); i++)
    {
        cout << "a[" << i << "]的值为：" << a[i] << endl;
    }
    cout << "数值a[]中" << value << "出现的次数为：" << the_count_num << endl;

    // 动态分配内存空间
    float *x;
    try
    {
        x = new float[5];
    }
    catch (bad_alloc e)
    {
        // 当new分配失败时
        cerr << "Out of merrory" << endl;
        exit(1);
    }
    delete[] x;

    // 返回一组数据中最大元素的位置
    // 给定一个一维的整形数组b[]
    int b[5] = {22, 333, 1, 4, 2};
    // 调用indexOfMax函数并赋值给一个变量index_of_maxb
    int index_of_maxb = indexOfMax(b, 5);
    cout << "数组b中最大元素的位置为：" << index_of_maxb << "最大元素的值为："
         << b[index_of_maxb] << endl;

    return 0;
}
// try-catch语句为一个二维数组分配内存空间
template <class T>
bool make_2d_array(T **&x, int number_of_rows, int number_of_columns)
{
    try
    { // 创建行指针
        x = new T *[number_of_rows];
        // 为每一行动态分配内存空间
        for (int i = 0; i < number_of_rows; i++)
        {
            x[i] = new int[number_of_columns];
            return true;
        }
    }
    catch (bad_alloc)
    {
        return false;
    }
}
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