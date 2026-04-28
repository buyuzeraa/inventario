#include <stdio.h>


 //declaração de variáveis
int main (){
   char produtoA [20] = "router";
   char produtoB [15] = "ont";
   unsigned int estoqueA = 1000;
   unsigned int estoqueB = 500;

   float valorA = 15.50;
   float valorB = 9.50;
   
   unsigned int estoqueMinimoA = 500;
   unsigned int estoqueMinimoB = 550;

   double valorTotalA;
   double valorTotalB;

   int resultadoA, resultadoB;
   

   //exibição de valores
   printf("Produto %s tem estoque %u e valor unitário é %.2f \n", produtoA, estoqueA, valorA);
   printf("Produto %s tem estoque %u e valor unitário é %.2f \n", produtoB, estoqueB, valorB);
   
   //comparando valores em estoque
   resultadoA = estoqueA > estoqueMinimoA;
   resultadoB = estoqueB > estoqueMinimoB;

   printf("O produto %s tem estoque mínimo %d \n", produtoA, resultadoA);
   printf("O produto %s tem estoque mínimo %d \n", produtoB, resultadoB);

   //comparando valor total

   printf("O valor total de A (R$ %.2f) é maior que o valor total de B(R$%.2f): %d \n", estoqueA * valorA, estoqueB * valorB,
                                                                              (estoqueA * valorA) > (estoqueB * valorB));


}