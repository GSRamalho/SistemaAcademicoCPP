#include "../include/Departamento.h"
class Universidade
{
    private:
        char nomeU[50] = "";
    public:
        Universidade();
        ~Universidade();
        void setNome(char* n);
        char* getNome();
};