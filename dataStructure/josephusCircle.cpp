// 约瑟夫环问题
#include <iostream>
#include <list>
using namespace std;

// 创建一个实现Josephus环的函数
void josephus(int n, int k)
{
    list<int> student;
    // 向student中依次传入学生的n个编号
    for (int i = 1; i <= n; i++)
    {
        student.push_back(i);
    }
    // 创建一个迭代器来表示当前指向的位置,初始化指向开头
    list<int>::iterator it = student.begin();
    // 用一个while循环依次找到第k个孩子并将其删除，直到list的长度等于1
    while (student.size() > 1)
    {
        // 第一个for循环用于将拿山芋的孩子向右移动k次，并将迭代器移动到该孩子的位置
        for (int i = 1; i < k; i++)
        {
            it++;
            // 如果it移动到了list的末尾就将它指向开头
            if (it == student.end())
            {
                it = student.begin();
                // cout << "it重新指向了开头位置：" << *it << "->";
            }
        }
        // 按照样例格式输出第k个位置学生的编号信息
        cout << *it << "->";
        // 删除当前it指向位置的学生，并将后一个位置返回给迭代器it
        // 同样当it指向末尾时将其再移动到开头
        it = student.erase(it);
        if (it == student.end())
        {
            it = student.begin();
            // cout << "删除元素为末尾值后，it指向了开头位置值为：" << *it << endl;
        }
    }
    // 当list中只有一个孩子时，输出这个幸运儿的编号
    cout << *student.begin() << endl;
    // cout << "最后得到山芋的是第" << *student.begin() << "个孩子。" << endl;
}

int main()
{
    // 初始化变量
    int n, k;
    // cout << "请输入n和k：" << endl;
    cin >> n;
    cin >> k;
    // 调用约瑟夫函数
    josephus(n, k);
    return 0;
}
