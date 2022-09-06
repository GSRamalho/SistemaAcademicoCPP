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
    Universidade A;
    A.setNome("UTFPR");
    cout<<A.getNome()<< endl;

}