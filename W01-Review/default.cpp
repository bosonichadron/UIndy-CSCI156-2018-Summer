/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: C++ allows for default values of function paramters, but they
          all defaults must be last/to the right.
*/
#include <iostream>

using namespace std;

/*int add(int a){
    return a;
}

int add(int a, int b){
    return a + b;
} */

// This next function replaces the above 2.
// Note function prototypes don't work with default paramters.
int add(int a, int b = 0, int c = 0, int d = 9){
    return a + b + c;
}

int main(){

    int a = 5;
    int b = 6;
    int c = 7;
   
   cout << add(a) << " " << add(a,b) << " " << add(a,b,c) << endl;
   
   return 0;
}

