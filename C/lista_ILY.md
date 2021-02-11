Lista de exercícios preparatória I Love YOU
Atividades de sala de aula
Aula 09-02

1. Um escritório de contabilidade Super Contábil está realizando o reajuste do
salário dos funcionários de todos os seus clientes. Para isso, estão utilizando
como referência o reajuste acordado com os sindicatos de cada classe
trabalhadora, conforme presentado na tabela a seguir. Para ajudar o
escritório nesta tarefa, faça um programa em C que receba o salário atual, o
cargo conforme especificado na tabela a seguir e realize o cálculo do reajuste
do salário. Ao término do cálculo o programa deve imprimir o valor do
reajuste e o novo salário do funcionário.
Para resolver este exercício foi utilizado o código do cargo para
determinar a qual cargo pertence o funcionário, no qual o salário está
sendo reajustado, assim, foi declarada uma variável do tipo inteiro para
armazenar o cargo e foram declaradas duas variáveis do tipo real para
armazenar o salário atual do funcionário e o valor do reajuste. Além disso,
foi utilizada a estrutura de decisão if-else para decidir qual fluxo executar
de acordo com o cargo do funcionário. Como são 4 cargos, então são
necessários 4 fluxos distintos na estrutura de decisão. Veja a seguir a
resposta do exercício e os comentários.

```c
int main()
{
    int cargo = 0;
    float salario, salarioNovo;

    printf("Qual seu salario atual: \n");
    printf("\t Utilize PONTO para os centavos \n");
    scanf("%f", &salario);
    printf("\n Qual seu cargo atual?:\n1 - Auxiliar de escritorio\n2 - Secretario\n3 - Cozinheiro\n4 - Entregador\n");
    scanf("%i", &cargo);
    switch (cargo)
    {
    case 1:
        salarioNovo = salario + (salario * 0.07);
        break;
    case 2:
        salarioNovo = salario + (salario * 0.09);
        break;
    case 3:
        salarioNovo = salario + (salario * 0.05);
        break;
    case 4:
        salarioNovo = salario + (salario * 0.12);
        break;
    default:
        break;
    }
    system("cls");

    printf("\n\n\nSeu salario corrigido e de: %.2f", salarioNovo);
}
```


2. O hospital local está fazendo uma campanha para receber doação de
sangue. O propenso doador deve inicialmente se cadastrar informando o
seu nome completo, sua idade, seu peso, responder a um breve
questionário e apresentar um documento oficial com foto. Faça um
programa que permita ao hospital realizar o cadastro dos voluntários para
avaliar a aptidão quanto à doação de sangue. Para estar apto a doar, o
voluntário deve ter idade entre 16 e 69, pesar pelo menos 50 kg, estar
bem alimentado e não estar resfriado. O programa deve ler os dados e
imprimir no final o nome do voluntário e se ele está apto ou não.

```c
int main()
{
    int idade, peso;
    int resfriado, alimentado;

    printf("Informe a idade:\t ");
    scanf("\t %i", &idade);
    printf("Informe o peso:\t ");
    scanf("\t %i", &peso);
    printf("Esta resfriado:\n1-Sim ou 2-Nao\t");
    scanf("\t %i", &resfriado);
    printf("Esta alimentado:\n1-Sim ou 2-Nao\t");
    scanf("\t %i", &alimentado);

    if (((idade > 15) && (idade < 69) && (peso > 50)) && ((resfriado == 2) && (alimentado == 2)))
    {
        printf("Apto para doar!!");
    }
    else
    {
        printf("Nao esta apto!");
    }
}
```

3. Faça um programa em C que leia o destino do passageiro, se a viagem inclui retorno
(ida e volta) e informe o preço da passagem conforme a tabela a seguir:
Para resolver este exercício será necessário primeiro verificar qual é o destino, depois
de verificar o destino, verificar se o trecho inclui somente ida ou ida e volta, ou seja, há
uma verificação condicionada a outra, a primeira será o destino e a segunda e aninhada
à primeira, será a condição do trecho.

