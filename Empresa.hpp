/* * * * * * * * * * * * * * * * * * * * * * * * 
 * Classe criada para representar uma Empresa; *
 * * * * * * * * * * * * * * * * * * * * * * * *
 * Autor: Pedro Henrique da Silva Bueno;       *   
 * Matrícula: 201918771                        *
 * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef Empresa_hpp
#define Empresa_hpp

#include <vector>
#include <iostream>
#include "Time.hpp"
using namespace std;

class Empresa
{
    public:

        Empresa(string nome);
        void adiciona_time(Time time);
        bool time_na_Empresa(Time time);
        void consulta_jogador(string jogador);
        void mostra_jogadores();
        void relatorio_financeiro_empresa();

        string get_nome_empresa();

    private:
        string nome, jogador;
        int id_time;
        vector <int> times;
        vector <Time> meu_time;
};

#endif /* Empresa_hpp */