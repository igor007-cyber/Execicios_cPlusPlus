/*

Faça um Programa que pergunte quanto você ganha por hora e o número de horas 
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, 
sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% 
para o sindicato, faça um programa que nos dê:

    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
    calcule os descontos e o salário líquido, conforme a tabela abaixo:

    + Salário Bruto : R$
    - IR (11%) : R$
    - INSS (8%) : R$
    - Sindicato ( 5%) : R$
    = Salário Liquido : R$

    Obs.: Salário Bruto - Descontos = Salário Líquido. 
*/

#include <iostream>

using namespace std;

int main()
{
    float hora_ganha, hora_mes, salario_bruto, ir, inss, sindicato, salario_liquido;

    cout << "Quanto você ganha por hora? " << endl;
    cin >> hora_ganha;

    cout << "\nQual o numero de horas trabalhadas por mes? " << endl;
    cin >> hora_mes;

    salario_bruto = hora_ganha * hora_mes;
    ir = salario_bruto * 0.11;
    inss = salario_bruto * 0.08;
    sindicato = salario_bruto * 0.05;
    salario_liquido = salario_bruto - ir - inss - sindicato;

    cout <<"Salário Bruto : R$ " << salario_bruto << endl;
    cout << "IR (11%) : R$ " << ir << endl;
    cout << "INSS (8%) : R$ " << inss << endl;
    cout << "Sindicato ( 5%) : R$ " << sindicato << endl;
    cout << "Salário Liquido : R$ " << salario_liquido << endl;

    return 0;
}
