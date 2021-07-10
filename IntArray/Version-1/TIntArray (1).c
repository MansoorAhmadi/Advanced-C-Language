#include <stdio.h>
#include "IntArray.h"

int main()
{
    IntArray ia; int size;int i;

    printf("Array size?");
    scanf("%d",&size);
    ia=createArray(size);
    for (i=0;i<size;i++)
    {
        printf("element#%d?",i);
        scanf("%d",&(ia[i]));  /*stop*/
    }

    displayArray(ia,size);
    sortArray(ia,size);
    displayArray(ia,size);
    destroyArray(&ia);
    if(ia!=0)printf("pb in destroyArray\n");
    return 0;
}
