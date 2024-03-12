#include <stdio.h>
#include <stdbool.h>

//Q01

void Soma () {

  int S = 0;
  
for(int indice = 0; indice <= 13; indice++) {

  S = S + indice;
  
}

  printf("%d", S);
  
}

//Q02

int Fibonacci (int n) {

  int Vetor[n+2];
  
  if (n < 0) {

    printf("Não pertence a sequência!");
    return 0;
    
  }

  if (n == 0 || n == 1) {

    printf("Pertence a sequência!");
    return 0;
    
  }

  Vetor[0] = 0;
  Vetor[1] = 1;
  
  for (int i = 2; i < n+2; i++) {

    Vetor[i] = Vetor[i-1] + Vetor[i-2];
      
  }

  for (int a = 0; a < n+2; a++) {

    if (Vetor[a] == n) {

      printf("Pertence a sequência!");
      return 0;
      
    }
      
  }

   printf("Não pertence a sequência!");
   return 0;
  
}

//Q03

//Lógica da sequência (a): P.A de razão "2" e elemento inicial "1". Logo, o próximo termo será o "9" 

//Lógica da sequência (b): P.G de razão "2" e elemento inicial "2". Logo, o próximo termo será 64*2 = "128"

//Lógica da sequência (c): É a sequência dos quadrados perfeitos. Logo, o próximo termo é 7² = "49"

//Lógica da sequência (d): É a sequência dos quadrados perfeitos pares. Logo, o próximo termo é 10² = "100"

//Lógica da sequência (e): É a sequência de Fibonacci definida como: A(n+2) = A(n+1) + A(n). Portanto, o próximo termo da sequência é "13"

//Lógica da sequência (f): Os números crescem de forma desordenada e depois se estabilizam com um acréscimo de "1". Portanto, o próximo número será 19+1 = "20"

//Q04

//Existem 3 interruptores (A, B, C) e 3 lâmpadas (1, 2, 3). Então as possibilidades de interruptores->lâmpadas são:

//A(1) - B(2) - C(3) #1
//A(1) - B(3) - C(2) #2
//B(1) - A(2) - C(3) #3
//B(1) - C(2) - A(3) #4
//C(1) - A(2) - B(3) #5
//C(1) - B(2) - A(3) #6

//Supondo que o interruptor A é acionado e a primeira ida é na sala que contém a lâmpada 1 (sala 1). Se a luz estiver acesa, teremos as possibilidades #1 e #2. Se a luz estiver apagada, teremos as outras: #3, #4, #5, #6.

//Se a luz estiver acesa, basta ligar o interruptor B e averiguar se a lâmpada 2 (na sala 2) tá acessa ou não. Então a questão é resolvida.

//Se a luz estiver apagada e ligarmos o interruptor B, voltando para a sala 1, teremos as seguintes possibilidades: 

//Apagada: #5, #6
//Acesa: #3, #4

//Caso as lâmpadas fossem incadescentes seria possível analisar pelo calor (ao tocar na lâmpada após um tempo acessa). O que tornaria possível a solução.

//Q05

void Inverter () {
  
  int tamanho;

  printf("Digite o tamanho da sua palavra:");
  scanf("%d", &tamanho);
  
  char palavra[tamanho];

  printf("Digite a sua frase:");
  scanf("%s", palavra);

  for (int i = 0; i < tamanho/2; i++) {
    
      char aux = palavra[i];
      palavra[i] = palavra[tamanho - i - 1];
      palavra[tamanho - i - 1] = aux;
    
  }

  printf("A frase invertida: %s", palavra);
  
}


int main(void) {

  //Soma ();
  //Fibonacci ();
  //Inverter ();
  
  return 0;
  
}