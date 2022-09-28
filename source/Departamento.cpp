#include "../include/Departamento.h"
#include <string.h>
Departamento::Departamento()
{

}
Departamento::~Departamento()
{

}

void Departamento::setId(int i)
{
    id = i;

}
void Departamento::setNomeDpto(char* d)
{
    strcpy(nomeDpto, d);
}
int Departamento::getId()
{
    return id;
}
char* Departamento::getNomeDpto()
{
    return nomeDpto;
}

void Departamento::setUniversidade(Universidade* pu)
{
    pUni = pu;
}

Universidade* Departamento::getUniversidade()
{
    return pUni;
}