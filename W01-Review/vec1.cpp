/*
    Name: Paul Talaga
    Date: May 15, 2018
    Desc: A vector demo.
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a[10] = {};
    vector<int> b(10);
    
    a[3] = 10;
    b[2] = 9;
    for(int i = 0; i < 10; i++){
        cout << i << " " << a[i] << " " << b[i] << endl;
    }
    cout << endl;
    b.push_back(20);
    cout << "Length: " << b.size() << endl;
    for(unsigned i = 0; i < b.size(); i++){
        cout << i << " b " << b.at(i) << endl;
    }
    
    cout << endl;
    b.pop_back();
    b.pop_back();
    cout << "Length: " << b.size() << endl;
    for(unsigned i = 0; i < b.size(); i++){
        cout << i << " b " << b.at(i) << endl;
    }
    
    cout << endl;
    b.clear();
    cout << "Length: " << b.size() << endl;
    for(unsigned i = 0; i < b.size(); i++){
        cout << i << " b " << b.at(i) << endl;
    }
    
    return 0;
}