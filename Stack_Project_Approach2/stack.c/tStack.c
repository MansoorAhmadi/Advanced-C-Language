#include "stack.h"
#include <stdio.h>
int main(){
    Stack*s=createStack();
    int n;
    for(n=0; n<10; n++)
        push(s, n);
    while(!isEmpty(s)) {
        printf("%d\n", top(s));
        pop(s);
    }
    destroyStack(s);
    return 0;
}
