/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: Some examples of strings, function overloading, pass-by-reference,
               and operator functions.
*/
#include <iostream>

using namespace std;

void modifyMe(string &thing){ // pass by reference.  Changing thing changes name below.
    thing[1] = '!';
}

// If 2 strings are ever multiplied together, do this!
string operator*(string a, string b){
    string ret;
    for(int i = 0; i < a.length(); i++){
        ret += a;
    }
    for(int i = 0; i < b.length(); i++){
        ret += b;
    }
    return ret;
}

string operator*(string a, int number){
    string ret;
    for(int i = 0; i < number; i++){
        ret += a;
    }
    return ret;
}

int main(){
    // A string is an object, meaning it can store data and define
    // functions that work on that data, such as know its length.
    string name = "Adi";
    cout << "My name is " << name << "." << endl;
    cout << "Length: " << name.length() << endl; // How long is it?
    cout << name[1] << endl; // A character!
    name = name * "Bob";  // Multiply 2 strings, so use the fn above.
    modifyMe(name);
    name = name * 3; // Multiply a string times a number, above fn.
    cout << "My name is " << name << "." << endl;
}