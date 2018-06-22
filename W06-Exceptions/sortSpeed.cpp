#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fillRand(vector<int> &v, int size){
    for(int i = 0; i < size; i++){
        v.push_back(rand() % 10000);
    }
}

void print(vector<int> &v){
    for(int i = 0; i < 10; i++){
        cout << v[i] << ",";
    }
    cout << "....";
    for(int i = v.size() - 10; i < v.size(); i++){
        cout << v[i] << ",";
    }
    cout << endl << "Size: " << v.size() << endl;
}

void bubble(vector<int> &v){
    for(unsigned b = 0; b < v.size(); b++){
        bool flip = false;
        for(unsigned i = 0; i < v.size() -1 - b; i++){
            if(v[i] > v[i+1]){ // flip
                auto temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                flip = true;
            }
        }
        if(!flip)return;
    }
}

int main(){
    srand(time(0));
    vector<int> v1;
    fillRand(v1, 100000);
    
    sort(v1.begin(), v1.end());
    
    vector<int> v2(v1);
    
    
    
    print(v1);
    
    clock_t s_begin = clock();
    sort(v1.begin(), v1.end());
    clock_t s_end = clock();
    
    clock_t b_begin = clock();
    bubble(v2);
    clock_t b_end = clock();
    //print(v1);
    
    cout << "sort  : " << (float)(s_end - s_begin) / (float)CLOCKS_PER_SEC << endl;
    cout << "bubble: " << (float)(b_end - b_begin) / (float)CLOCKS_PER_SEC << endl;
    
    if(s_end - s_begin == b_end - b_begin){
        cout << "tie!" << endl;
    }else if(s_end - s_begin < b_end - b_begin){
        cout << "sort wins" << endl;
    }else{
        cout << "Bubble wins" << endl;
    }
}