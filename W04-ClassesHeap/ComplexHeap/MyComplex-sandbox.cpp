/*    @file sandbox.cpp    
      @author <fill me in>
      @date <fill me in>  

			@description Sandbox for MyComplex
*/

#include <iostream>


#include "MyComplex.h"

using namespace std;

void doStuff(MyComplex thing){ // Will call copy constructor
//void doStuff(const MyComplex &thing){ // Will NOT call copy constructor
  cout << thing.getAsString();
}

int main(int argc, char* argv[]){
  // Use this program to test your MyComplex implementation!
 
  
  MyComplex a(5,6);
  MyComplex b(10,5);
  // MyComplex b = a;  // This looks like assignment, but it optimizes to a copy constructor.
                      // Rather than a default constructor, followed by assignment, it just
                      // does the copy constructor.
  b = a;              // Assignment operator.  (No new memory needed)
  doStuff(a);
  /*cout << "a: " << a.getAsString() << endl;
  MyComplex b(8,-2);
  cout << "b: " << b.getAsString() << endl;
  
  cout << "a + b: " << (a + b).getAsString() << endl;
  cout << "a - b: " << (a - b).getAsString() << endl;
  cout << "a * b: " << (a * b).getAsString() << endl;
  cout << "a / b: " << (a / b).getAsString() << endl;
  
  cout << "Distance squared: " << a.dist2(b) << endl;
  cout << "a's magnitude squared: " << a.mag2() << endl;
  
  cout << "a == b? " << (a == b) << endl;
  
  cout << "a real: " << a.getReal() << endl;
  cout << "a imag: " << a.getImaginary() << endl;
  
  a.setReal(10);
  a.setImaginary(99);
  
  cout << "changed a: " << a.getAsString() << endl;
  
  */
  // Make this interactive.
  /*
  float ar,ai,br,bi;
  do{
    cout << "Give me 2 complex numbers:" << endl;
    cin >> ar;
    cin >> ai;
    cin >> br;
    cin >> bi;
    try{
      MyComplex first(ar,ai);
      MyComplex second(br,bi);
      cout << first.getAsString() << " / " << second.getAsString() << " = ";
      cout << (first / second).getAsString() << endl;
    }catch(exception &e){
      cout << "That was a bad thing" << endl;
    }
  }while(true);
  */
  
	
	return 0;
}