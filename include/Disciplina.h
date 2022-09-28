#include "./Disciplina.h"

class Disciplina
{
    private:
        Departamento* dptoAssociado;
        char nome[150];
        char areaConhecimento[50];
    public:
        Disciplina(char* ac = "");
        ~Disciplina();

        void setId(int n);
        int getId();

        void setNome(char* n);
        char* getNome();

        void setDepartamento(Departamento* pdpto);
        Departamento* getDepartamento();
};