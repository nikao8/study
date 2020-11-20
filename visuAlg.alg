algoritmo "enquanto"
var
n:real

inicio
enquanto (n<11) faca
         escreval (n)
         n <- (n+1)
fimenquanto
 
fimalgoritmo

//##############################

algoritmo "calculadora" 
var
x, y:inteiro
prob:caractere
inicio
escreval ("Digite um número: ")
leia (x)
escreval ("Digite outro número: ")
leia (y)
escreval ("Multiplicar *, Subtrair -, Somar +")
escreval ("Digite o sinal")
leia (prob)

escolha prob

   caso "+"
   escreval ("A soma deu: ", x+y)

   caso "-"
   escreval ("A subtração deu: ", x-y)

   caso "*"
   escreval ("A multiplicação deu: ", x*y)

fimescolha

fimalgoritmo

//##############################

algoritmo "lista inversa"
var
nome: vetor [1..5] de caractere
contador: inteiro
inicio
para contador de 1 ate 5 passo 1 faca
     escreval ("insira o", contador ,".o nome: ")
     leia(nome[contador])
fimpara
escreval("Os nome digitados foram:")

para contador de 5 ate 1 passo -1 faca
     escreval (nome[contador])
fimpara
fimalgoritmo

//####################################

1-	Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma adega,
tendo como dados de entrada tipos de vinho, sendo:'T' para tinto,'B' para branco e 'R' para rose.
Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de vinhos é desconhecida,
utilize como finalizador 'F' de fim.

algoritmo "adega"
// Função :
// Autor :
// Data : 19/11/2020
// Seção de Declarações 
var
b,t,s: inteiro
inicio

escreval(" Digite a quantidade de vinhos Brancos: ")
leia (b)
escreval(" Digite a quantidade de vinhos Tintos: ")
leia (t)
escreval(" Digite a quantidade de vinhos Suaves: ")
leia (s)
escreval(" O total de vinho é: ", b+t+s)
escreval(" Vinhos Brancos correspondem a: ", (100*b)/(b+t+s),"%")
escreval(" Vinhos Tintos correspondem a: ", (100*b)/(b+t+s),"%")
escreval(" Vinhos Suaves correspondem a: ", (100*b)/(b+t+s), "%")

fimalgoritmo

//####################
//opção 2 de resolução
algoritmo "vinicula"
var
opcao: caractere
inicio
            escreval ("Adega do VladVitor")
            escreval ("")
            escreval ("Vinho Branco ------------------ Digite B")
            escreval ("Vinho Tinto ------------------- Digite T")
            escreval ("Vinho Suave ------------------- Digite S")
            escreval ("Sair -------------------------- Digite F")
            leia (opcao)
            escolha (opcao)
                caso "B"
                    escreval("Temos 35% de nossa adega em Vinho Branco")
                caso "T"
                    escreval("Temos 35% de nossa adega em Vinho Tinto")
                caso "S"
                    escreval("Temos 35% de nossa adega em Vinho Suave")
                    
                caso "F"
                    escreval("Tchau")
            fimescolha

fimalgoritmo

//###################
2-	Construa um algoritmo PARA CENSO
Função : Em um censo estão sendo entrevistadas 1000 famílias.
Cada família informará o número de pessoas que compõem a família. Elabore solução que 
mostre como ler o número de pessoas que compõem cada uma das famílias e armazená-lo em um vetor.
Após, ler e armazenar o número de pessoas das 1000 famílias, busque do vetor e mostre as famílias
(posição no vetor) que possuem  mais de 5 pessoas.
OBS cada vetor no visualg só armazena até 498 dados

algoritmo "censo"
var
familia: vetor [0..4] de inteiro
n: inteiro
i: inteiro
inicio
// registra membros
para i de 0 ate 4 faca
escreval("Quantos membros há na sua família? ")
leia (familia[i])
i<- i+1
fimpara
// ordena família
para i de 0 ate 4 faca
se familia[i] > 5 entao
escreval("A",i,"ª família possui", familia[i],"membros")
fimse
fimpara
fimalgoritmo

//#########################
3-       Construa um agoritmo que TRANSFORME número DECIMAL EM BINÁRIO.


//#########################
4-	Faça um algoritmo que calcule a média de idade dos seus familiares. 
Escolha 10 pessoas entre seus primos, tios, pais e irmãos e insira suas idades em um vetor “idade”.
Depois, mostre na tela qual é a média da idade de vocês. Para ficar mais interessante, classifique o 
status desse grupo da seguinte maneira: CRIANÇA (entre 0 e 12 anos); ADOLESCENTE (entre 12 e 18 anos);
JOVEM (entre 18 e 39 anos); EXPERIENTE (entre 39 e 59 anos); e IDOSO (acima de 59 anos)...

