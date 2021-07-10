
typedef struct Stack{
    int*elements;  //elements pointed to
    int size;       //size of the stack
    int top;        //top of the stack
} Stack;

void push(Stack*s, int e);  //push element to pointed stack by s
void pop(Stack*s);          //remove element pointed by s
int isEmpty(Stack*s);
int top(Stack*s);

Stack*createStack(int maxSize);
void destroyStack(Stack *s);

