#include "Principal.h"
#include <time.h>

Principal::Principal()
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);

    int diaAtual = aTime->tm_mday;
    int mesAtual = aTime->tm_mon + 1; 
    int anoAtual = aTime->tm_year + 1900;

    cout << diaAtual << "/"<< mesAtual<< "/" << anoAtual << endl;
}

void Principal::executar()
{
}