/* Name: < Fill me in>
   Date: < Fill me in>
   Desc: Implementation of a Rational number class.
*/
// iostream is not neccassary because cout is not used.
#include <sstream>
#include <string>
#include <stdexcept>

// Be sure to include the .h file!
#include "Rational.h"

using namespace std;

Rational::Rational(){
  numerator = 1;
  denominator = 1;
}
  
Rational::Rational(int top){
  numerator = top;
  denominator = 1;
}

Rational::Rational(int top, int bottom){
  numerator = top;
  denominator = bottom;
}
  
// Setters
void Rational::setNumerator(const int &n){
  // Fill me in
}
  
void Rational::setDenominator(const int &n){
  // Fill me in
}
  
// Getters
int Rational::getNumerator() const{
  // Fill me in
  return 0;
}
  
int Rational::getDenominator() const{
  // Fill me in
  return 0;
}
  
string Rational::print() const{
  stringstream s;
  s << numerator << "/" << denominator;
  return s.str();
}
  
  
// Returns a new Rational number, does not change either.
Rational Rational::operator+(const Rational &other) const{
  // Fix order of commented lines below
  Rational ret;
  /* other.numerator * denominator;
  ret.denominator = denominator * other.denominator;
  ret.numerator = numerator * other.denominator +
  */
  return ret;
}
  
// Returns a new Rational number, does not change either.
Rational Rational::operator*(const Rational &other) const{
  // Fill me in
  return Rational();
}

// Returns a bool and no need to change this or other
bool Rational::isEqualTo(const Rational &other) const{
  // Fill me in
  return true;
}

bool Rational::isGreaterThan(const Rational &other) const{
  // Fill me in
  return true;
}

bool Rational::isGreaterThanOrEqualTo(const Rational &other) const{
  // Fill me in
  return true;
}

Rational Rational::invert() const{
  // Fill me in
  return Rational();
}

Rational Rational::negate() const{
  // Fill me in
  return Rational();
}


bool Rational::isNotEqualTo(const Rational &other) const{
  // Fill me in
  return true;
}

bool Rational::isLessThan(const Rational &other) const{
  // Fill me in
  return true;
}

bool Rational::isLessThanOrEqualTo(const Rational &other) const{
  // Fill me in
  return true;
}



