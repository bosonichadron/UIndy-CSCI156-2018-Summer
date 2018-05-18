/*
    Name: Paul Talaga
    Date: May 14, 2018
    Desc: Solution to in-class activity.
*/
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int addition(const vector<int> &a){ 
    int total = 0;
    for(unsigned i = 0; i < a.size(); i++){
        total += a[i];
    }
    return total;
}

float average(const vector<int> &a){
    return (float)addition(a) / a.size();
} 

void sorting(vector<int> &a){
    for(unsigned i = 0; i < a.size(); i++){
        bool no_flips = true;
        for(unsigned j = 0; j < a.size() - 1 - i; j++){
            if(a.at(j) > a.at(j+1)){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                no_flips = false;
            }
        }
        if(no_flips){
            return;
        }
    }
    //return a;
}

void print(const vector<int> &a){
    for(unsigned i = 0; i < a.size(); i++){
        cout << a.at(i) << " ";
    }
    cout << endl;
}



int main(int argc, char* argv[]){
    vector<int> a;
    //vector<int> sorted;
    int temp = -99;
    
    cout << "Give me any amount of numbers you want to, typing a -1 to signal the end." << endl;
    cin >> temp;
    
    while(temp != -1){
        a.push_back(temp);
        cin >> temp;
    }
    
    cout<<"Your total is: "<< addition(a)<< endl;
    cout<<"Your average is: "<< average(a)<< endl;
    cout << "Your numbers listed are: ";
    sorting(a);
    //print(a);
    
    return 0;
}

