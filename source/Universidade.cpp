#include "../include/Universidade.h"
#include <string.h>
Universidade::Universidade()
{
    Departamento D;
    D.setId(1);
    D.setNomeDpto("DAINF");

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