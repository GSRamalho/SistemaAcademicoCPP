#include "../include/Pessoa.h"
Pessoa::Pessoa ( int diaNa, int mesNa, int anoNa, char* nome )
{
    Inicializa (diaNa, mesNa, anoNa, nome);
}
Pessoa::Pessoa ()
{
    Inicializa ( 0, 0, 0, "");
}
void Pessoa::Inicializa ( int diaNa, int mesNa, int anoNa, char* nome)
{
}
void Pessoa::Calc_Idade ( int diaAT, int mesAT, int anoAT )
{
}
int Pessoa::informaIdade()
{
    return idadeP;
}