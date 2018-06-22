#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, float> thing;
    thing.emplace("donuts", 10);
    thing.emplace("donuts", 12);
    thing.insert( make_pair("pizza", 5) );
    /*thing.insert("Brownies");
    thing.insert("apples");
    thing.insert("bananas1");
    thing.insert("bananas2"); */
    
    cout << thing.count("donutss") << endl;
    cout << thing.at("donuts") << endl;
    //cout << thing.count("icecream") << endl;
    //cout << thing[1] << endl;
    
    for( auto &item: thing){
        cout << item.first << " and " << item.second << endl;
    }
}