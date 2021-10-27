/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que 
  calcule seu peso ideal, utilizando as seguintes fórmulas:

    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7 
 */   
#include <iostream>

using namespace std;

int main()
{
    double h, peso_ideal_H, peso_ideal_M; 

    cout << "Digite a sua altura:" << endl;
    cin >> h;     

    peso_ideal_H = (72.7*h) - 58;
    peso_ideal_M = (62.1*h) - 44.7;

    cout << "O peso ideal para homens: " << peso_ideal_H << endl;
    cout << "O peso ideal para mulheres: " << peso_ideal_M << endl;

    return 0;
}
