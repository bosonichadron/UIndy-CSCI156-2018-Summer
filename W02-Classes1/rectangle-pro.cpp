#include <iostream>
#include <vector>

/*
    two vectors: one with heights, another with widths
*/

using namespace std;

float getPerimeter(float w, float h){
    return w * 2 + h * 2;
}

void printPairs(vector<float> widths, vector<float> heights){
    if(widths.size() != heights.size()){
        cout << "vector lengths are different!" << endl;
        return;
    }
    for(int i = 0; i < widths.size(); i++){
        cout << "( " << widths[i] << " , " << heights[i] << ")  p = " << getPerimeter(widths[i], heights[i])<< endl;
    }
}



int main(){
    // height
    // width
    // perimeter
    // area
    vector<float> widths;
    vector<float> heights;
    
    float w, h;
    cout << "Give me width, height, followed by -99 -99 to end" << endl;
    cin >> w;
    cin >> h;
    
    while(w != -99 && h != -99){ // fixme
        widths.push_back(w);
        heights.push_back(h);
        cin >> w;
        cin >> h;
    }
    
    printPairs(widths,heights);
    
    //cout<<"Your total is: "<< addition(a)<< endl;
    //cout<<"Your average is: "<< average(a)<< endl;
}