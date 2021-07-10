#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack *createStack(int maxSize){
Stack *res = (Stack*)malloc(sizeof(Stack));
res -> elements = (int*)malloc(maxSize * sizeof(int));
res -> size = maxSize;
res -> top = -1;
return res;
}

destroyStack(Stack *s){
    free(s -> elements);
    free(s);
}

int isEmpty(Stack *s){
    return (s -> top == -1);
}

int top(Stack *s){
    return (s -> elements [s -> top]);
}

void pop(Stack *s){
    s -> top --;
}

void push(Stack *s, int e){
    s -> top ++;
    s -> elements [s -> top] = e;
}
