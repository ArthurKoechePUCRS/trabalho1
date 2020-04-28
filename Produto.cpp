#include <iostream>
#include <sstream>
#include "Produto.hpp"

Produto::Produto (string cB,string d,int gOU,string m,double q,double p){

    Produto temp;

    temp.codBarras = cB;
    temp.descricao = d;
    temp.granelOuUnicade = gOU;
    temp.medida = m;
    temp.quantidade = q;
    temp.preco = p

        return temp;

}
string Produto::obtemCodBarras(){

       return codBarras;
}

void Produto::defineCodBarras(string codBarras){

        this->codBarras=codBarras;
}

string Produto::obtemDescricao(){



    
}
