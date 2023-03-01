/*
题目：循环链表
作者： 刘季伟
时间：2022/2/26 19：21
地点：4区401
*/
// 创建一个循环链表并实现约瑟夫环问题
#include <iostream>
using namespace std;

// 创建循环链表的结构体
struct Node
{
    int data;
    Node *next;
};

// 创建循环链表
Node *createCircularLinkedList(int n)
{
    // 创建头节点并初始化数据和指针
    Node *head = new Node();
    head->data = 1;
    head->next = nullptr;
    // 创建P指针指向头节点用于遍历链表
    Node *p = head;
    // 循环创建n-1个节点，将它们依次连接到链表中
    for (int i = 2; i <= n; i++)
    {
        // 创建q节点并初始化数据和指针
        Node *q = new Node();
        q->data = i;
        q->next = nullptr;
        // 将q节点连接到链表中
        p->next = q;
        // 将p指针移动到链表的末尾
        p = q;
    }
    // 将链表的尾节点连接到头结点，形成循环链表
    p->next = head;
    // 返回头结点指针
    return head;
}
// 删除循环链表的指定节点
Node *deleteNode(Node *head, Node *node)
{
    if (node == head)
    {
        head = head->next;
    }
    Node *p = head;
    while (p->next != node)
    {
        p = p->next;
    }
    p->next = node->next;
    delete node;
    return head;
}

// 约瑟夫环问题求解
int josephus(int n, int m)
{
    Node *head = createCircularLinkedList(n);
    Node *p = head;
    while (p->next != p)
    {
        for (int i = 1; i < m; i++)
        {
            p = p->next;
        }
        head = deleteNode(head, p);
        p = p->next;
    }
    return head->data;
}

int main()
{
    int n = 10;
    int m = 3;
    int result = josephus(n, m);
    cout << "The last person's number is: " << result << endl;
    return 0;
}
