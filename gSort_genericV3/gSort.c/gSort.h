
typedef int(*compFun)(void *, void *); //previously we had int *, int* for the defined pointers.

typedef int*IntArray;
IntArray createArray(int nElements);
void destroyArray(IntArray *a);
void displayArray(IntArray a, int length);

void gSortArray(void *a, int nElts, int eltSize, compFun comp);
// *a is untyped pointed that's why it returns void.
// we are passing compFun comp as a parameter to perform
