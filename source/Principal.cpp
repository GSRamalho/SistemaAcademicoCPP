#include "../include/Principal.h"
#include <time.h>

Principal::Principal()
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);

    diaAtual = aTime->tm_mday;
    mesAtual = aTime->tm_mon + 1; 
    anoAtual = aTime->tm_year + 1900;

}

void Principal::executar()
{
    cout << "Data atual: " << diaAtual<< "/"<<mesAtual << "/" << anoAtual  << endl;
    Universidade A;
    A.setNome("UTFPR");
    cout<<A.getNome()<< endl;

    Pessoa P;
    P.Inicializa(16, 1, 2002, "Guilherme");
    P.Calc_Idade(diaAtual, mesAtual, anoAtual);
    cout <<"Idade de " << P.getNome() << ": "<<P.informaIdade() << endl;

}