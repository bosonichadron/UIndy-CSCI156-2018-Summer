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
  cout << "Constructor called with Overloaded with " << real << " - " << imaginary << endl;
  this->real = new double;
  *(this->real) = real;
  this->imaginary = new double;
  *(this->imaginary) = imaginary;
}

MyComplex::MyComplex(){
  cout << "Default constructor" << endl;
  this->real = new double;
  *(this->real) = 0.0;
  this->imaginary = new double;
  *(this->imaginary) = 0.0;
}

MyComplex& MyComplex::operator=(const MyComplex &other){
  //cout << "weird operator = called!" << endl;
  *(this->real) = *(other.real);
  *(this->imaginary) = *(other.imaginary);
  return *this;
} 

MyComplex::MyComplex(const MyComplex &other){
  cout << "copy constructor" << endl;
  this->real = new double;
  *(this->real) = *(other.real);
  this->imaginary = new double;
  *(this->imaginary) = *(other.imaginary);
}

MyComplex::~MyComplex(){
  cout << "Destructor called on ." << getAsString() << endl;
  //cout << this->real << " - ";
  delete this->real;
  this->real = NULL;
  //cout << this->real << " is " << endl;
  
  delete this->imaginary;
  this->imaginary = NULL;
}
  
  //Setters
void MyComplex::setReal(double n){
      *real = n;
  }
void MyComplex::setImaginary(double n){
      *imaginary = n;
  }
  //Getters
    double MyComplex::getReal()const{
      return *real;
  }
    double MyComplex::getImaginary()const{
      return *imaginary;
  }
  
  //Operators
  MyComplex MyComplex:: operator+(const MyComplex &other) const{
      MyComplex ret;
      *ret.real = *real + *other.real;
      *ret.imaginary = *imaginary + *other.imaginary;
      return ret;
      
  }
  MyComplex MyComplex:: operator-(const MyComplex &other) const{
      //MyComplex ret(real - other.real, imaginary - other.imaginary);
      //return ret;
      
      MyComplex ret;//(0,0);
      *ret.real = *real - *other.real;
      *ret.imaginary = *imaginary - *other.imaginary;
      return ret;
      
      //return MyComplex(real - other.real, imaginary - other.imaginary);
      
  }
  MyComplex MyComplex:: operator*(const MyComplex &other) const{
      return MyComplex(*real * *other.real - *imaginary * *other.imaginary,
          *real * *other.imaginary + *other.real * *imaginary);
        //a+bi
  }
   MyComplex MyComplex:: operator/(const MyComplex &n) const{
      double denom = *n.real * *n.real + *n.imaginary * *n.imaginary;
      
      //return MyComplex(real/other.real-imaginary*other.imaginary,realother.imaginary
      //  +other.real*imaginary);
      return MyComplex((*real * *n.real + *imaginary * *n.imaginary)/denom,
        (*imaginary * *n.real - *real * *n.imaginary)/denom);
  }
  string MyComplex::getAsString() const{
    stringstream ret;
    ret<<"("<< *real << " + " << *imaginary <<"i)";
    return ret.str();
  }
  
  double MyComplex::dist2(const MyComplex &other) const{
    return (*real - *other.real)*(*real - *other.real)+(*imaginary - *other.imaginary)*(*imaginary - *other.imaginary);
  }
  double MyComplex::mag2() const{
    return dist2(MyComplex(0,0));
  }
  
  bool MyComplex::operator==(const MyComplex &other) const{
    return abs(*real - *other.real) < DELTA && abs(*imaginary - *other.imaginary) < DELTA;
  }
 // Fill me in!