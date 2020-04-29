// main.cpp
#include <string>
#include <iostream>
#include "Produto.hpp" 


int main() {

Produto temp;

temp.defineCodBarras("123412312");
temp.defineDescricao("Batata Doce"); 
temp.defineGranelOuUnidade(1);
temp.defineMedida("1 kg");
temp.defineQuantidade(1);
temp.definePreco (0.32);

temp.toString() ;

return 0;
}
