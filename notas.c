#include <stdio.h>
float pesoN1(float n){
   float result = n*40/100;
    return result;
}
float pesoN2(float n){
    float result = n*60/100;
    return result;
    
}

int main()
{
    float n1;
    float n2;
    float notaFinal;
    printf(" calcula nota\n\n");
    printf("Digite o valor da primeira nota: ");
    scanf("%f",&n1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f",&n2);
    float result1 = pesoN1(n1);
    float result2 = pesoN2(n2);
    notaFinal = result1+result2;
    printf("Peso nota Nº 1: %.1f\n",result1);
    printf("Peso nota Nº 2: %.1f\n",result2);
    printf("Nota final: %.1f\n", notaFinal);
    if(notaFinal < 5){
        printf("conceito final: D");
        }else if(notaFinal < 7){
            printf("conceito final: C");
            }else if(notaFinal < 9){
                printf("conceito final: B");
            }else{
                printf("conceito final: A");
            }
            
            
        
    
    return 0;
    
}