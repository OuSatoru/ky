/* 
一、实验目的 
1．掌握用C语言上机调试线性表的基本方法。
2．掌握线性表的基本操作。
二、实验内容 创建并打印一个单链表。
三、基本要求 要求生成线性表时，从键盘上读取元素，用链式存储结构（单链表）实现存储。单链表数据元素限定为非”0”整数，单链表的长度不限，数据元素输入的以”0”为结束标志。
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *link;
}ListNode, *LinkList;

LinkList create();

int main(void)
{
    LinkList root = create();
    
    while(root->link != NULL) {
        root = root->link;
        printf("\n");
        printf("%d ", root->data);
    } 
    
    return 0;
}

LinkList create() {
    LinkList head = (LinkList)malloc(sizeof(ListNode));
    ListNode *p, *pre;
    pre = head;
    int i = 1;
    while (1) {
        scanf("%d", &i);
        if (i == 0) {
            break;
        }
        p = (ListNode*)malloc(sizeof(ListNode));
        p->data = i;
        p->link = NULL;
        pre->link = p;
        pre = p;
    }
    return head;
}
