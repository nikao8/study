#include<stdio.h>
// ola mundo 
int main() {
    printf("Ola mundo \n");
    return 0;
    
   
}



// corretor de nota média

int main() {
    int a, b, c;
    
    printf("\n Digite as notas n1, n2 e n3: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    
}





// calculador de número menor
 
int main() {
   int a, b, c;
 
   printf("\nDigite os números a, b & c : ");
   scanf("%d %d %d", &a, &b, &c);
 
   if ((a < b) && (a < c))
      printf("\na é o menor");
 
   if ((b < c) && (b < a))
      printf("\nb é o menor");
 
   if ((c < a) && (c < b))
      printf("\nc é o menor");
 
   return(0);
}
