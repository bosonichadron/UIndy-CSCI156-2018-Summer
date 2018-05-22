#include <iostream>
#include <vector>

/*
    two vectors: one with heights, another with widths
*/

using namespace std;

class Rectangle{
    public:
    Rectangle(float w, float h){
        width = w;
        height = h;
    }
    
    float getPerimeter(){
        return width * 2 + height * 2;    
    };
    
    void print(){
        cout << "( " << width << " , " << height << ")";
    }

    float width;
    float height;
};


void printPairs(vector<Rectangle> rectangles){
    for(int i = 0; i < rectangles.size(); i++){
        rectangles[i].print();
        cout << " " << rectangles[i].getPerimeter() <<  endl;
    }
}



int main(){
    // height
    // width
    // perimeter
    // area
    vector<Rectangle> rectangles;
    
    float w, h;
    cout << "Give me width, height, followed by -99 -99 to end" << endl;
    cin >> w;
    cin >> h;
    
    while(w != -99 && h != -99){ // fixme
        rectangles.push_back( Rectangle(w,h) );
        cin >> w;
        cin >> h;
    }
    
    printPairs(rectangles);
    
    //  print out areas
    // add color attribute
    // print total area of all rectangles.
}