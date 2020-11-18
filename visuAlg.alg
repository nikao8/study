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
