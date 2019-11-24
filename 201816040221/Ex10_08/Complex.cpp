#include <iostream>
#include "Complex.h"
using namespace std;
Complex::Complex(double realpart,double imaginarypart)
:real(realpart),
 imaginary(imaginarypart)
{

}
Complex Complex::operator+(const Complex &operand2)const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2)const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
Complex Complex::operator*(const Complex &operand2)const
{
    return Complex((real*operand2.real-imaginary*operand2.imaginary),(imaginary*operand2.real+real*operand2.imaginary));
}
bool Complex::operator==(const Complex &operand2)const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
        return true;
        return false;
}

istream &operator>>( istream &input,Complex &right)
{
    input>>right.real>>right.imaginary;
    return input;
}
ostream &operator<<(ostream &output,const Complex &right)
{
    output<<'('<<right.real<<","<<right.imaginary<<')';
    return output;
}
