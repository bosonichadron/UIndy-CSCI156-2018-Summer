#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> thing; // FIFO
    thing.push("donuts");
    thing.push("cake");
    thing.push("chocolate");
    
    cout << thing.front() << endl;
    thing.pop();
    cout << thing.front() << endl;
    
    //cout << *(thing.begin()) << endl;
    //cout << thing[1] << endl;
    
    
}