/* * * * * * * * * * * * * * * * * * * * * * * * 
 * Classe criada para representar um Jogador;  *
 * * * * * * * * * * * * * * * * * * * * * * * *
 * Autor: Pedro Henrique da Silva Bueno;       *   
 * Matrícula: 201918771                        *
 * * * * * * * * * * * * * * * * * * * * * * * */

#include<iostream>
using namespace std;

class Jogador
{

    public:
        Jogador(string nome, string nascionalidade, string cat_atuacao, int dia, int mes, int ano, float salario_bruto);
        
        string get_nome();
        string get_nascionalidade();
        string get_catAtuacao();
        float get_salarioBruto();
        void get_dtNascimento();
        int get_id();

        void set_nome(string nome);
        void set_nascionalidade(string nascionalidade);
        void set_dtNascimento(int dia, int mes, int ano);
        void set_salarioBruto(float salario_bruto);
        void set_catAtuacao(string cat_atuacao);

        int get_idade();
        int tempo_aposentadoria();
        float salario_liquido();


    private:
        string nome;
        string nascinalidade;
        string cat_atuacao;
        int dia;
        int mes;
        int ano;
        int num_id;
        float salario_bruto;

        int static id;
        
    
};
