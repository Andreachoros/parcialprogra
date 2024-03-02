#include <iostream>
using namespace std;
    int main() {

        int numBr = 0;
        int a = 0;
        int b = 0;

        while (numBr <= 50) {
            if (numBr % 2 == 0) {

                b += numBr;
            } else {

                a += numBr;
            }
            numBr++;
        }

        std::cout << "Dada suma de los numeros impares nos dio: " << a << std::endl;
        std::cout << "Dada suma de los numeros pares nos dio: " << b << std::endl;

        return 0;
    }