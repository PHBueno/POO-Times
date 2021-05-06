/* * * * * * * * * * * * * * * * * * * * * * * *
 * Implementação dos métodos da Classe Time;   *
 * * * * * * * * * * * * * * * * * * * * * * * * 
 * Autor: Pedro Henrique da Silva Bueno;       *
 * Matrícula: 201918771;                       *
 * * * * * * * * * * * * * * * * * * * * * * * */

#include "Time.hpp"
#include <iostream>
using namespace std;

int Time::id = 0;

Time::Time(string nome, string categoria)
{
    this->nome = nome;
    this->categoria = categoria;
    get_id = ++id;
}

void Time::adiciona_jogador(string nome, string categoria, string nascionalidade, int dia, int mes, int ano, float salario_bruto)
{
    jogadores.push_back(Jogador(nome, categoria, nascionalidade, dia, mes, ano, salario_bruto));
}

void Time::relatorio_geral()
{
    cout << "\n=-=-=-=-=-=-=-=-= RELATÓRIO GERAL " << nome << " =-=-=-=-=-=-=-=-=\n";
    for(int i=0; i<jogadores.size(); i++)
    {
        cout << "Nome: " << jogadores[i].get_nome() << endl;
        cout << "Idade: " << jogadores[i].get_idade() << endl;
        cout << "Salário Bruto: " << jogadores[i].get_salarioBruto() << endl;
        cout << "\n\n";
    }
    // cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";

}

void Time::relatorio_financeiro()
{
    cout << "\n=-=-=-=-=-=-=-=-= RELATÓRIO FINANCEIRO " << nome << " =-=-=-=-=-=-=-=-=\n";
    for(int i=0; i<jogadores.size(); i++)
    {
        if(jogadores[i].tempo_aposentadoria() > 0) // O método retorna negativo se a idade for maior que 60 anos;
        {
            cout << "Nome: " << jogadores[i].get_nome() << endl;
            cout << "Idade: " << jogadores[i].get_idade() << endl;
            cout << "Salário Bruto: " << jogadores[i].get_salarioBruto() << endl;
            cout << "Salário Líquido: " << jogadores[i].salario_liquido() << endl;
        }
        cout << "\n\n";
    }
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
}

void Time::busca_jogador(string nome)
{
    cout << "\n=-=-=-=-=-=-=-=-= Time: " << this->nome << " =-=-=-=-=-=-=-=-=\n";
    for(int i=0; i<jogadores.size(); i++)
    {
        if(jogadores[i].get_nome() == nome)
        {
            cout << "Nome: " << jogadores[i].get_nome() << endl;
            cout << "Idade: " << jogadores[i].get_idade() << endl;
            cout << "Salário Bruto: " << jogadores[i].get_salarioBruto() << endl;
            cout << "Salário Líquido: " << jogadores[i].salario_liquido() << endl;
        }
        cout << "\n\n";
    }
}

string Time::get_nome_time()
{
    return nome;
}

int Time::get_id_time()
{
    return get_id;
}

string Time::get_cat_time()
{
    return categoria;
}

vector <float> Time::get_salarios()
{
    vector <float> salarios;
    for(int i=0; i<jogadores.size(); i++)
    {
        salarios.push_back(jogadores[i].get_salarioBruto());
    }
    return salarios;
}