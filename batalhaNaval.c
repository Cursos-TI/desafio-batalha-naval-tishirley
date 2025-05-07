#include <stdio.h>


int main() {

  
   char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  // Criando o Tabuleiro Batalha Naval (Matriz 10x10)
int tabuleiro[10][10];
for (int i = 0; i < 10; i++) {
printf("%c", i); // Imprime letras da Coluna
}
// Exibindo o Tabuleiro
printf("TABULEIRO BATALHA NAVAL\n");
printf("\n");
for (int j = 0; j < 10; j++){
  printf("%c", linha [j]); // Imprime os números da coluna
}
printf("\n");
char numero [10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10'};

printf("%c\n", numero[1]);
printf("%c\n", numero[2]);
printf("%c\n", numero[3]);
printf("%c\n", numero[4]);
printf("%c\n", numero[5]);
printf("%c\n", numero[6]);
printf("%c\n", numero[7]);
printf("%c\n", numero[8]);
printf("%c\n", numero[9]);
printf("%c\n", numero[10]);

    return 0;
}
