#include <iostream>

/*
12) Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo
    que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
*/

using namespace std;

int main(){

 float altura;

 cout << "digite a sua altura: " << endl;
 cin >> altura;

 cout << "o peso ideal que deveria ser e: " << (72.7 * altura) - 58 << endl;

  return 0;
}
