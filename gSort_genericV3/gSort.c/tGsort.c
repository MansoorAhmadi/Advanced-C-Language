#include <stdio.h>
#include "gSort.h"

int intComp(void *p1, void* p2) {
    return *(int *)p1 - *(int *)p2;
    // we are explicitely casting and telling the compiler the pointed object is integer
}

int main(){
    int a[] = {1, 4, 2, 8, 5, 7}; //we have an array of integers
    int i;                     //we declare i for the loop

    gSortArray(a, sizeof(a) / sizeof(int), sizeof(int), intComp);
    //we passed the array as a parameter, we divide the whole array by size of byte
    //and we called the intComp function

    for(i=0; i<sizeof(a)/sizeof(int); i++) //iterate
        printf("%d\n", a[i]);
    return 0;
}
