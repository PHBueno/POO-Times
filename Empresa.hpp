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

    private:
        string nome, jogador;
        int id_time;
        vector <int> times;
        vector <Time> meu_time;
};

#endif /* Empresa_hpp */