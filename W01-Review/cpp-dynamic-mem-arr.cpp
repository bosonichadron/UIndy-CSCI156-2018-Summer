/*
    Name: Paul Talaga
    Date: May 15, 2018
    Desc: Dynamic memory demo.
*/
#include <iostream>

using namespace std;

int main(){
    int* a = new int[10]; // No typecasting neccessary!
    int b[10];
    *a = 5; // a[0]
    a[1] = 6;
    *(a + 2) = 7;
    cout << *a << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << "a: " << a << " &a:" << &a <<  " b: " << b << endl;
    
    delete a;
}