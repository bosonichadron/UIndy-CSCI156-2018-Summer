/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: The C++ bool type stores a 0 or 1, and allows true or false.
*/
#include <iostream>

using namespace std;

int main(){
    bool a = true;
    a = 5; // Any integer other than 0 will get converted to 1.
    cout << sizeof(a) << endl;
    if(!a){
        cout << "a was false" << endl;
    }else{
        cout << "a was true" << endl;
    }
    cout << "a was: " << a << endl;
}