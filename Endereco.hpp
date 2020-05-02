// Endereco.hpp

#ifndef _ENDERECO_HPP
#define _ENDERECO_HPP
#include <string>

using namespace std;

        class Endereco {


            private:

            string logradouro;
            string numero;
            string complemento;
            string bairro;
            string cidade;
            string uf;
            string cep;

            public:

            Endereco();
            string obtemLogradouro();
            string obtemNumero();
            void defineNumero(string numero);
            string obtemComplemento();
            void defineComplemento(string complemento);
            string obtemBairro();
            void defineBairro(string bairro);
            string obtemCidade();
            void defineCidade(string cidade);
            string obtemUF();
            void defineUF(string uf);
            string obtemCEP();
            void defineCEP(string cep);
            string toString(int linha);
            string toCSV();
            bool operator==(Endereco& endereco);



};
#endif
