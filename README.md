## Apresentação
- **Nome:** Pedro Henrique da Silva Bueno
- **Número de Matrícula:** 201918771

## Estrutura
A solução para o Desafio é composta por três Classes, sendo elas:

- Jogador
- Time
- Empresa

O relacionamento das Classes ocorre da seguinte forma:
- A Classe Time é reponsável por controlar a Classe Jogador, ou seja, nela é possível criar o time e também o próprio Objeto Jogador;
- A Classe Empresa é responsável por gerenciar a Classe Time, porém esta Classe não cria um Time, apenas o gerencia, ou seja:
    - Adiciona um novo Time na Empresa;
    - Pesquisa dados de um jogador;
    - etc ...

### Métodos das Classes
- Jogador
    ```c++
    string get_nome(); // Nome do jogador
    string get_nascionalidade(); // Nascionalidade
    string get_catAtuacao(); // Categoria do Jogador
    float get_salarioBruto(); // Salário bruto
    void get_dtNascimento(); // Data de nascimento
    int get_id(); // Retorna o id do Jogador

    void set_nome(string nome); // Altera o nome do jogador após criado
    void set_nascionalidade(string nascionalidade); // Altera a nascionalidade após criado
    void set_dtNascimento(int dia, int mes, int ano); // Altera a Data de nascimento após criado
    void set_salarioBruto(float salario_bruto); // Altera o salário bruto após criado
    void set_catAtuacao(string cat_atuacao); // Altera a categoria de Atuação após criado

    int get_idade(); // Calcula e retorna a idade
    int tempo_aposentadoria(); // Calcula e retorna o tempo de aposentadoria, se retornar <0 o jogador já está aposentado
    float salario_liquido(); // Calcula e retorna o salário líquido
    ```
- Time
    ```c++
    string get_nome_time();         // Nome do Time
    string get_cat_time();          // Categoria do Time
    int get_id_time();              // ID do Time
    vector <float> get_salarios();  // Vetor com os Salários dos Jogadores

    void busca_jogador(string nome); // Retorna jogador pesquisado
    void adiciona_jogador(string nome, string categoria, string nascionalidade,int dia, int mes, int ano, float salario_bruto); // Cria um novo jogador e Adiciona ao Time
    void relatorio_geral(); // Impre um relatório geral dos Jogadores
    void relatorio_financeiro(); // Imprime um relatório financeiro dos jogadores
    ```
- Empresa
    ```c++
    void adiciona_time(Time time); // Adiciona um Objeto Time na Empresa
    void consulta_jogador(string jogador); // Utiliza o método da classe Time para procurar um jogador
    void mostra_jogadores(); // Utiliza o método da Classe Time para mostrar todos os Jogadores
    void relatorio_financeiro_empresa(); // Mostra o relatório financeiro da Empresa

    string get_nome_empresa(); // Retorna o Nome da Empresa.
    ```