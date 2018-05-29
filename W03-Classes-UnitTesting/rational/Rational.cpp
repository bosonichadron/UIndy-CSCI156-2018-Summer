/* Name: Paul Talaga
   Date: 1/30/17
   Desc: Implementation of the Rational class.
*/
// iostream is not neccassary because cout is not used.
#include <sstream>

// Be sure to include the .h file!
#include "Rational.h"

using namespace std;

Rational::Rational(){
  numerator = new int;
  *numerator = 1;
  denominator = new int;
  *denominator = 1;
}
  
Rational::Rational(int top){
  numerator = new int;
  *numerator = top;
  denominator = new int;
  *denominator = 1;
}

Rational::Rational(int top, int bottom){
  numerator = new int;
  *numerator = top;
  denominator = new int;
  *denominator = bottom;
}

Rational::Rational(const Rational &other){
  numerator = new int;
  *numerator = *other.numerator;
  denominator = new int;
  *denominator = *other.denominator;
}

Rational::~Rational(){
  delete numerator;
  numerator = NULL;
  delete denominator;
  denominator = NULL;
}
  
// Setters
void Rational::setNumerator(const int &n){
  *numerator = n;
}
  
void Rational::setDenominator(const int &n){
  *denominator = n;
}
  
// Getters
int Rational::getNumerator() const{
  return *numerator;
}
  
int Rational::getDenominator() const{
  return *denominator;
}
  
string Rational::print() const{
  stringstream s;
  s << *numerator << "/" << *denominator;
  return s.str();
}
  
// Adds to the CURRENT rational number by the whole value.
void Rational::addBy(const int &n){
  *numerator = *numerator + *denominator * n;
}
  
// Multiplies the CURRENT rational number by the whole value.
void Rational::multBy(const int &n){
  *numerator = *numerator * n;
}
  
// Returns a new Rational number, does not change either.
Rational Rational::add(const Rational &other) const{
  Rational ret;
  *ret.numerator = *numerator * *other.denominator +
    *other.numerator * *denominator;
  *ret.denominator = *denominator * *other.denominator;
  return ret;
}
  
// Returns a new Rational number, does not change either.
Rational Rational::mult(const Rational &other) const{
  return Rational(*numerator * *other.numerator,
      *denominator * *other.denominator);
}

// Returns a bool and no need to change this or other
bool Rational::isEqualTo(const Rational &other) const{
  int ltop = *numerator * *other.denominator;
  int rtop = *other.numerator * *denominator;
  return ltop == rtop;
}

bool Rational::isGreaterThan(const Rational &other) const{
  int ltop = *numerator * *other.denominator;
  int rtop = *other.numerator * *denominator;
  return ltop > rtop;
}

bool Rational::isGreaterThanOrEqualTo(const Rational &other) const{
  return isEqualTo(other) || isGreaterThan(other);
}

Rational Rational::invert() const{
  return Rational(*denominator, *numerator);
}

Rational Rational::negate() const{
  return Rational(-*numerator, *denominator);
}

Rational Rational::subtract(const Rational &other) const{
  return add(other.negate());
}

Rational Rational::divide(const Rational &other) const{
  return mult(other.invert());
}

bool Rational::isNotEqualTo(const Rational &other) const{
  return !isEqualTo(other);
}

bool Rational::isLessThan(const Rational &other) const{
  return other.isGreaterThan(*this);
}

bool Rational::isLessThanOrEqualTo(const Rational &other) const{
  return other.isGreaterThanOrEqualTo(*this);
}

Rational Rational::operator+(const Rational &o) const{
  return add(o);
}

Rational Rational::operator-(const Rational &o) const{
  return subtract(o);
}

Rational Rational::operator*(const Rational &o) const{
  return mult(o);
}

Rational Rational::operator/(const Rational &o) const{
  return divide(o);
}

bool Rational::operator==(const Rational &o) const{
  return isEqualTo(o);
}

bool Rational::operator!=(const Rational &o) const{
  return !isEqualTo(o);
}

bool Rational::operator<(const Rational &o) const{
  return isLessThan(o);
}

bool Rational::operator<=(const Rational &o) const{
  return isLessThanOrEqualTo(o);
}

bool Rational::operator>(const Rational &o) const{
  return isGreaterThan(o);
}

bool Rational::operator>=(const Rational &o) const{
  return isGreaterThanOrEqualTo(o);
}

ostream& operator<<(ostream &o, const Rational &r){
  o << r.print();
  return o;
}


