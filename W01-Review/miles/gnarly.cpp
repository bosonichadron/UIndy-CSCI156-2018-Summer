/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: cin and cout examples.
*/
#include <iostream>

using namespace std;

int main(){
    cout << "How many gnarlys do you want?" << endl;
    int number = 0;
    cin >> number; // Equivalent to scanf("%d", &number);
    int i = 99;
    for(int i = 0; i < number; i++){
        cout << "gnarly! " << i << endl;
    }
    cout << "i: " <<  i << endl;
    return 0;
}