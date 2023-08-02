
// C++ Program to demonstrate that a void pointer
// cannot be dereferenced
 
#include <iostream>
using namespace std;
 
int main()
{
//    int a = 10;
//     void* ptr = &a;
 
//     cout << *ptr;
 
//     return 0;
//     Compiler Error: 'void*' is not a pointer-to-object type 
    int a = 10;
    void* ptr = &a;
    // The void pointer 'ptr' is cast to an integer pointer
    // using '(int*)ptr' Then, the value is dereferenced
    // with `*(int*)ptr` to get the value at that memory
    // location
    cout << *(int*)ptr << endl;
 
    return 0; // output will be 10
//     Following are the advantages of void pointers

// malloc() and calloc() return void * type and this allows these functions to be used to allocate memory of any data type (just because of void *).
// void pointers in C are used to implement generic functions in C. For example, compare function which is used in qsort().
}
 
