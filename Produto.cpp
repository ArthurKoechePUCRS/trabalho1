#include <iostream>
#include <sstream>
#include "Produto.hpp"


//TAREFA=
//
//      Fazer o toCSV,fromCSV,operator==,operator<
//


Produto::Produto(){};


Produto::Produto (string cB=0,string d=0,int gOU=0,string m=0,double q=0,double p=0){

        
        codBarras = cB;
        descricao = d;
        granelOuUnidade = gOU;
        medida = m;
        quantidade = q;
        preco = p;

      
};
string Produto::obtemCodBarras(){

       return codBarras;
};

void Produto::defineCodBarras(string codBarras){

        this->codBarras=codBarras;
};

string Produto::obtemDescricao(){

        return descricao;
    
};

void Produto::defineDescricao( string descricao){

        this->descricao=descricao;
        
} ;
int Produto::obtemGranalOuUnidade(){

        return granelOuUnidade;

};
void Produto::defineGranelOuUnidade(int granelOuUnidade){

        this->granelOuUnidade = granelOuUnidade;

};
string Produto::obtemMedida(){

        return medida;
        
};
void Produto::defineMedida(string medida){

        this->medida = medida;

};
double Produto::obtemQuantidade(){

        return quantidade;

};
void Produto::defineQuantidade(double quantidade){

        this->quantidade = quantidade;
        
};
double Produto::obtemPreco (){

        return preco;
};
void Produto::definePreco (double preco){

        this->preco = preco;

};
string Produto::toString(){

        stringstream buffer;
        string temp;

        buffer << obtemCodBarras() << ";" ;
        buffer << obtemDescricao() << ";" ;
        buffer << obtemGranalOuUnidade() << ";" ;
        buffer << obtemMedida() << ";" ;
        buffer << obtemQuantidade() << ";" ;
        buffer << obtemPreco() << ";" << endl;

        temp = buffer.str();

        cout << endl << "Saida:   " << temp << endl;
};
//string toCSV(){}
//bool fromCSV(string linhaCSV){}
//bool operator==(produto Produto&){}
//bool operator<(produto Produto&){}
