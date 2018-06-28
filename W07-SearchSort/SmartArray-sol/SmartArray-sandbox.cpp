/* Name: < Fill Me In >
   Date: < Fill Me In >
   Desc: < Fill Me In >
*/
#include <iostream>
#include "SmartArray.h"

int main(){
  // Example usage of the SmartArray class
  SmartArray<int> a(0,10,1);
  cout << a.size() << " == 10" << endl;
  cout << a << " == [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]" << endl;
  
  SmartArray<int> b(0,10,2);
  cout << b.size() << " == 5" << endl;
  cout << b << " == [0, 2, 4, 6, 8]" << endl;
  
  SmartArray<int> c = a + 3;
  cout << c.size() << " == 10" << endl;
  cout << c << " == [3, 4, 5, 6, 7, 8, 9, 10, 11, 12]" << endl;
  
  SmartArray<int> d = b * 3;
  cout << d.size() << " == 15" << endl;
  cout << d << " == [0, 2, 4, 6, 8, 0, 2, 4, 6, 8, 0, 2, 4, 6, 8]" << endl;

}