/*    @file SmartArray.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Implements a class for an array with bounds checking.
      Implementatoin is below the declaration in this same file.
*/

#include "SmartArray.h"
#include <string>
#include <sstream>
#include <stdexcept>



template <class T>
SmartArray<T>::SmartArray(int value){
  array_size = 0;
  data = NULL;
  default_value = value;
}