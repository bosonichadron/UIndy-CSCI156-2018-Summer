#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(string input, string end, vector<string> &ret){
    if(end.length() == 0 && input.length() == 0){
        return;
    }
    if(input.length() == 0){
        //cout << end << endl;
        ret.push_back(end);
        return;
    }
    for(unsigned i = 0; i < input.size(); i++){
        string begin = input.substr(0,i);
        string ending = input.substr(i+1);
        //cout << i << "  " << begin + ending << endl;
        string append = " ";
        append[0] = input[i];
        permute( begin + ending, end + append, ret);
    }
}

void substrings(string input, vector<string> &ret){
    if(input.size() == 0){
        return;
    }
    for(unsigned i = 0; i <= input.size(); i++){
        permute( input.substr(0,i), "", ret);
    }
    substrings(input.substr(1), ret);
}

bool contains(string word, vector<string> &list){
    for(unsigned i = 0; i < list.size(); i++){
        if( word == list[i]){
            return true;
        }
    }
    return false;
}


bool contains2(const string &word, const vector<string> &list, unsigned low, unsigned high){
    //cout << word << endl;
    if(high - low == 0){
        return false;
    }
    unsigned middle = (high - low)/2 + low;
    //cout << "  looking: " << list.at(middle) << endl;
    if(list.at(middle) == word){
        return true;
    }
    if(list.at(middle) > word){ // word is on the left
        return contains2(word, list, low, middle);
    }else{ // word is on the right side
        return contains2(word, list, middle + 1, high);
    }
}


int main(){
    vector<string> words;
    ifstream f;
    f.open("../dictionary.txt");
    while(f){
        string word;
        f >> word;
        words.push_back(word);
        //cout << word << endl;
    }
    sort(words.begin(), words.end());
    
    words.push_back("apple");
    words.push_back("bagel");
    words.push_back("maple");
    words.push_back("zebra");
    
    vector<string> result;
    substrings("zebaryu", result);
    for(int i = 0; i < result.size(); i++){
        //cout << "   -" << result[i] << "-" << endl;
        if( contains2( result[i], words, 0, words.size() ) ){
        //if( contains( result[i], words) ){
            cout << result[i] << endl;
        }
    }
}