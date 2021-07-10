#include <stdio.h>
#include "intArray.h"

int intComp(int x, int y){
    //return x-y;           //decending order - Smallest to Greatest numebr
    return y-x;           //ascending order - Greatest to Smallest number
}

int main()
{
    IntArray ia; int size; int i;

    printf("Array Size? ");
    scanf("%d",&size);
    // we are trying to update the size of array using the address.

    // once we know the size, we store in our predefined createArray() function
    ia = createArray(size);
    for (i=0; i<size; i++){
        printf("Element#%d: ", i);
        //Iterate over each element and print it as long as its less than inputed size

        scanf("%d", &(ia[i]));
        //iterate the loop at the "i"th address of the ia array and change the address from scanf function
    }
    //we must call all the predefined functions from the .header file.
    displayArray(ia, size);
    sortArray(ia, size, intComp);
    displayArray(ia, size);
    //we call the destroyArray to destroy the address of the array which is ia
    destroyArray(&ia);
    if(ia != 0)
        printf("Problem in destroyArray\n!");
    return 0;
}
