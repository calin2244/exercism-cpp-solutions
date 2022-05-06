#include "complex_numbers.h"

namespace complex_numbers {

}  // namespace complex_numbers
#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

#include <cmath>

namespace complex_numbers {

    class Complex{
        
        private:
            float re, im;
        public:
            Complex(float a, float b){
                re = a;
                im = b;
            }
            
            float real() const{
                return this->re;
            }

            float imag() const{
                return this->im;
            }

            float abs() const{
                return sqrt(this->re * this->re + this->im * this->im);
            }

            Complex conj() const{
                return Complex(this->re, -this->im);
            }

            Complex exp() const{
                float r = std::exp(this->re) * cos(this->im);
                float imaginary = std::exp(this->re) * sin(this->im);
                return Complex(r, imaginary);
            }

            Complex operator+(const Complex &b) const{
                float r = this->re + b.re;
                float imaginary = this->im + b.im;
                return Complex(r, imaginary);
            }    

            Complex operator-(const Complex &b) const{
                float r = this->re - b.re;
                float imaginary = this->im - b.im;
                return Complex(r, imaginary);
            }

            Complex operator*(const Complex &b) const{
                float r = this->re * b.re - this->im * b.im;
                float imaginary = this->im * b.re + this->re * b.im;
                return Complex(r, imaginary);
            } 

            Complex operator/(const Complex &b) const{
                float r = (this->re * b.re + this->im * b.im) / 
                (b.re * b.re + b.im * b.im);

                float imaginary = (this->im * b.re - this->re * b.im) /
                (b.re * b.re + b.im * b.im);

                return Complex(r, imaginary);
            }
            
        };

}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
