// Produtos.hpp

#ifndef _PRODUTOS_HPP
#define _PRODUTOS_HPP
#include <string>
#include "Produto.hpp"
using namespace std;

    class Produtos {

        private:
        
        Produto* produtos;
        int maxProdutos;
        int numProdutos;

        public:

        Produtos(int maxProdutos=1000);
        ~Produtos();
        Produto(string arquivoCSV);
        int obtemMaxProdutos();
        int obtemNumProdutos();
        Produto* obtemProduto(int indice);
        bool adiciona(Produto& produto);
        bool remove(int indice);
        bool salvaCSV(string arquivoCSV);



    }
