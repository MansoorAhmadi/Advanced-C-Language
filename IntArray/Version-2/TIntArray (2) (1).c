#include <stdio.h>
#include <stdlib.h>
#include "IntArray.h"

int main(int nwords,char*words[])
{
    IntArray ia; int size;int i;
    size=nwords-1;
    ia=createArray(size);
    for (i=0;i<size;i++)
    {
      ia[i]=atoi(words[i+1]);
        printf("element#%d?",1 );  /*stop*/
    }

    displayArray(ia,size);
    sortArray(ia,size);
    displayArray(ia,size);
    destroyArray(&ia);
    if(ia!=0)printf("pb in destroyArray\n");
    return 0;
}

