#include "Calculadora.hpp"
#include <cmath>

//constructor with Serial inicialization list
Calculadora::Calculadora() : realPart{0}, imaginaryPart{0} {}

//Destructor
Calculadora::~Calculadora() {}

//setValue realPart of Complex Number
void Calculadora::setReal(double theRealPart) {
    realPart = theRealPart;
}

//setValue ImaginaryPart of Complex Number
void Calculadora::setImaginary(double theImaginaryPart) {
    imaginaryPart = theImaginaryPart;
}

double Calculadora::getReal() const {
    return realPart;
}

double Calculadora::getImaginary() const {
    return imaginaryPart;
}

double Calculadora::absoluteValue() const {
    return sqrt(realPart * realPart + imaginaryPart * imaginaryPart);
}

Calculadora Calculadora::add(const Calculadora& theComplexNumber) const {
    Calculadora result;
    result.setReal(realPart + theComplexNumber.getReal());
    result.setImaginary(imaginaryPart + theComplexNumber.getImaginary());
    return result;
}

Calculadora Calculadora::subtract(const Calculadora& theComplexNumber) const {
    Calculadora result;
    result.setReal(realPart - theComplexNumber.getReal());
    result.setImaginary(imaginaryPart - theComplexNumber.getImaginary());
    return result;
}

Calculadora Calculadora::multiplyBy(const Calculadora& theComplexNumber) const {
    Calculadora result;
    result.setReal(realPart * theComplexNumber.getReal() - imaginaryPart * theComplexNumber.getImaginary());
    result.setImaginary(realPart * theComplexNumber.getImaginary() + imaginaryPart * theComplexNumber.getReal());
    return result;
}

Calculadora Calculadora::divideBy(const Calculadora& theComplexNumber) const {
    if (theComplexNumber.getReal() == 0 && theComplexNumber.getImaginary() == 0) {
        // Divisão por zero não é definida, você pode lidar com isso de acordo com sua lógica.
        // Aqui, vamos apenas retornar um número complexo padrão.
        return Calculadora();
    }

    Calculadora result;
    double denominator = theComplexNumber.getReal() * theComplexNumber.getReal() + theComplexNumber.getImaginary() * theComplexNumber.getImaginary();
    result.setReal((realPart * theComplexNumber.getReal() + imaginaryPart * theComplexNumber.getImaginary()) / denominator);
    result.setImaginary((imaginaryPart * theComplexNumber.getReal() - realPart * theComplexNumber.getImaginary()) / denominator);
    return result;
}