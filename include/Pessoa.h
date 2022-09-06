#include <string.h>

class Pessoa
{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[ 30 ];
    int id;
public:
    Pessoa ( int dia, int mes, int ano, char* nome = "" );
    Pessoa ( );
    ~Pessoa ( ) {}
    void Inicializa (int dia, int mes, int ano, char* nome = "" );
    void Calc_Idade (int diaAT, int mesAT, int anoAT );
    int informaIdade ( );
    void seId ( int i ) { id = i; }
    int getId ( ) { return id; }
    void seNome ( char* n ) { strcpy(nomeP, n); }
    char* getNome ( ) { return nomeP; }
};