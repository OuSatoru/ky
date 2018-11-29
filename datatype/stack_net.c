#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
#define ADD 10
#define SElemType char
typedef struct
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} SqStack;
SqStack *InitStack()
{
    SqStack *S;
    S = (SqStack *)malloc(sizeof(SqStack));
    S->base = (SElemType *)malloc(SIZE * sizeof(SElemType));
    if (!S->base)
        exit(-2);
    S->top = S->base;
    S->stacksize = SIZE;
    return S;
}
int StackEmpty(SqStack *S)
{
    if (S->top == S->base)
        return 1;
    else
        return 0;
}
SElemType *GetTop(SqStack *S)
{
    SElemType *e;
    e = (char *)malloc(sizeof(char));
    if (S->top == S->base)
        return 0;
    *e = *(S->top - 1);
    return e;
}
int Push(SqStack *S, SElemType e)
{
    if (S->top - S->base >= S->stacksize)
    {
        S->base = (SElemType *)realloc(S->base, (S->stacksize + ADD) * sizeof(SElemType));
        if (!S->base)
            exit(-2);
        S->top = S->base + S->stacksize;
        S->stacksize += ADD;
    }
    *S->top = e;
    S->top++;
    return 1;
}
int Pop(SqStack *S, SElemType *e)
{
    if (S->top == S->base)
        return 0;
    S->top--;
    *e = *S->top;
    return 1;
}
int Partner(SElemType *left)
{
    switch (*left)
    {
    case '(':
        return ')';
    case '[':
        return ']';
    case '{':
        return '}';
    }
}
main()
{
    int i, decide = 0, temp1;
    char string[100], *p, *temp;
    SqStack *stack;
    stack = InitStack();
    printf("Please input and end with '#':\n");
    for (i = 0; i <= 99; i++)
    {
        string[i] = getchar();
        if (string[i] == '#')
            break;
    }
    for (p = string; *p != '#'; p++)
    {
        switch (*p)
        {
        case '(':
        case '[':
        case '{':
            Push(stack, *p);
            break;
        case ')':
        case ']':
        case '}':
        {
            temp = GetTop(stack);
            if (Partner(temp) != *p)
                decide++;
            else
                Pop(stack, temp);
            break;
        }
        default:
            break;
        }
    }
    if (StackEmpty(stack) && !decide)
        printf("success!");
    else
        printf("fault!");
    getch();
}