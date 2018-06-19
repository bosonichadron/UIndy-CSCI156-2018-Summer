#ifndef SMART_ARRAY_H
#define SMART_ARRAY_H  

/*    @file SmartArray.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Implements a class for an array with bounds checking.
      Implementatoin is below the declaration in this same file.
*/

#include <string>
#include <sstream>
#include <stdexcept>


using namespace std;

template <class T>
class SmartArray{
  public:
  
  SmartArray(); 
  SmartArray(int);  // Defines a different default value.
  SmartArray(const SmartArray &);
  ~SmartArray();
  SmartArray& operator=(const SmartArray &other);

  T& operator[](int);       // Set data in array, NO negatives

  int size() const;
  
  SmartArray operator+(const SmartArray &) const;
  bool operator==(const SmartArray &) const;
  int count(T) const;
  
  string getAsString() const;
  
  private:
  
  T* data;
  int array_size;
  T default_value;
  int current_capacity;
};

template <class T>
ostream& operator<<(ostream &o, const SmartArray<T> &r){
  o << r.getAsString();
  return o;
}



#endif