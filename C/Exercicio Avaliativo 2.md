1. Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas sucessivas, crie
um programa que calcule o produto de dois números inteiros lidos. Suponha que os números lidos
sejam positivos e que o multiplicando seja menor do que o multiplicador.

```c
int main()
{
    int m1, m2;
    printf("Digite multiplicando:\n");
    scanf("%i", &m1);
    printf("Digite multiplicador:\n");
    scanf("%i", &m2);

    if (m1 > 0 && m2 > 0 && m2 < m1)
    {
        printf("\n O resultado e:  %i", m1 * m2);
    }
    else
    {
        printf("\n Nao atende os pre requisitos");
    }
}
```

2. Escreva um programa em C que possa ler um conjunto de pedidos de compra e calcule o valor total
da compra. Cada pedido é composto pelos seguintes campos:
• número de pedido
• data do pedido (dia, mês, ano)
• preço unitário
• quantidade
O programa deverá processar novos pedidos até que o usuário digite 0 (zero) como número do
pedido.

```c
#include <time.h>
int main()
{
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);
    int i, preco, qtd, total = 0;

    for (i = 0; preco != 0; i++)
    {
        printf("---------------------------\nPedido ........: %i\n", i + 1);
        printf("Digite preco ..: ");
        scanf("%i", &preco);
        printf("Quantidade ....: ");
        scanf("%i", &qtd);
        printf("Data ..........: %d/", data_hora_atual->tm_mday);
        printf("%d/", data_hora_atual->tm_mon + 1);      //mês
        printf("%d\n", data_hora_atual->tm_year + 1900); //ano
        total = total + (preco * qtd);
        printf("Total atual ...: %i\n", total);
    }
}
```

3. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:

• Qual o seu time de coração?
1. Fluminense;
2. Botafogo;
3. Vasco;
4. Flamengo;
5. Outros

• Onde você mora?
1. RJ;
2. Niterói;
3. Outros

• Qual o seu salário?

Faça um programa que imprima:
• o número de torcedores por clube;
• a média salarial dos torcedores do Botafogo;
• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes;
• o número de pessoas de Niterói torcedoras do Fluminense
Obs.: O programa encerra quando se digita 0 para o time.
Lista de exercícios de Algoritimos
Data de entrega 05/03

4. Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo.
Para cada consumidor, são digitados os seguintes dados:
• número do consumidor
• quantidade de kWh consumidos durante o mês
• tipo (código) do consumidor
1-residencial, preço em reais por kWh = 0,3
2-comercial, preço em reais por kWh = 0,5
3-industrial, preço em reais por kWh = 0,7
Os dados devem ser lidos até que seja encontrado o consumidor com número 0 (zero). O
programa deve calcular e imprimir:
• O custo total para cada consumidor
• O total de consumo para os três tipos de consumidor
 • Amédia de consumo dos tipos 1 e 2

5. Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20 pessoas. O
programa deve imprimir o nome da pessoa se ela for do sexo masculino e tiver mais de 21 anos.

6. Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas. Após ler os
dados, imprimir o nome e o valor da alíquota do imposto de renda calculado conforme a tabela a
seguir:
