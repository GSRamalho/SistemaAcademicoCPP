#include "../include/Professor.h"
#include <iostream>
using namespace std;

void Professor::setUni(Universidade* u)
{
    uniFiliado = u;
}
void Professor::setDpto(Departamento* dpto)
{
    dptoAssociado = dpto;
}
void Professor::informaDpto()
{
    cout<< dptoAssociado->getNomeDpto() << endl;;
}
void Professor::informaUni()
{
    cout << uniFiliado->getNome() << endl;
    
}