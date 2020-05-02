#include <iostream>
#include <sstream>
#include "Produtos.hpp"
#include "Produto.hpp"

        Produtos::Produtos(int maxProdutos=1000){};
        Produtos::~Produtos(){};
        Produtos::Produto(string arquivoCSV){};
        int Produtos::obtemMaxProdutos(){};
        int Produtos::obtemNumProdutos(){};
        Produto* Produtos::obtemProduto(int indice){};
        bool Produtos::adiciona(Produto& produto){};
        bool Produtos::remove(int indice){};
        bool Produtos::salvaCSV(string arquivoCSV){};