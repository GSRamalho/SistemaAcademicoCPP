#include "./Pessoa.h"
#include "./Universidade.h"

class Departamento;
class Professor: public Pessoa
{
    private:
        Universidade* uniFiliado;
        Departamento* dptoAssociado;
    public:
        Professor(){}
        ~Professor(){}
        void setUni(Universidade* u);
        void setDpto(Departamento* dpto);
        void informaDpto();
        void informaUni();
};