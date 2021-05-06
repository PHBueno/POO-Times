/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 * Classe criada para armazenar objetos do tipo Jogador; *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Autor: Pedro Henrique da Silva Bueno;                 *   
 * Matrícula: 201918771;                                 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef Time_hpp
#define Time_hpp

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
        vector <float> get_salarios();

        void busca_jogador(string nome);
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

#endif
