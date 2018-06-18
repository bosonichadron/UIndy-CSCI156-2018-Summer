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
#include "BigInt.h"

BigInt::BigInt(){
  setValue(1);
}

BigInt::BigInt(unsigned number){
  setValue(number);
}


BigInt BigInt::operator+(BigInt other) const{
  BigInt current = *this;
  vector<unsigned short> ret;
  while(other.digits.size() < current.digits.size()){
    other.digits.push_back(0);
  }
  while(other.digits.size() > current.digits.size()){
    current.digits.push_back(0);
  }
  
  unsigned carry = 0;
  for(unsigned i = 0; i < other.digits.size(); i++){
    int value = other.digits.at(i) + current.digits.at(i) + carry;
    ret.push_back( value % 10);
    carry = value / 10;
  }
  if(carry != 0){
    ret.push_back(carry);
  }
  BigInt r;
  r.digits = ret;
  return r;
}

  
bool BigInt::operator==(const BigInt &other) const{
  if(digits.size() >= other.digits.size()){
    for(unsigned i = 0; i < other.digits.size(); i++){
     if( digits[i] != other.digits[i]){
        return false;
      }
    }
  }else if(digits.size() < other.digits.size()){
   for(unsigned i = 0; i < digits.size(); i++){
     if( digits[i] != other.digits[i]){
        return false;
      }
    }
  }
  return true;
}


ostream& operator<<(ostream &o, const BigInt &r){
  o << r.getAsString();
  return o;
}


string BigInt::getAsString() const{
    if(digits.size() == 0){
      return "0";
    }
    stringstream ret;
    for(unsigned i = digits.size(); i > 0;i--){
      ret << digits[i-1];
      if(i % 3 == 1 && i != 1){
        ret << ",";
      }
    }
    
    return ret.str();
  }
  
void BigInt::setValue(unsigned number){
  digits.clear();
  while( number > 0){
    digits.push_back( number % 10);
    number = number / 10;
  }
}

// We assume the sizes may be different and don't start with 0s
bool BigInt::operator<(const BigInt &other) const{
  if( digits.size() > other.digits.size()) return false;
  if( digits.size() < other.digits.size()) return true;
  for(unsigned i = digits.size(); i > 0; i--){
    if(digits[i-1] > other.digits[i-1])return false;
    if(digits[i-1] < other.digits[i-1])return true;
  }
  return false;
}

// We assume the sizes may be different and don't start with 0s
bool BigInt::operator>(const BigInt &other) const{
  if( digits.size() > other.digits.size()) return true;
  if( digits.size() < other.digits.size()) return false;
  for(unsigned i = digits.size(); i > 0; i--){
    if(digits[i-1] > other.digits[i-1])return true;
    if(digits[i-1] < other.digits[i-1])return false;
  }
  return false;
}
  

