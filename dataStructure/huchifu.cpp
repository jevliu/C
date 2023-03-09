// 互斥符

#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 10000; // 定义一个栈的最大容量
// 自定义一个栈的类
class Stack
{
private:
    char arr[MAX_SIZE]; // 定义一个数组用于储存字符串
    int top;            // 栈顶指针

public:
    Stack() // 构造函数，初始化栈顶指针
    {
        top = -1;
    }
    // 定义入栈操作函数
    bool push(char x)
    {
        // 如果栈已满，返回false
        if (top >= MAX_SIZE - 1)
        {
            return false;
        }
        arr[++top] = x; // 将元素添加到栈顶
        return true;
    }
    // 定义出栈操作
    bool pop()
    {
        if (top < 0) // 栈为空，无法出栈
        {
            return false;
        }
        top--; // 移动栈顶指针
        return true;
    }
    // 返回栈顶元素
    char peek()
    {
        return arr[top];
    }
    // 判断栈是否为空
    bool isEmpty()
    {
        return top < 0;
    }
};

// 先定义一个储存输入字符串的数组
char c[MAX_SIZE];
int top = -1; // 定义一个指向栈顶的指针，默认值为-1表示现在这个栈是一个空栈
int main()
{
    cin >> c; // 将输入的字符串储存再c中
    int len = strlen(c);

    for (int i = 0; i < len; i++)
    {
        if (top >= 0 && abs(c[i] - c[top]) == 32) // 相邻字符大小相差32
        {
            top--; // 通过将栈顶元素下移一位实现出栈的效果
        }
        else
        {
            c[++top] = c[i]; // 将字符入栈
        }
    }
    // 根据当前栈中的元素来判断返回的情况
    if (top == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << c[i];
        }
        cout << endl;
    }

    return 0;
}
