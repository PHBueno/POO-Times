/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 * Classe criada para armazenar objetos do tipo Jogador; *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Autor: Pedro Henrique da Silva Bueno;                 *   
 * Matrícula: 201918771;                                 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include<iostream>
#include<vector>
#include "Jogador.hpp"
using namespace std;

class Time
{

    public:
        Time(string nome, string categoria);
        
        string get_nome_time();
        string get_cat_time();
        int get_id_time();

        void adiciona_jogador(string nome, string categoria, string nascionalidade,int dia, int mes, int ano, float salario_bruto);
        void relatorio_geral();
        void relatorio_financeiro();

    private:
        string nome;      // Nome do Time
        string categoria; // Categoria do time
        int static id;    // ID do time
        int get_id;

        vector<Jogador> jogadores; // Vetor dinâmico para jogadores;
        
};