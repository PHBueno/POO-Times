/* * * * * * * * * * * * * * * * * * * * * * * *
 * Implementação dos métodos da Classe Jogador;*
 * * * * * * * * * * * * * * * * * * * * * * * * 
 * Autor: Pedro Henrique da Silva Bueno;       *
 * Matrícula: 201918771;                       *
 * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <ctime>
#include "Jogador.hpp"
using namespace std;

int Jogador::id = 0;

Jogador::Jogador(string nome, string nascionalidade, string cat_atuacao, int dia, int mes, int ano, float salario_bruto)
{
    this->nome = nome;
    this->nascinalidade = nascionalidade;
    this->cat_atuacao = cat_atuacao;
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->salario_bruto = salario_bruto;
    num_id = ++id;
}

void Jogador::set_nome(string nome)
{
    this->nome = nome;
}

void Jogador::set_salarioBruto(float salario_bruto)
{
    this->salario_bruto = salario_bruto;
}

void Jogador::set_nascionalidade(string nascionalidade)
{
    this->nascinalidade = nascionalidade;
}

void Jogador::set_dtNascimento(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

void Jogador::set_catAtuacao(string cat_atuacao)
{
    this->cat_atuacao = cat_atuacao;
}

string Jogador::get_nome()
{
    return nome;
}

string Jogador::get_nascionalidade()
{
    return nascinalidade;
}

string Jogador::get_catAtuacao()
{
    return cat_atuacao;
}

int Jogador::get_id()
{
    return num_id;
}

float Jogador::get_salarioBruto()
{
    return salario_bruto;
}

void Jogador::get_dtNascimento()
{
    cout << dia << "/" << mes << "/" << ano << endl;
}

int Jogador::get_idade()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int ano_atual = 1900 + ltm->tm_year;

    return ano_atual - ano;
}

int Jogador::tempo_aposentadoria()
{
    return 60 - get_idade();
}

float Jogador::salario_liquido()
{
    float desconto=0.0;
    
    if(salario_bruto <= 1100.00)
    {
        return salario_bruto - (salario_bruto * 0.075);
    }

    else if (salario_bruto > 1100.00 && salario_bruto <= 2000.00)
    {
        desconto = (salario_bruto * 0.09) + (salario_bruto * 0.075);
        return salario_bruto - desconto;
    }

    else if (salario_bruto > 2000.00 && salario_bruto <= 3100.00)
    {
        desconto = (salario_bruto * 0.12) + (salario_bruto * 0.15);
        return salario_bruto - desconto;
    }

    else if (salario_bruto > 3100.00 && salario_bruto <= 4100.00)
    {
        desconto = (salario_bruto * 0.14) + (salario_bruto * 0.22);
        return salario_bruto - desconto;
    }

    else if (salario_bruto > 4100.00)
    {
        desconto = (salario_bruto * 0.14) + (salario_bruto * 0.27);
        return salario_bruto - desconto;
    }

    return 0.0;
}