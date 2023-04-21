//
// Created by 93539 on 2023/4/21.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define Stack_ElemType int
#define STACK_DEFAULT_SIZE 8

typedef struct SeqStack {
    Stack_ElemType *base;
    size_t capacity;
    int top;
} SeqStack;

//��������
void SeqStackInit(SeqStack *pst);

void SeqStackPush(SeqStack *pst, Stack_ElemType value);

bool SeqStackFull(SeqStack pst);

bool SeqStackEmpty(SeqStack pst);

void SeqStackShow(SeqStack pst);

void SeqStackPop(SeqStack *pst);

Stack_ElemType SeqStackTop(struct SeqStack pst);

void SeqStackDestroy(SeqStack *pst);


//����ʵ��
void SeqStackInit(SeqStack *pst) {
    assert(pst != NULL);
    pst->base = (Stack_ElemType *) malloc(sizeof(Stack_ElemType) * STACK_DEFAULT_SIZE);
    assert(pst->base != NULL);
    pst->capacity = STACK_DEFAULT_SIZE;
    pst->top = 0;
}

void SeqStackPush(SeqStack *pst, Stack_ElemType value) {
    assert(pst != NULL);
    if (SeqStackFull(*pst)) {
        printf("ջ���ˣ�Ԫ�ز�����ջ\n");
        return;
    }
    pst->base[pst->top++] = value;
}

bool SeqStackFull(SeqStack pst) {
    return pst.top >= pst.capacity;
}

bool SeqStackEmpty(SeqStack pst) {
    return pst.top == 0;
}

void SeqStackShow(SeqStack pst) {
    for (int i = pst.top - 1; i >= 0; --i) {
        printf("%d\n", pst.base[i]);
    }
}

void SeqStackPop(SeqStack *pst) {
    assert(pst != NULL);
    if (SeqStackEmpty(*pst)) {
        printf("ջ�ѿգ��޷���ջ\n");
        return;
    }
    --pst->top;
}

Stack_ElemType SeqStackTop(SeqStack pst) {
    assert(SeqStackEmpty(pst) != true);
    return pst.base[pst.top - 1];
}

void SeqStackDestroy(SeqStack *pst) {
    assert(pst != NULL);
    free(pst->base);
    pst->base = NULL;
    pst->capacity = pst->top = 0;
}

#endif //STACK_STACK_H
