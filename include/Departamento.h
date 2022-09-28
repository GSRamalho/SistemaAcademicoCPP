#include <vector>
#include <iostream>
using namespace std;

class Universidade;
class Disciplina;
class Departamento
{
    private:
        char nomeDpto[20];
        int id;
        Universidade* pUni;
    public:
        Departamento();
        ~Departamento();

        void setNomeDpto(char* d);
        char* getNomeDpto();

        void setId(int i);
        int getId();

        void incluaDisciplina(Disciplina* pd);
        void listaDisciplinas();

        void setUniversidade(Universidade* pu);
        Universidade* getUniversidade();
}; 