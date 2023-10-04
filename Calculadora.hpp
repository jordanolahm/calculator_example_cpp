#ifndef COMPLEXO_HPP
#define COMPLEXO_HPP

class Calculadora {
private:
    
    double realPart;
    double imaginaryPart;

public:
    //construtor
    Calculadora();
    //destructor
    ~Calculadora(); 

    void setReal(double theRealPart);
    
    void setImaginary(double theImaginaryPart);
    
    double getReal() const;
    
    double getImaginary() const;
    
    double absoluteValue() const;
    
    Calculadora add(const Calculadora& theComplexNumber) const;
    Calculadora subtract(const Calculadora& theComplexNumber) const;
    Calculadora multiplyBy(const Calculadora& theComplexNumber) const;
    Calculadora divideBy(const Calculadora& theComplexNumber) const;
};

#endif // COMPLEXO_HPP