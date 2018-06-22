#include <iostream>
#include <set>

using namespace std;

int main(){
    set<string> thing;
    thing.insert("donuts");
    thing.insert("Brownies");
    thing.insert("apples");
    thing.insert("bananas1");
    thing.insert("bananas2");
    
    
    cout << thing.count("icecream") << endl;
    //cout << thing[1] << endl;
    
    for( auto &item: thing){
        cout << item << endl;
    }
}