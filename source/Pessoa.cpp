#include "../include/Pessoa.h"
#include <iostream>
using namespace std;
Pessoa::Pessoa ( int diaNa, int mesNa, int anoNa, char* nome )
{
    Inicializa (diaNa, mesNa, anoNa, nome);
}
Pessoa::Pessoa ()
{
    Inicializa ( 0, 0, 0, "");
}
void Pessoa::Inicializa ( int dia, int mes, int ano, char* nome)
{
    diaP = dia;
    mesP = mes;
    anoP = ano;
    strcpy(nomeP, nome);
    
}
void Pessoa::Calc_Idade ( int diaAT, int mesAT, int anoAT )
{
    idadeP = anoAT-idadeP;
    
    if(mesAT<mesP)
    {
        idadeP--;
    }
    else if(mesAT==mesP && diaAT<diaP)
    {
        idadeP--;
    }

}
int Pessoa::informaIdade()
{
    return idadeP;
}