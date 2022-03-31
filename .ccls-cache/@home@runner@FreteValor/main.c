#include <stdio.h>

int main(void) {

 int  destino;
 float fixo, frete;
  printf("Qual é o valor fixo: ");
  scanf("%f",&fixo);
  printf("Escolha o destino de 1 a 4: ");
  scanf("%d",&destino);

  // comando switch - case
  switch (destino){
    case 1 :
    frete = 0.5 * fixo;
    printf ("Valor do frete: %f ", frete);
    break;
    
    case 2 :
     frete = 0.5 * fixo;
       printf ("Valor do frete: %f ", frete);
    break;
    
    case 3 :
      frete = 0.8 * fixo;
        printf ("Valor do frete: %f ", frete);
    break;
    
    case 4 :
      frete =  1.5 * fixo;
        printf ("Valor do frete: %f ", frete);
    break;
    
    default:
    printf("Erro");
  }
  return 0;
}