typedef struct Box{
    int value;
    struct Box *next;
} Box, *Stack;              //Stack is a pointer pointed to the box.
                            //The object to pointed by stack is a box.
                            //Stack is nothing but a pointer to the box

void push(Stack*s, int e);  //push element to pointed stack by s
void pop(Stack*s);          //remove element pointed by s
int isEmpty(Stack*s);
int top(Stack*s);

Stack*createStack();
void destroyStack(Stack *s);
