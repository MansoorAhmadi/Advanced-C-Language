#include <stdio.h>
#include "gSort.h"
#include <string.h>

int stringComp(void *p1, void* p2) {
    return strcomp (*(char **)p1 - *(char **)p2);
   					 // we are explicitely casting and telling the compiler the 						pointed object is integer
}

main(){
    char * a[] = {"Hello, hi", "How are you oding?", "am i steting"}; 			//we have an array of integers
    int i;                  			 	 //we declare i for the loop

    gSortArray(a, sizeof(a) / sizeof(char*), sizeof(char*), stringComp);

		//we passed the array as a parameter, we divide the whole array by size of byte
   		 //and we called the intComp function

    for(i=0; i<sizeof(a)/sizeof(int); i++) //iterate
        printf("%d\n", a[i]);
    return 0;
}
