#include <iostream>
#include <sstream>
#include "Telefone.hpp"

        Telefone::Telefone(){};
        int Telefone::obtemDDI(){
            return ddi;
        };
        void Telefone::defineDDI(int ddi){
            this->ddi=ddi;
        };
        int Telefone::obtemDDD(){
            return ddd;
        };
        void Telefone::defineDDD(int ddd){
            this->ddd=ddd;
        };
        long Telefone::obtemNumero(){
            return numero;
        };
        void Telefone::defineNumero(long numero){
            this->numero=numero;
        };
        void Telefone::define(int ddi,int ddd,long numero){
            /*Telefone temp;

        int ddi = temp.ddi ;
        int ddd = temp.ddd ;
        int num = temp.numero ;

            cout << "Porfavor coloque o ddi:"  ;
            cin >> ddi << cout << endl;
            cout << "Porfavor coloque o ddd:" ;
            cin >> ddd << cout << endl;
            cout << "Porfavor coloque o numero:" ;
            cin >> numero << cout << endl;        
        
        defineDDI(ddi);
        defineDDD(ddd);
        defineNumero(numero);
        */};
        string Telefone::toString(){};
        string Telefone::toCSV(){
        stringstream buffer;
        string temp;

        buffer << obtemDDI() << ";" ;
        buffer << obtemDDD() << ";" ;
        buffer << obtemNumero() ;  
        
        temp = buffer.str();
        
        cout << temp; 

        };
        bool Telefone::operator==(Telefone& telefone){};