#include <iostream>
#include <list>

using namespace std;

int main(){
    list<string> thing;
    thing.push_back("donuts");
    thing.push_back("brownies");
    thing.push_front("apples");
    thing.push_front("bananas1");
    thing.push_back("bananas2");
    
    cout << *(thing.begin()) << endl;
    //cout << thing[1] << endl;
    
    for( auto &item: thing){
        cout << item << endl;
        item = "none";
    }
    
    list<string>::iterator itter;
    for(itter = thing.begin(); itter != thing.end(); itter++){
        cout << " = " << (*itter) << endl;
    }
}