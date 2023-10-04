#include <iostream>
#include "Calculadora.hpp"

int main() {
    Calculadora numero1, numero2;
    
    numero1.setReal(3);
    numero1.setImaginary(4);
    
    numero2.setReal(1);
    numero2.setImaginary(2);

    Calculadora resultadoSoma = numero1.add(numero2);
    Calculadora resultadoSubtracao = numero1.subtract(numero2);
    Calculadora resultadoMultiplicacao = numero1.multiplyBy(numero2);
    Calculadora resultadoDivisao = numero1.divideBy(numero2);

    std::cout << "Soma: " << resultadoSoma.getReal() << " + " << resultadoSoma.getImaginary() << "i\n";
    std::cout << "Subtração: " << resultadoSubtracao.getReal() << " + " << resultadoSubtracao.getImaginary() << "i\n";
    std::cout << "Multiplicação: " << resultadoMultiplicacao.getReal() << " + " << resultadoMultiplicacao.getImaginary() << "i\n";
    std::cout << "Divisão: " << resultadoDivisao.getReal() << " + " << resultadoDivisao.getImaginary() << "i\n";

    return 0;
}




