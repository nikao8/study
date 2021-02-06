# Exercícios em C

o bloco de código abaixo é apenas um teste

```c
int main(){
          int i, n;
          printf("Quantos numeros vc quer averiguar?\n");
          scanf("%i", &n);
          printf("Os multiplos de 10 entre 0 e %i: \n", n);
          for (i = 0; i < n; i++)
          {
              if (i % 10 == 0)
              {
                  printf(" %i\t", i);
              }
          }
      }
      return 0;
```
