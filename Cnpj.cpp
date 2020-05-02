#include <iostream>
#include <sstream>
#include "Cnpj.hpp"



           Cnpj::Cnpj(){};
    bool   Cnpj::define(string cnpj){

        Cnpj temp;
        char x;

        while (1){
        cout << "Porfavor insira a raiz da sua empresa:" ;
        cin >> temp.raiz[8];
        cout << "Porfavor insira a filial da sua empresa:" ;
        cin >> temp.filial[4];
        cout << "Porfavor insira a raiz da sua empresa:" ;
        cin >> temp.dv[2];
        
        cout << "Esta correto o seu cnpj?(Y/N)";
        cin >> x; 
        if (x == 'Y') return 0 
        
        };

    
    };
    bool   Cnpj::EhValido(string cnpj){

        char verificador = "xx.xxx.xxx/xxxx-xx"

        

        if ( cnpj[2] == verificador[2] && cnpj[6] == verificador[6] && cnpj[10] == verificador[10] && cnpj[15] == verificador[15]) {cout << "O cnpj inserido esta correto!"; return 0;}
        else { cout << "O cnpj inserido esta incorreto"; return 1;}


    };
    string Cnpj::obtemRaiz(){
                return raiz;
    };
    string Cnpj::obtemFilial(){
                return filial;
    };
    string Cnpj::obtemDV(){
                return dv;
    };
    string Cnpj::toString(){
                cout << obtemRaiz() << "/" << obtemFilial() << "-" << obtemDV();
    };
    //bool   Cnpj::operator==(Cnpj& cnpj){};