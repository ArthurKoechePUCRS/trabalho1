#include <iostream>
#include <sstream>
#include "Empresa.hpp"




    Empresa::Empresa (string nome = ' '){
    };
    string Empresa::obtemNome(){

                    return nome;

                };
    void Empresa::defineNome(string nome){

                    this->nome = nome;

                };
    string Empresa::obtemCNPJ(){

                    return cnpj;
                
                };

    bool Empresa::defineCNPJ (string cnpj){

                    this->cnpj = cnpj;
                
                };

    string Empresa::obtemInscEst(){

                    return inscEst;

                };
                
    void Empresa::defineInscEst(){

                    this->inscEst = inscEst;

                };
                
    Endereco* Empresa::obtemEndereco(){
                    
                    Endereco *end = new Endereco();
                    return end;
                };
                
    void Empresa::defineEndereco(Endereco* endereco){

                    Endereco *end = new Endereco();
                    

                }
                                  
    Telefone* Empresa::obtemTelefone(){
                    
                    Telefone *tel = new Telefone();
                    return tel;
                };
                
    void Empresa::defineTelefone(Telefone* telefone){

                    Telefone *tel = new Telefone();
                    
                };
                
    string Empresa::toString(){};
                
    string Empresa::toCSV(){
                 
                    stringstream buffer;
                    string temp;

                    buffer << obtemNome() << ";" ;
                    buffer << obtemCNPJ() << ";" ;
                    buffer << obtemInscEst() << ";" ;
                    buffer << obtemEndereco() << ";" ;
                    buffer << obtemTelefone() << ";" ;
                    
                    temp = buffer.str();
        
                    cout << temp; };//temp ta transformado em CSV
    bool Empresa::operator==(Empresa& empresa){};