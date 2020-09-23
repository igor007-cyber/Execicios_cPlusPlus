/*
1) Faça um Programa que mostre a mensagem "Alo mundo" na tela.
*/

#include <iostream> //permite que o programa gere saída de dados na tela

/*
estrutura do codigo c++
*/

int main(){//abre o programa

  std::cout << "Alo mundo " << std::endl;

//o comando std::cout --> ele mostra na tela oque esta escrito
//o comando std::endl --> ele e uma quebra de linha

  return 0;
}//finaliza o programa



/*
2) Faça um Programa que peça um número e então mostre a mensagem O número
   informado foi [número].
*/

#include <iostream>

using namespace std;

int main(){

  int x;

  cout << "digite um numero: ";
  cin >> x;

  cout << "O numero que voce digitou e " << x;

  return 0;
}

/*
3) Faça um Programa que peça dois números e imprima a soma.
*/

#include <iostream>

using namespace std;

int main(){

    float x,y;

    cout << "digite um numero: ";
    cin >> x;
    cout << "digite outro numero: ";
    cin >> y;

    cout << "a soma deles dois vai dar: " << x + y;

  return 0;
}


/*
4) Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
#include <iostream>

using namespace std;

int main(){

  float nota1,nota2,nota3,nota4;

  cout << "digite a sua primeira nota: " << endl;
  cin >> nota1;
  cout << "digite a sua segunda nota: " << endl;
  cin >> nota2;
  cout << "digite a sua terceira nota: " << endl;
  cin >> nota3;
  cout << "digite a sua quarta nota: " << endl;
  cin >> nota4;

  cout << "a sua media ficou com: " << (nota1 + nota2 + nota3 + nota4)/4 << endl;


  return 0;
}

/*
5) Faça um Programa que converta metros para centímetros.
*/
#include <iostream>

using namespace std;

int main(){

  int x;

  cout << "digite um numero em metros para converter em centimetros: " << endl;
  cin >> x;

  cout << x * 100 << " cm";

  return 0;
}

/*
6) Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
*/
#include <iostream>

using namespace std;

int main(){

  float pi = 3.14;
  int x;
  float area;

  cout << "digite um numero do raio: " << endl;
  cin >> x;
  area = (x*x)*pi;

  cout << "a area do circulo e: " << area;

  return 0;
}

#include <iostream>
#include <math.h>


using namespace std;

int main(){

 float x,y,z,i;


 cout << "digite um numero x: " << endl;
 cin >> x;
 cout << "digite outro numero y: " << endl;
 cin >> y;
 cout << "digite outro numero z: " << endl;
 cin >> z;
 cout << "digite um numero i para elevar o numero x: " << endl;
 cin >> i;

 x = pow(x,i); // elevar algum numero
 y = sqrt(y); // raiz quadrada
 z = cbrt(z); // raiz cubica

 cout << "o x elevado ao numero i e: " << x << endl;
 cout << "a raiz de y e: " << y << endl;
 cout << "a raiz cubica de z e: " << z << endl;


  return 0;
}
