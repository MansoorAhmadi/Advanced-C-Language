typedef enum {
    OK,
    ERRALLOC,
    ERREMPTY,
    ERROPEN,

    ERRUNKNOWN
} Status;

char* errorMessage(Status);
