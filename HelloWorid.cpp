#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// 函数声明
int max(int num1, int num2);
void swap(int *x, int *y);
int getAverage(int array[], int size);
void printBook(struct Books *book);

// 声明一个结构体类型Books
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    // 结构体运行实例
    Books book1;
    Books book2;
    // 配置book1的详细信息
    strcpy(book1.title, "C++教程");
    strcpy(book1.author, "B大爷");
    strcpy(book1.subject, "编程语言");
    book1.book_id = 101;
    // 输出book1的信息，传入的参数是book1的地址
    printBook(&book1);

    int my_array[5] = {1, 2, 3, 4, 5};
    // 数组元素扩大2倍
    for (int &x : my_array)
    {
        x *= x;
        cout << x << endl;
    }

    // do while循环加入break语句
    int i = 10;

    do
    {
        // 使用continue语句跳过15执行下一次循环
        if (i == 19)
        {
            i = i + 1;
            continue;
        }
        cout << "i的值为：" << i << endl;
        i++;
        cout << "这是新增的语句" << endl;
        // if (i > 15)
        // {
        //     break;
        // }
    } while (i < 20);

    // 调用max函数
    int ret;
    ret = max(5, 33333);
    cout << "较大的值为" << ret << endl;

    int a = 100;
    int b = 200;

    swap(&a, &b); //&a表示指向a的指针，即a的地址
    cout << "交换后a的值为" << a << endl;
    cout << "交换后b的值为" << b << endl;

    // 数学公式使用
    short s = 10;
    int m = -1000;
    long l = 100000;
    float f = 20.222;
    double d = 123.23243;

    cout << "sin(d)" << sin(d) << endl;
    cout << "abs(i)" << abs(m) << endl;
    cout << "sqrt(f)" << sqrt(f) << endl;

    // 创建一个二维数组并遍历输出值
    int bs[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    // 遍历输出
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "a[" << i << "][" << j << "]=" << bs[i][j] << endl;
        }
    }

    // 将数组作为参数传给函数
    int balance[] = {19, 22, 3, 44, 5};
    double avg;
    avg = getAverage(balance, 5);
    cout << "数组balance中所有数的平均值为：" << avg << endl;

    // 结构体

    return 0;
}

// 创建一个函数比较两个数的大小并返回较大的那个

int max(int num1, int num2)
{
    // 闯将一个临时变量
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}

// 函数指针调用

void swap(int *x, int *y)
{

    int temp;  // 保存临时地址
    temp = *x; // 将X的地址赋给临时变量
    *x = *y;
    *y = temp;
}

// 定义一个可以返回一组数的平均数的函数
int getAverage(int array[], int size)
{

    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
    {
        sum += array[i];
    }

    avg = double(sum) / size;
    return avg;
}
// 定义结构体函数,用传入指针的方式来重写结构体
void printBook(struct Books *book)
{
    // 当使用指针时，要使用->来访问结构体的成员变量
    cout << "书名是：" << book->title << endl;
    cout << "书的作者是：" << book->author << endl;
    cout << "书的类目是：" << book->subject << endl;
}
