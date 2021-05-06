#include "Empresa.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

Empresa::Empresa(string nome)
{
    this->nome = nome;
}

void Empresa::adiciona_time(Time time)
{
    meu_time.push_back(time);
}

void Empresa::consulta_jogador(string jogador)
{
    for(int i=0; i<meu_time.size(); i++)
    {
        meu_time[i].busca_jogador(jogador);
    }
}