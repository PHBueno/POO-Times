#include "Time.hpp"
#include "Empresa.hpp"
#include<iostream>
using namespace std;

int main(void)
{
    Empresa Nacional("Nacional");

    Time Internacional("Internacional", "Profissional");
    Time Gremio("Grêmio", "Profissional");
    Time Sao_Jose("São José", "Base");

    

    Internacional.adiciona_jogador("Pedro", "Profissional", "Brasileiro", 7,10,2000, 3100.00);
    Internacional.adiciona_jogador("Glauco", "Profissional", "Brasileiro", 7,10,1997, 3100.00);

    Gremio.adiciona_jogador("Paulo", "Profissional", "Brasileiro", 7,10,1997, 3100.00);
    Sao_Jose.adiciona_jogador("Mariano", "Base", "Brasileiro", 7,11,1997, 3100.00);

    Nacional.adiciona_time(Internacional);
    Nacional.adiciona_time(Sao_Jose);

    // Nacional.time_na_Empresa(Internacional);

    Nacional.consulta_jogador("Gilberto");
}