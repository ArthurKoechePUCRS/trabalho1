// Telefone.hpp

#ifndef _TELEFONE_HPP
#define _TELEFONE_HPP

using namespace std;

    class Telefone{

        private:

            int ddi;
            int ddd;
            long numero;
        
        public:

            Telefone();
            int obtemDDI();
            void defineDDI(int ddi);
            int obtemDDD();
            void defineDDD(int ddd);
            long obtemNumero();
            void defineNumero(long numero);
            void define(int ddi;int ddd;long numero);
            string toString();
            string toCSV();
            bool operator==(Telefone& telefone);


    }
    #endif