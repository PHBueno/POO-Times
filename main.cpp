#include "Time.hpp"
#include "Empresa.hpp"
#include<iostream>
using namespace std;

int main(void)
{
    // Cria a Empresa
    Empresa Nacional("Nacional");
    
    // Cria os times
    Time Internacional("Internacional", "Profissional");
    Time Gremio("Grêmio", "Profissional");
    Time Sao_Jose("São José", "Base");

    // Adiciona jogadores nos Times
    Internacional.adiciona_jogador("Paulo", "Profissional", "Brasileiro", 7,10,2000, 3100.00);
    Internacional.adiciona_jogador("Glauco", "Profissional", "Brasileiro", 7,10,1997, 3100.40);

    Gremio.adiciona_jogador("Paulo", "Profissional", "Brasileiro", 7,10,1997, 3100.00);

    Sao_Jose.adiciona_jogador("Mariano", "Base", "Brasileiro", 7,11,1997, 3100.00);

    // Adiciona os Times na Empresa
    Nacional.adiciona_time(Internacional);
    Nacional.adiciona_time(Sao_Jose);

    // Nacional.time_na_Empresa(Internacional);

    // Nacional.consulta_jogador("Paulo");

    Nacional.mostra_jogadores();
    // Nacional.relatorio_financeiro_empresa();
    // ApertaOCuRego.relatorio_financeiro_empresa();
}