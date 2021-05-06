/* * * * * * * * * * * * * * * * * * * * * * * *
 * Implementação dos métodos da Classe Empresa; *
 * * * * * * * * * * * * * * * * * * * * * * * * 
 * Autor: Pedro Henrique da Silva Bueno;       *
 * Matrícula: 201918771;                       *
 * * * * * * * * * * * * * * * * * * * * * * * */

#include "Empresa.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

Empresa::Empresa(string nome)
{
    this->nome = nome;
}

string Empresa::get_nome_empresa()
{
    return nome;
}

void Empresa::adiciona_time(Time time)
{
    meu_time.push_back(time); // Adiciona o Objeto da Classe Time em um vetor dinâmico;
}

void Empresa::consulta_jogador(string jogador)
{
    for(int i=0; i<meu_time.size(); i++)
    {
        meu_time[i].busca_jogador(jogador);
    }
    
}

void Empresa::mostra_jogadores()
{
    cout << "\nJogadores da Empresa: " << nome << endl;
    for(int i=0; i<meu_time.size(); i++)
    {
        meu_time[i].relatorio_geral();
    }
}

void Empresa::relatorio_financeiro_empresa()
{
    float total_salario, total_inss = 0, total_ir = 0;

    for(int i=0; i < meu_time.size(); i++) // Laço para a contagem dos times
    {
       cout << "Time: " << meu_time[i].get_nome_time() << endl;

       for(int j=0; j < meu_time[i].get_salarios().size(); j++) // Laço para a contagem dos salários dentro de cada Time
       {
           total_salario += meu_time[i].get_salarios()[j]; // O método get_salario do Objeto Time retorna um Vetor 
                                                           // com os salarios dos jogadores;
           
           // Verificacoes para identificar a porcentagem de INSS e IR;
           if(meu_time[i].get_salarios()[j] <= 1100.00)
           {
               total_inss += 7.5;
           }
           else if(meu_time[i].get_salarios()[j] > 1100.00 && meu_time[i].get_salarios()[j] <= 2000.00)
           {
               total_inss += 9;
               total_ir += 7.5;
           }
           else if(meu_time[i].get_salarios()[j] > 2000.00 && meu_time[i].get_salarios()[j] <= 3100.00)
           {
               total_inss += 12;
               total_ir += 15;
           }
           else if(meu_time[i].get_salarios()[j] > 3100.00 && meu_time[i].get_salarios()[j] <= 4100.00)
           {
               total_inss += 14;
               total_ir += 22;
           }
           else if(meu_time[i].get_salarios()[j] > 4100.00)
           {
               total_inss += 14;
               total_ir += 27;
           }
       }

       // Imprime as informações  
       cout << "Total a ser pago: " << total_salario << endl;
       cout << "Total INSS: " << total_inss << "%" << endl;
       cout << "Total IR: " << total_ir << "%" << endl;
       cout << "\n\n";

       // Zera as variáveis de contagem para o próximo Time;
       total_salario = 0.0;
       total_inss = 0.0;
       total_ir = 0.0;
    }
}