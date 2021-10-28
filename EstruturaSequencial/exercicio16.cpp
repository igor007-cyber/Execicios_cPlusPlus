/*
    Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros 
    quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para 
    cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. 
    Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total. 
*/
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    
    float tamanho, calculo, latas;

    cout << "Digite o tamanho em metros quadrados da área a ser pintada: " << endl;
    cin >> tamanho;

    if (tamanho <= 54)
    {
        cout << "vai comprar uma lata e vai custar 80 reais" << endl;
    }else{
        calculo = (18*tamanho)/54;
        calculo = calculo - 18;
        latas = calculo * 80;
        cout << "voce vai comprar " << calculo << " latas, que custa " << latas << " reais" <<  endl;
    }
     
    return 0;
}
