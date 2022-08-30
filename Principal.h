#include <stdio.h>
using namespace std;

class Principal
{
    private:
        int diaAtual;
        int mesAtual;
        int anoAtual;
    public:
        Principal();
        ~Principal();
        void executar();
};