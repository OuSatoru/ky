/*
一、实验目的 1．进一步掌握指针变量、动态变量的含义。
2．掌握二叉树的结构特性，以及各种存储结构的特点及适用范围。
3．掌握用指针类型描述、访问和处理二叉树的运算。
二、实验内容 实现二叉树的遍历。
三、基本要求 以二叉链表表示二叉树，实现二叉树先序遍历、中序遍历、后序遍历的递归算法；直接利用栈的基本操作，实现二叉树先序遍历的非递归算法。
*/

#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *left, *right;
}BiTNode, *BiTree;
BiTree CreateBiTree();
void PreOrderTraverse(BiTNode *root);

int main(int argc, char const *argv[])
{
    BiTree root = CreateBiTree();
    printf("%s\n", "sbsbsb");
    PreOrderTraverse(root);
    return 0;
}

BiTree CreateBiTree() {
    char ch;
    scanf("%c", &ch);
    BiTNode *node = (BiTNode *)malloc(sizeof(BiTNode));
    if (ch == '#') {
        node = NULL;
    } else {
        printf("recv: %c\n", ch);
        node->data = ch;
        node->left = CreateBiTree();
        node->right = CreateBiTree();
    }
    return node;
}

void PreOrderTraverse(BiTNode *root) {
    if (root) {
        printf("%c ", root->data);
        PreOrderTraverse(root->left);
        PreOrderTraverse(root->right);
    }
}
