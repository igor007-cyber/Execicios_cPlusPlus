#include <iostream>

/*
9) Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e
   mostre a temperatura em graus Celsius.

    C = 5 * ((F-32) / 9).
*/

using namespace std;

int main(){

    float f, c;


    cout << "digite a temperatura em graus Fahrenheit: " << endl;
    cin >> f;

    c = 5 * ((f-32) / 9);

    cout << "A transformaçao da temperatura de Fahrenheit pra Celsius e " <<  c;

  return 0;
}
