//Endereco.cpp

#include <iostream>
#include <sstream>
#include "Endereco.hpp"


            Endereco::Endereco(){};
            string Endereco::obtemLogradouro(){
            
                return logradouro;
            
            };
            void Endereco::defineLoutradouro(string logradouro){
                
                this->logradouro=logradouro;
                
                };
            string Endereco::obtemNumero(){
            
                return numero;
            
            };
            void Endereco::defineNumero(string numero){

                this->numero=numero;

            };
            string Endereco::obtemComplemento(){
            
                return complemento;
            
            };
            void Endereco::defineComplemento(string complemento){

                this->complemento=complemento;

            };
            string Endereco::obtemBairro(){
                
                return bairro;
            
            };
            void Endereco::defineBairro(string bairro){

                this->bairro=bairro;

            };
            string Endereco::obtemCidade(){
                
                return cidade;
            
            };
            void Endereco::defineCidade(string cidade){

                this->cidade=cidade;

            };
            string Endereco::obtemUF(){
            
                return uf;
            
            };
            void Endereco::defineUF(string uf){

                this->uf=uf;

            };
            string Endereco::obtemCEP(){
                
                return cep;
            
            };
            void Endereco::defineCEP(string cep){

                this->cep=cep;

            };
            string Endereco::toString(int linha){};
            string Endereco::toCSV(){};
            bool Endereco::operator==(Endereco& endereco){};
