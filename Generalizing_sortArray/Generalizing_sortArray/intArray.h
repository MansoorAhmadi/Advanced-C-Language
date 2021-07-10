typedef int(*compFun)(int, int);

typedef int*IntArray;
IntArray createArray(int nElements);
void destroyArray(IntArray *a);
void displayArray(IntArray a, int length);
void sortArray(IntArray a, int length, compFun comp);


