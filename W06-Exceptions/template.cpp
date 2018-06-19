#include <iostream>
#include <string>

using namespace std;

template <class A>
A add(A a, A b){
    return a + b
}


int main(){
    cout << add(5,6) << endl;
    cout << add(5.5,6.6) << endl;
    string a("Anything");
    string b(" I want");
    cout << add(a, b) << endl;
    cout << add(true, true) << endl;
    
    return 0;
}