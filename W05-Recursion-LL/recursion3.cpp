#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void fill(vector<int> &vec, int length){
    if( length == 0){
        return;
    }
    vec.push_back(rand() % 100);  
    fill(vec, length - 1);
}


vector<int> fill2(int length){
    if(length == 0){
        vector<int> a;
        return a;
    }
    vector<int> a = fill2(length - 1);
    a.push_back(rand() % 20);
    return a;
}

int sum(vector<int> vec){
    //cout << "sum: " << vec.size() << endl;
    if( vec.size() == 0){
        return 0;
    }
    int temp = vec[0];
    vec.erase(vec.begin());
    //cout << "zero: " << vec[0] << endl;
    return temp + sum( vec );
}

int evens(vector<int> vec){
    if( vec.size() == 0){
        return 0;
    }
    int temp = vec[0];
    vec.erase(vec.begin());
    if( temp % 2 == 0){ // even!
        return 1 + evens( vec );
    }else{
        return 0 + evens( vec );
    }
}

int count(vector<int> vec, int to_find){
    if( vec.size() == 0){
        return 0;
    }
    int temp = vec[0];
    vec.erase(vec.begin());
    if( temp == to_find){ 
        return 1 + count( vec , to_find);
    }else{
        return 0 + count( vec , to_find);
    }
}

int fact(int number){
    if( number <= 1){
        return 1;
    }
    return number * fact(number - 1);
}

int charCount(string vec, char to_find){
    if( vec.length() == 0){
        return 0;
    }
    char temp = vec[0];
    vec = vec.substr(1);
    if( temp == to_find){ 
        return 1 + charCount( vec , to_find);
    }else{
        return 0 + charCount( vec , to_find);
    }
}


int main(){
    srand(time(0));
    vector<int> a;
    //fill(a, 10);
    a = fill2(10);
    for(unsigned i = 0; i < a.size(); i++){
        cout << i << ": " << a[i] << endl;
    }
    
    cout << "Sum1: " << sum(a) << " Evens: " << evens(a) << endl;
    cout << "Count: " << count(a, 10) << endl;
    cout << "Factorial: " << fact(5) << endl;
    cout << "CharCount: " << charCount("What string should I give this?",' ') << endl;
}