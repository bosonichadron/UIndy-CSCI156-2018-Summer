/*    @file MyComplex.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Implements a class for manipulating complex numbers.
*/

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <stdexcept>
#include "MyComplex.h"

const double DELTA = 0.0001;


MyComplex::MyComplex(double real, double imaginary){
  this->real = real;
  this->imaginary = imaginary;
}
  
 // Fill me in!