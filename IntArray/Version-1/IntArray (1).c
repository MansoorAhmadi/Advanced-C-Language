#include <stdio.h>
#include <stdlib.h>
#include "IntArray.h"

IntArray createArray(int nElements)
{
   int i;
   IntArray res=(IntArray)malloc(nElements*sizeof(int));
   if(!res)return 0;
   for(i=0;i<nElements;i++)
    res[i]=0;
   return res;
}
void destroyArray(IntArray *a)
{
 free(*a);
 *a=0;
}
void displayArray(IntArray a, int size)
{
    int i;
    printf("[ ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("]");
}
void sortArray(IntArray a,int size)
{
    int l,r;
    for(l=0;l<size-1;l++)
        for(r=l+1;r<size;r++)
            if(a[l]>a[r])
            {
             int temp=a[l];
             a[l]=a[r];
             a[r]=temp;
            }
}
