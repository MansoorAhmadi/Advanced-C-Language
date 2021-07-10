#include <stdio.h>
#include <stdlib.h>
#include "intArray.h"

IntArray createArray(int nElements){

    //Step one: creating a local pointer variable and allocating memory using malloc () function
    int i;

    // int pointer variable = res.
    // typecast using malloc - where malloc expects number of bytes
    IntArray res=(IntArray)malloc(nElements*sizeof(int));

    // if malloc fails then return 0.
    if(!res)
        return 0;
    // end of step one.

    //Step two:
    // in order to initialize the nElements to zero. I have to populate and run a loop
    for(i=0; i<nElements; i++)
    // we iterate over each element and initialize it to zero.
    res[i] = 0;

    //End of step two.

    //Step three
    // return the pointer variable which is towards the memory.
    return res;

}

void destroyArray(IntArray *a){
    free(*a);
    *a = 0;
}

void displayArray(IntArray a, int size){
    int i;
    printf("[");
    for (i=0; i<size; i++)
        printf("%d", a[i]);
    printf("]\n");
}

void sortArray(IntArray a, int size, compFun comp) {
    int l, r;
    // we declared two variable l=left and r=right for comparison
    // L should come from minus -1
    for (l=0; l<size-1; l++)
        for(r=l+1; r<size; r++) //r should go until l+1 until l less than size
            if (comp(a[l], a[r]) > 0 ){
            //we passed the function inside the parameter and applying it in comparison
            int temp = a[l];
            //swap the value of a[r] to a of l a[l].
            a[l] = a[r];
            //store the value of temp in a of r a[r].
            a[r] = temp;
        }
}