```c
int main()
{
    int d, v;
    printf("\tEscolha seu destino:\n1 - Norte\n2 - Nordeste\n3 - Centro Oeste\n4 - Sul\n\n");
    scanf("%i", &d);
    printf("1 - Ida ou 2 - Volta\n\n");
    scanf("%i", &v);
    system("cls");
    switch (d)
    {
    case 1:
        if (v == 1)
        {
            printf("O total e de: 500,00");
        }
        else
        {
            printf("O total e de: 900,00");
        }
        break;
    case 2:
        if (v == 1)
        {
            printf("O total e de: 350,00");
        }
        else
        {
            printf("O total e de: 650,00");
        }
        break;
    case 3:
        if (v == 1)
        {
            printf("O total e de: 350,00");
        }
        else
        {
            printf("O total e de: 600,00");
        }
        break;
    case 4:
        if (v == 1)
        {
            printf("O total e de: 300,00");
        }
        else
        {
            printf("O total e de: 550,00");
        }
        break;
    default:
        break;
    }
}
```

4. A prefeitura do Juiz de Fora abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido.

```c
int main()
{
    float s, p;
    printf("Utilize PONTO para centavos!!\n");
    printf("Insira seu salario:\n\n");
    scanf("%f", &s);
    printf("Insira sua prestacao:\n\n");
    scanf("%f", &p);
    if (p <= (s * 0.3))
    {
        printf("\n\nEmprestimo foi aprovado");
    }
    else
    {
        printf("\n\nEmprestimo recusado");
    }
}
```

5. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
desconto do INSS segundo a tabela seguir:

```c
int main()
{
    float s;
    printf("Digite seu salario:\n\n");
    scanf("%f", &s);
    system("cls");
    if (s <= 600)
    {
        printf("Isento");
    }
    else if (s > 600 && s <= 1200)
    {
        printf("Desconto: %.2f", s * 0.2);
    }
    else if (s > 1200 && s <= 2000)
    {
        printf("Desconto: %.2f", s * 0.25);
    }
    else
    {
        printf("Desconto: %.2f", s * 0.3);
    }
}
```

6. Depois da liberação do governo para as mensalidades dos planos de saúde, as
pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um
vendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com
o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.

```c
int main()
{
    int i;
    char n[40];
    printf("Digite seu nome:\n");
    scanf("%s", &n);
    printf("Digite sua idade:\n");
    scanf("%f", &i);
    system("cls");
    printf("%s pagara: ", n);
    if (i >= 10)
    {
        printf("R$30,00");
    }
    else if (i > 10 && i <= 29)
    {
        printf("R$60,00");
    }
    else if (i > 29 && i <= 45)
    {
        printf("R$120,00");
    }
    else if (i > 45 && i <= 59)
    {
        printf("R$150,00");
    }
    else if (i > 59 && i <= 65)
    {
        printf("R$250,00");
    }
    else
    {
        printf("R$400,00");
    }
}
```

7. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do
livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir
um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias
para devolver o livro e o aluno só três dias.
• Nome do livro:
• Tipo de usuário:
• Total de dias:

```c
int main()
{
    int user, dias;
    char book[60];

    printf("Nome do livro?\n ");
    scanf("%s", &book);
    printf("\n1 - Professor   ou   2 - Aluno?\n ");
    scanf("%i", &user);
    system("cls");
    printf("Nome do livro: %s", book);
    if (user == 1)
    {
        printf("\nTipo de Usuario: Professor");
        printf("\nTotal de dias: 10");
    }
    else
    {
        printf("\nTipo de Usuario: Aluno");
        printf("\nTotal de dias: 3");
    }
}
```

8. Construa um programa que leia o percurso em quilómetros, o tipo do carro e
informe o consumo estimado de combustível, sabendo-se que um carro tipo C
faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.

```c
int main()
{
    float dist;
    int carro;
    printf("Qual a distancia?\n ");
    scanf("%f", &dist);
    printf("Tipo de Carro:\n 1 - A\n 2 - B\n 3 - C\n");
    scanf("%i", &carro);
    switch (carro)
    {
    case 1:
        printf("Consumo estimado:  %.2f Litros", (dist / 12));
        break;
    case 2:
        printf("Consumo estimado:  %.2f", (dist / 9));
        break;
    case 3:
        printf("Consumo estimado:  %.2f", (dist / 8));
        break;
    default:
        break;
    }
}
```


