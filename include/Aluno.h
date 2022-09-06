#include "./Pessoa.h"
class Aluno: public Pessoa
{
    private:
        int num_RA;
    public:
        Aluno() {};
        ~Aluno() {};
        void setRA(int ra);
        int getRA();
};