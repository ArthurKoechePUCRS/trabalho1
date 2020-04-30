#include <iostream>
#include <sstream>
#include "Empresa.hpp"




                Empresa::Empresa (string nome==' '){

                    cnpj=0;
                    inscEst='a';
                    endereco='a';
                    telefone='0';

                };
                string Empresa::obtemNome(){

                    return nome;

                };
                void Empresa::defineNome(string nome){

                    return this->nome = nome;

                };
                string Empresa::obtemCNPJ(){

                    return cnpj;
                };
                bool Empresa::defineCNPJ (string cnpj){

                    return this->cnpj = cnpj;
                };
                string Empresa::obtemInscEst(){

                    return InscEst;

                };
                
                void Empresa::defineInscEst(){};
                
                Endereco* Empresa::obtemEndereco(){
                    
                    Endereço *end = new Endereco();
                    return end;
                };
                
                void Empresa::defineEndereco(Endereco* endereco){

                    Endereço *endereco = new Endereco();
                    this->endereco = endereco;

                }
                                  
                Telefone* Empresa::obtemTelefone(){
                    
                    Telefone *tel = new Telefone();
                    return tel;
                };
                
                void Empresa::defineTelefone(Telefone* telefone){

                    Telefone *telefone = new Telefone();
                    this->telfone = telefone;
                };
                
                string Empresa::toString(){};
                
                string Empresa::toCSV(){
                 
                    stringstream buffer;
                    string temp;

                    buffer << obtemNome() << ";" ;
                    buffer << obtemCNPJ() << ";" ;
                    buffer << obtemInscEst() << ";" ;
                    buffer << obtemEnderco() << ";" ;
                    buffer << obtemTelefone() << ";" ;
                    
                    temp = buffer.str();
        
                    cout << temp; //temp ta transformado em CSV};
                bool Empresa::operator==(Empresa& empresa){};