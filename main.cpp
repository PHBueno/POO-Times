#include "Time.hpp"
#include<iostream>
using namespace std;

int main(void)
{
    Time Internacional("Internacional", "Profissional");

    Internacional.adiciona_jogador("Pedro", "Profissional", "Brasileiro", 7,10,2000, 3100.00);
    Internacional.adiciona_jogador("Glauco", "Profissional", "Brasileiro", 7,10,1997, 3100.00);

    Internacional.relatorio_geral();
    Internacional.relatorio_financeiro();
}