/*
Advantages of malloc() in C++
Dynamic Memory allocation:
     Usually we create arrays at compile time in C++, 
     the size of such arrays is fixed. In the case at 
     run time we do not use all the space or extra space 
     is required for more elements to be inserted in the 
     array, then this leads to improper memory management 
     or segmentation fault error.
Heap memory:
    Local arrays that are defined at compile time are 
    allocated on the stack, which has lagged in memory 
    management in case the number of data increases. 
    Thus one needs to allocate memory out of the stack, 
    thus malloc comes into the picture as it allocates 
    the memory location on the heap and returns a pointer 
    on the stack pointing to the starting address of the 
    array type memory being allocated.
Variable-length array: 
    This function helps to allocate memory for an array whose 
    size can be defined at the runtime. Thus one can create the 
    number of blocks as much as required at run time.
Better lifetime: 
    Variable created using malloc method is proved to have a 
    better life than the local arrays as a lifetime of local 
    arrays depends on the scope they are being defined and cannot 
    access out of their scope. But variables or arrays created 
    using malloc exist till they are freed.         
*/
#include<iostream>
#include <cstdlib>
using namespace std; //Using namespace, you can define the context in which names are defined.
int main(){

    int *p = (int*)malloc(sizeof(int));
    int b = 12;
    *p = 6;
    void  *ptr= &b;
    cout<< *p<<endl;
    cout <<* (int*)ptr<<"  "<<ptr<<" "<< &b<<" size of "<<sizeof(ptr)<< endl;
    free(p);
    return 0;


}