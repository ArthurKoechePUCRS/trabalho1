// Produto.hpp

#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>

    class Produto {

        private:

            string codBarras;
            string descricao;
            int granelOuUnidade;
            string medida;
            double quantidade;
            double preco;

        public:

            ~Produto();
            Produto(string cB, string d ,int gOU ,string m, double q, double p);
            string obtemCodBarras(); 
            void defineCodBarras(string codBarras)
            string obtemDescricao();
            void defineDescricao( string descricao); 
            int obtemGranalOuUnidade();
            void defineGranelOuUnidade(int granelOuUnidade);
            string obtemMedida();
            void defineQuantidade(double quantidade);
            double obtemPreco ();
            void definePreco (double preco);
            string toString();
            string toCSV();
            bool fromCSV(string linhaCSV);
            bool operator==(produto Produto&);
            bool operator<(produto Produto&);
    }       
