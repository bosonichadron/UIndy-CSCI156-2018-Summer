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

template <typename T>
class SmartArray{
  public:
  
  SmartArray();   // Default is T().
  SmartArray(T);  // Defines a different default value.
  SmartArray(const SmartArray<T> &){};  // The {}; implements this until you do below.
  ~SmartArray();
  SmartArray<T>& operator=(const SmartArray<T> &other){};

  T& operator[](int);       // Set data in array, NO negatives

  int size() const;  // Return the number of elements in the SmartArray
  
  SmartArray<T> operator+(const SmartArray<T> &) const;  // Append this to the other, return new one
  bool operator==(const SmartArray<T> &) const;  // Are they the same?
  int count(T) const{return 0;}   // How many times does this element exist?
  
  string getAsString() const;
  
  private:
  
  T* data;
  unsigned array_size;
  T default_value;
  //unsigned current_capacity;
};
/*                   Implementation       */
template <class T>
ostream& operator<<(ostream &o, const SmartArray<T> &r){
  o << r.getAsString();
  return o;
}

template <class T>
SmartArray<T>::SmartArray(){
  array_size = 0;
  data = NULL;
  default_value = T();
}

template <class T>
SmartArray<T>::~SmartArray(){
  if(data){
    delete[] data;
    data = NULL;
  }
}

template <class T>
SmartArray<T>::SmartArray(T value){
  array_size = 0;
  data = NULL;
  default_value = value;
}

template <class T>
T& SmartArray<T>::operator[](int location){
  if(location < 0){
    throw logic_error("Negative not allowed");
  }
  if(data == NULL){
    data = new T[location + 1];
    array_size = location + 1;
    for(unsigned i = 0; i < array_size; i++){
      data[i] = default_value;
    }
    return data[location];
  }else{
    if(location >= array_size){
      T* temp = new T[location + 1];
      for(unsigned i = 0; i < location + 1; i++){
        temp[i] = default_value;
      }
      for(unsigned i = 0; i < array_size; i++){
        temp[i] = data[i];
      }
      delete[] data;
      data = temp;
      array_size = location + 1;
    }
    
    return data[location];
  }
  
}

template <class T>
string SmartArray<T>::getAsString() const{
  stringstream s;
  s << "[";
  for(unsigned i = 0; i < array_size; i++){
    s << data[i];
    if(i != array_size - 1){
      s << ", ";
    }
  }
  s << "]";
  return s.str();
}

template <class T>
int SmartArray<T>::size() const{
  return array_size;
}



#endif