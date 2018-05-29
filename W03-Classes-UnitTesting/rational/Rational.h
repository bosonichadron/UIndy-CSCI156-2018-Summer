#ifndef RATIONAL_H
#define RATIONAL_H
/* Name: Paul Talaga
   Date: 1/30/17
   Desc: Definition of a class
         to store and manipulate rational (fractions, int/int)
         numbers.
*/

using namespace std;

class Rational{
  private:
  int* numerator;
  int* denominator;
  
  public:
  Rational();
  Rational(int top); // Lab 5 constructor
  Rational(int top, int bottom);
  // Lab 6 functions to support heap memory
  Rational(const Rational &); // Copy constructor
  ~Rational();  // Destructor
  
  // Setters
  void setNumerator(const int &n);
  void setDenominator(const int &n);
  
  // Getters
  int getNumerator() const;
  int getDenominator() const;
  
  string print() const;
  
  // Adds to the CURRENT rational number by the whole value.
  void addBy(const int &n);
  
  // Multiplies the CURRENT rational number by the whole value.
  void multBy(const int &n);
  
  // Returns a new Rational number, does not change either.
  Rational add(const Rational &other) const;
  
  // Returns a new Rational number, does not change either.
  Rational mult(const Rational &other) const;
  
  // Lab 5 functions
  // Since all functions don't need to change values, these can all be
  // const.  Make sure they are const in your cpp!
  bool isEqualTo(const Rational &other) const;
  bool isGreaterThan(const Rational &other) const;
  bool isGreaterThanOrEqualTo(const Rational &other) const;
  
  // HW 4 functions
  Rational invert() const;
  Rational negate() const;
  Rational subtract(const Rational &) const;
  Rational divide(const Rational &) const;
  bool isNotEqualTo(const Rational &) const;
  bool isLessThan(const Rational &) const;
  bool isLessThanOrEqualTo(const Rational &) const;
  
  // Lab 6 functions
  Rational operator+(const Rational &) const;
  Rational operator-(const Rational &) const;
  Rational operator*(const Rational &) const;
  Rational operator/(const Rational &) const;
  bool operator==(const Rational &) const;
  bool operator!=(const Rational &) const;
  bool operator<(const Rational &) const;
  bool operator<=(const Rational &) const;
  bool operator>(const Rational &) const;
  bool operator>=(const Rational &) const;

};

ostream& operator<<(ostream &, const Rational &);

#endif
