// cnpj.hpp

#ifndef _CNPJ_HPP
#define _CNPJ_HPP
#include <string>

using namespace std;

class Cnpj {

private :

char raiz[8];
char filial[4];
char dv[2];

public:

Cnpj();
bool define(string cnpj);
bool EhValido(string cnpj);
string toString();
bool operator==(Cnpj& cnpj);

}
#endif