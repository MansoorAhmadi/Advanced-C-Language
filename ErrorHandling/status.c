#include <stdio.h>
#include "status.h"

static char* messages[] = {
    "",                             //empty string is for 0, which means OK.
    "Memory Allocation Failed",     //as defined in ENUM error number 1 is memory allocation failure
    "Empty Structure",              //if you want to display something and structure is empty error# 2
    "Error Opening File",           //error# 3

    "Unknown Error"                 //the last error - no body knows what is this error.
};

char *errorMessage(Status s){
    if(s > ERRUNKNOWN)
        return messages[ERRUNKNOWN];
    return messages[s];
}
