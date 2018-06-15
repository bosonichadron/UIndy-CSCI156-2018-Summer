#include <iostream>
#include <string>

using namespace std;

void permute(string input, string end){
    if(end.length() == 0 && input.length() == 0){
        return;
    }
    if(input.length() == 0){
        cout << end << endl;
        return;
    }
    for(unsigned i = 0; i < input.size(); i++){
        string begin = input.substr(0,i);
        string ending = input.substr(i+1);
        //cout << i << "  " << begin + ending << endl;
        string append = " ";
        append[0] = input[i];
        permute( begin + ending, end + append);
    }
}

void substrings(string input){
    if(input.size() == 0){
        return;
    }
    for(unsigned i = 0; i <= input.size(); i++){
        permute( input.substr(0,i), "");
    }
    substrings(input.substr(1));
}


int main(){
    
    substrings("abc");
}