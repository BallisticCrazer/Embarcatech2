#include <stdio.h>

void converterComprimento()
{
    int escolha;
    float valor, resultado;
   printf("Qual conversao deseja fazer ? \n");
   printf("1-Metro Para Centimetro \n");
   printf("2-Metro Para Milimetro \n");
   printf("3-Centimetro Para Metro \n");
   printf("4-Centimetro Para Milimetro \n");
   printf("5-Milimetro Para Metro \n");
   printf("6-Milimetro Para Centimetro \n"); 
   scanf("%d", &escolha);
   
   
   switch (escolha)
   {
     case 1:
     {
       printf("Digite o valor da sua unidade de medida: \n ");
       scanf("%f", &valor);
       resultado = valor*100;
       printf(" O Valor da sua conversao eh: %f ",resultado);
      
       break;
     }
     case 2:

     {
      printf("Digite o valor da sua unidade de medida: \n ");
      scanf("%f", &valor);
      resultado = valor*1000;
      printf(" O Valor da sua conversao eh: %f ",resultado);


        break;
     }
     case 3:
     {
      printf("Digite o valor da sua unidade de medida: \n ");
      scanf("%f", &valor);  
      resultado = valor/100;
      printf(" O Valor da sua conversao eh: %f ",resultado);

      break;
     }
     case 4:
     { 
       printf("Digite o valor da sua unidade de medida: \n ");
       scanf("%f", &valor); 
       resultado = valor*10;
       printf(" O Valor da sua conversao eh: %f ",resultado);

       break;
     }
     case 5:
     {
      printf("Digite o valor da sua unidade de medida: \n ");
      scanf("%f", &valor);  
      resultado = valor/1000;
      printf(" O Valor da sua conversao eh: %f ",resultado);

      break;
     }
     case 6:
     {
      printf("Digite o valor da sua unidade de medida: \n ");
      scanf("%f", &valor);
      resultado = valor/10;
      printf(" O Valor da sua conversao eh: %f ",resultado);

      break;
      
     }

     default:
     printf("Essa nao é uma opcao valida \n ");
     break;
     

   }


   


}