#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  printf("************************************\n");
  printf("* Bem Vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");
  
  int numerosecreto;
  numerosecreto = 42;
  
  
  int chute;
  
  printf("Qual o seu chute?");
  scanf("%d", &chute);
  printf("Você chutou o número %d\n", chute);
  
  if (chute == numerosecreto) {
    
    printf("Parabéns você acertou!");  
    }
    else {
    
    if (chute> numerosecreto) {
      printf("Seu chute foi maior que o número secreto\n");
      printf("Mas não desanime, tente de novo!"); 
    }
   if(chute< numerosecreto){
     printf("Seu chute foi maior que o número secreto\n");
     printf("Mas não desanime, tente de novo!");
   }
   
    }
  
  
 

}