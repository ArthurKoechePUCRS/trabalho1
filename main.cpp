// main.cpp
#include <string>
#include <iostream>
#include "Produto.hpp" 


int main() {

char obs;
Produto temp;

//temp.defineCodBarras("123412312");
//temp.defineDescricao("Batata Doce"); 
//temp.defineGranelOuUnidade(1);
//temp.defineMedida("kg");
//temp.defineQuantidade(1);
//temp.definePreco (0.32);


temp.fromCSV("123412312;Batata Doce;1;1 kg;1;0.32");
//temp.toString();
temp.toCSV();




cout << "Seja Bem Vindo ao Registro do Mercado" << endl;

cout << "Deseja ver o relatorio do mercado? (1)" << endl;
cout << "Deseja editar algum produto do relatorio? (2)" << endl;
cout << "Deseja adcionar algum produto ao mercado? (3)" << endl;
cout << "Deseja remover algum produto do mercado? (4)" << endl;
cout << "Deseja editar os dados do mercado? (5)" ;
cin >> obs;

switch (obs)
{
case 1:
    cout << "CÓD.DE BARRAS DESCRIÇÃO UN./GR. MEDIDA EMBAL. PREÇO VALOR/MEDIDA   " << endl;
    cout << "===================================================================" << endl;
    
    break;
case 2:
    //Edita produto;
    break;
case 3:
    //Adciona produto;
    break;
case 4:
    //Remove produto
    break;
case 5:
    //Edita dados do mercado;
    break;

}


















return 0;
}

