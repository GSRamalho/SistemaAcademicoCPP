#include "../include/Disciplina.h"
#include <string.h>
#include <stdio.h>
Disciplina::Disciplina(char*ac)
{
    dptoAssociado = NULL;
    strcpy(areaConhecimento, ac);
}

Disciplina::~Disciplina()
{
    dptoAssociado = NULL;
}
void Disciplina::setId(int n)
{
    id = n;
}


int Disciplina::getId()
{
    return id;
}

void Disciplina::setNome(char*n)
{
    strcpy(nome, n);
}

char*Disciplina::getNome()
{
    return nome;
}

void Disciplina::setDepartamento(Departamento* pdpto)
{
    dptoAssociado = pdpto;
}

Departamento* Disciplina::getDepartamento()
{
    return dptoAssociado;
}