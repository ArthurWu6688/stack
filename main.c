#include "stack.h"

int main() {
//    SeqStack st;
//    SeqStackInit(&st);
//
//    SeqStackPush(&st,1);
//    SeqStackPush(&st,2);
//    SeqStackPush(&st,3);
//    SeqStackPush(&st,4);
//    SeqStackPush(&st,5);
//
//    while(!SeqStackEmpty(st)){
//        Stack_ElemType top_val = SeqStackTop(st);
//        printf("%d ³öÕ»\n",top_val);
//        SeqStackPop(&st);
//    }
//
//    SeqStackDestroy(&st);

    LinkStack lsk;
    LinkStackInit(&lsk);
    LinkStackPush(&lsk,1);
    LinkStackPush(&lsk,2);
    LinkStackPush(&lsk,3);
    LinkStackPush(&lsk,4);
    LinkStackPush(&lsk,5);
    LinkStackShow(lsk);
    printf("***********************************************\n");
    LinkStackPop(&lsk);
    LinkStackPop(&lsk);
    LinkStackPop(&lsk);
    LinkStackShow(lsk);
    printf("***********************************************\n");


    return 0;
}
