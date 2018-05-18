/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: Program to generate random numbers.
    Use: ./a.out 10              will print out 10 numbers
         ./a.out 1000 > n.txt    will save 1000 numbers to n.txt
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    
    if(argc == 1){
        cout << "Give me a number as a first parameter!" << endl;
        return 0;
    }
    
    srand(time(0));
    for(unsigned i = 0; i < atoi(argv[1]); i++){
        cout << rand() % 10000 << endl;
    }
    cout << "-1" << endl;
    return 0;
}