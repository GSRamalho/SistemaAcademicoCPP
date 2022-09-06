#include "Universidade.h"
#include "Pessoa.h"
#include <stdio.h>
#include <iostream>
using namespace std;
class Principal
{
    private:
        int diaAtual = 0;
        int mesAtual = 0;
        int anoAtual = 0;
    public:
        Principal();
        void executar();
};