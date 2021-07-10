
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gSort.h"

void gSortArray(void *a, int nElts, int eltSize, compFun comp) {
    int l, r;
    void *temp = malloc(eltSize);      		 //once we know the size, we allocate 1 byte

    void *end = a + eltSize * nElts;    		// <-- what's the size of end?

    for(l=0; a+l<end-eltSize; l+=eltSize)
        for(r=l+eltSize; r+a<end; r+=eltSize)
            if(comp(a+l, a+r) > 0){
                                       			 //memcpy(dest, src, length) It's used to copy bytes.
            memcpy(temp, a+l, eltSize); 		//destination is temp, source is, a+l, size in bytes are 						eltSize
            memcpy(a+l, a+r, eltSize);
            memcpy(a+r, temp, eltSize);
        }
    free(temp);
}
