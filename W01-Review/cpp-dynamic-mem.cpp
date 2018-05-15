/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: How to use dynamic memory in C++.
*/
#include <iostream>

using namespace std;

int main(){
    int* a = new int; // No typecasting neccessary!
    *a = 5;
    cout << *a << endl;
    
    delete a;
}