/*
    Name: Paul Talaga
    Date: May 15, 2018
    Desc: Demo of command-line parameters.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    cout << "argc: " << argc << endl;
    for(int i = 0; i < argc; i++){
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }
    for(int i = 0; i < atoi(argv[1]); i++){
        cout << "yo";
    }
    cout << "Hello world" << endl;
    return 0;
}