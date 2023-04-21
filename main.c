#include "stack.h"

int main() {
    SeqStack st;
    SeqStackInit(&st);

    SeqStackPush(&st,1);
    SeqStackPush(&st,2);
    SeqStackPush(&st,3);
    SeqStackPush(&st,4);
    SeqStackPush(&st,5);

    while(!SeqStackEmpty(st)){
        Stack_ElemType top_val = SeqStackTop(st);
        printf("%d ³öÕ»\n",top_val);
        SeqStackPop(&st);
    }

    SeqStackDestroy(&st);

    return 0;
}
