// Empresa.hpp

#ifndef _EMPRESA_HPP
#define _EMPRESA_HPP
#include <cnpj.hpp>
#include <string>

using namespace std;

    class Empresa{

        private: 

                string nome;
                cnpj cnpj;
                string inscEst;
                *Endereco endereco;
                *Telefone telefone;

        public :

                Empresa (string nome==' ');
                string obtemNome();
                void defineNome(string nome);
                string obtemCNPJ();
                bool defineCNPJ (string cnpj);
                string obtemInscEst();
                void defineInscEst();
                Endereco* obtemEndereco();
                void defineEndereco(Endereco* endereco);
                Telefone* obtemTelefone();
                void defineTelefone(Telefone* telefone);
                string toString();
                string toCSV();
                bool operator==(Empresa& empresa);


    }
