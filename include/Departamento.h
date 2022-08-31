class Departamento
{
    private:
        char nomeDpto[20];
        int id;
    public:
        Departamento();
        ~Departamento();
        void setNomeDpto(char* d);
        char* getNomeDpto();
        void setId(int i);
        int getId();
};