/*
一、实验目的 1．掌握栈的特点，即先进后出的原则。
2．掌握栈的存储结构。
3．掌握栈的基本运算，如入栈、出栈等运算及其实现。
二、实验内容 判断表达式中开、闭括号是否配对出现。
三、基本要求 运用栈实现表达式开、闭括号是否配对出现算法。先要实现栈的基本操作算法，包括初始化栈、进栈、退栈等。本程序中，表达式中的元素限定为char型，表达式的长度<100。表达式输入的为一个以“#”为结束标志的字符串。若用户输入的表达式中少了左括号或少了右括号，打印“括号不匹配”。若输入的表达式左右括号匹配，打印“括号匹配”。
*/
#include <stdio.h>
#include <string.h>

#define SIZE 100

typedef struct {
    char stack[SIZE];
    int top;
}SeqStack;
int GetTop(SeqStack S, char *e);
void InitStack(SeqStack *S);
int PushStack(SeqStack *S, char e);
int PopStack(SeqStack *S, char *e);

int main(int argc, char const *argv[])
{
    char str[SIZE];
    int i;
    char e;
    SeqStack S;
    scanf("%s", str);
    InitStack(&S);
    // printf("%s\n", str);
    for (i = 0; i < strlen(str); i++) {
        // printf("%c\n", str[i]);
        if (str[i] == '(')
            PushStack(&S, str[i]);
        else if(str[i] == ')')
            if (PopStack(&S, &e) != 1) {
                printf("error\n");
                return -1;
            }
    }
    printf("%d\n", S.top);
    // int i;
    // return 0;
}

void InitStack(SeqStack *S) {
    S->top = 0;
}

int GetTop(SeqStack S, char *e) {
    if (S.top <= 0) {
        return 0;
    } else {
        *e = S.stack[S.top-1];
        return 1;
    }
}

int PushStack(SeqStack *S, char e) {
    if (S->top >= SIZE) {
        return 0;
    } else {
        S->stack[S->top] = e;
        S->top++;
        return 1;
    }
}

int PopStack(SeqStack *S, char *e) {
    if (S->top <= 0) {
        return 0;
    } else {
        *e = S->stack[S->top-1];
        S->top--;
        return 1;
    }
}
