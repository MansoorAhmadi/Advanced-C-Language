#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack *createStack(){
    Stack *res=(Stack*)malloc(sizeof(Stack));
    *res = 0;
    return res;
    // at this stage we have a stack pointed to a null box
}

int isEmpty(Stack *s){
    //we are going to check if the stack is empty.
    return (*s == 0);
    //if the s pointed to the object is = = to zero.
}

int top(Stack *s){
    return (*s) -> value;
}

void pop(Stack *s){
    Box *temp = *s;     //The object pointed by temp is a box.
    *s = (*s) -> next; //temp is pointing at a box
    free(temp);
}

void destroyStack(Stack *s){
    while(!isEmpty(s))
        pop(s);
    free(s);
}

void push(Stack *s, int e){
    Box *temp = (Box*)malloc(sizeof(Box));
    temp -> value = e;  //this is the integer value.
                        //The first part of the box. e is defined in parameter as well
    temp -> next = *s;
    *s = temp;
}
