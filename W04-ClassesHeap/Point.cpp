/* Name: Paul Talaga
   Date: 2/20/17
   Desc: Implementation of a class to store a 2d point.
         This version stores x and y on the heap and uses a destructor,
         copy-constructor, and overloaded assignment operator.
*/

#include <sstream>
#include <string>
#include <iostream>
#include <ostream>

#include "Point.h"


Point::Point(){ // Default constructor
  cout << "Default constructor" << endl;
  x = new int;
  *x = 0;
  y = new int;
  *y = 0;
}

Point::Point(int a, int b){ // Overloaded constructor
  x = new int;
  *x = a;
  y = new int;
  *y = b;
}

Point::Point(const Point &other){ // Copy constructor
  cout << "Copy constructor was called with value: " << other.print() << endl;
  x = new int;
  *x = *other.x;
  y = new int;
  *y = *other.y;
} 


// This class destructor will be called when an instance goes out of scope
// or it is explicitly deleted using delete.  Clean up memory!
Point::~Point(){
  cout << "Destructor called on " << print() << " " << x << ":" << y << endl;
  delete x;
  x = NULL;
  delete y;
  y = NULL;
} 
 
 void Point::operator=(const Point &other){
   // EASY plan A - This works in this simple class, but won't in more complex
   //               ones.
   //*x = *other.x;
   //*y = *other.y;
   
   // Harder plan B - Destroy the current object (just like the destructor)
   //                 than ask for memory and copy in the data in other, 
   //                 just like the copy constructor.
   cout << "Assignment called" << endl;
   //other.x = new int;  // Can't do this as other is read-only from const
   if(this ==  &other){
     cout << "Don't copy yourself!" << endl;
     return;
   }
   delete x;
   x = NULL;
   delete y;
   y = NULL;
   
   x = new int;
   *x = *other.x;
   y = new int;
   *y = *other.y;
 }

Point Point::operator+(const Point &rhs) const{
  return Point( *x + *rhs.x , *y + *rhs.y );
}

// Just a demo how how this can be used to access the instance's x variable
// in the private section, along with a local x variable. 
void Point::setX(int x){
  *(this->x) = x;
}

void Point::setY(int a){
  *y = a;
}
  
int Point::getX() const{
  return *x;
};

int Point::getY() const{
  return *y;
}
  
string Point::print() const{
  stringstream s;
  s << "(" << *x << "," << *y << ")";
  return s.str();
};
  
// Note this is NOT a member of the class, so only public functions of Point
// can be called.
ostream& operator<<(ostream &o, const Point &p){
  o << p.print();
  return o;
}
  


