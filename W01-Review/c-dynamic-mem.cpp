/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: How to use dynamic memory in C.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int* a = (int*)malloc(sizeof(int)); // Ask the memory allocate function
    *a = 5;                             // for x bytes, and convert to the
    cout << *a << endl;                 // correct pointer type.
    
    free(a);
}