/*
    Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em 
    metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 
    1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, 
    que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.

    Informe ao usuário as quantidades de tinta a serem compradas e os respectivos
    preços em 3 situações:
    
    comprar apenas latas de 18 litros;
    comprar apenas galões de 3,6 litros;
    misturar latas e galões, de forma que o desperdício de tinta seja menor. 
    Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, 
    considere latas cheias. 
*/

#include <iostream>

using namespace std;

int main()
{
    double tinta;
    double qtdLata;
    double qtdGalao;
  
    cout << "Qual o tamanho em metros quadrados da área a ser pintada: " << endl;
    cin >> tinta;

    // Só em lata
    cout << "\n";

    if (tinta <= 54)
    {
        float litro;
        litro = (18 * tinta)/54;

        cout << "Com apenas latas, voce precisa de " << litro << "L, e de uma lata de tinta" << endl;
    
    }else{

        float litro;
        litro = (18 * tinta)/54;
        qtdLata = litro / 18;
        cout << qtdLata << endl;
        cout << "Com apenas latas, voce precisa de " << litro << "L" << endl;
        cout << "com isso voce precisa de " << qtdLata << " latas" << endl;

    }

    //só Galão
    cout << "\n";

    if(tinta <= 18.6){
        float litro;
        litro = (3.6 * tinta)/18.6;

        cout << "Com apenas galões, voce precisa de " << litro << "L, e de uma galão de tinta" << endl;
    }else{

        float litro;
        litro = (3.6 * tinta)/18.6;
        qtdGalao = litro / 3.6;
        cout << "Com apenas galões, voce precisa de " << litro << "L" << endl;
        cout << "com isso voce precisa de " << qtdGalao << " galoes" << endl;

    }


    
  
    return 0;
}
