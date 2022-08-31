#include "../include/Universidade.h"
#include <string.h>
Universidade::Universidade()
{

}
Universidade::~Universidade()
{

}

void Universidade::setNome(char* n)
{
    strcpy(nomeU, n);
}

char* Universidade::getNome()
{
    return nomeU;
}