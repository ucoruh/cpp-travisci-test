#include <iostream>
#include "complex.h"

// <===========================Member functions=============================================>

// Override =
Complex& Complex::operator= (Complex const& src) {
  this->_real = src._real;
  this->_img = src._img;
  return *this;
}
// Override +=
Complex& Complex::operator+= (Complex const& src) {
  this->_real += src._real;
  this->_img += src._img;
  return *this;
}
// Override -=
Complex& Complex::operator-= (Complex const& src) {
  this->_real -= src._real;
  this->_img -= src._img;
  return *this;
}
// Override /=
Complex& Complex::operator/= (Complex const& src) {
  Complex tmp;
  tmp._real = (_real*src._real+_img*src._img)/(src._img*src._img + src._real*src._real);
  tmp._img = (_img*src._real-_real*src._img)/(src._img*src._img + src._real*src._real);
  this->_real = tmp._real;
  this->_img = tmp._img;
  return *this;
}
// Override *= 
Complex& Complex::operator*= (Complex const& src) {
  Complex tmp;
  tmp._real = _real*src._real-_img*src._img;
  tmp._img = _real*src._img+src._real*_img;
  this->_real = tmp._real;
  this->_img = tmp._img;

  return *this;
}

double & Complex::real(){
  return _real;
}

double & Complex::img(){
  return _img;
}

// <=====================================Non-member functions ================================================>

// overload binary + operator 
Complex operator+(const Complex& lhs, const Complex& rhs){
  return Complex(lhs._real + rhs._real,lhs._img + rhs._img);
}

// overload unary+ operator 
Complex operator+(const Complex& src){
  return Complex(src._real,src._img);
}

// overload binary - operator 
Complex operator-(const Complex& lhs, const Complex& rhs){
  return Complex(lhs._real - rhs._real,lhs._img - rhs._img);
}

// overload unary - operator 
Complex operator-(const Complex& src){
  return Complex(-src._real,-src._img);
}

// overload * operator
Complex operator*(const Complex& lhs, const Complex& rhs){
  Complex tmp = lhs;
  tmp *=rhs;
  return tmp;
}

// overload / operator
Complex operator/(const Complex& lhs, const Complex& rhs){
  Complex tmp = lhs;
  tmp /=rhs;
  return tmp;
}

// Overloading ==
bool operator==(const Complex& lhs, const Complex& rhs){
  if(lhs._real == rhs._real && lhs._img==rhs._img){
    return true;
  }
  return false;
}

// overloading != using the == operator
bool operator!=(const Complex& lhs, const Complex& rhs){
  return !(lhs == rhs);
}

double real(const Complex& src){
  return src._real;
}

double imag(const Complex& src){
  return src._img;
}

// Uses the standard abs method which takes a long long as input
Complex abs(const Complex& src){
  return Complex(abs((long long)src._real),abs((long long)src._img));
}

// Override << operator
std::ostream& operator<<(std::ostream& ostream, const Complex& complex){
  ostream << complex._real << " + "<<complex._img << "i";
  return ostream;
}

// override >> operator, allowed forms are: real, (real), (real,img)
// Parse input as a string then performs checks to see which input form we have and sets complex values accordingly
std::istream& operator>>(std::istream& istream, Complex& complex){
  std::string s;
  istream >> s;
  if(s[0] == '('){ // check if we have () or just real
    s = s.substr(1, s.size() - 2);
    if(s.find(',') != std::string::npos){ // on the form (real,img)
      int temp = s.find(',');
      complex._real = std::stod(s.substr(0,temp));
      complex._img = std::stod(s.substr(temp+1,s.size()-1));
    } else { // on the form (real)
      complex._real = std::stod(s);
      complex._img = 0;
    }
  } else{ // on the form real
    complex._real = std::stod(s);
    complex._img = 0;
  }
  return istream;
}