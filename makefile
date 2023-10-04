parametrosCompilacao=-Wall #-Wshadow
nomePrograma=aula

all: $(nomePrograma)

$(nomePrograma): main.o Calculadora.o 
	g++ -o $(nomePrograma) main.o Calculadora.o  $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Calculadora.o: Calculadora.hpp Calculadora.cpp
	g++ -c Calculadora.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
