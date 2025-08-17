#include<stdio.h>

int main() {
    float preco, desconto, valorFinal;

    
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto (0-100): ");
    scanf("%f", &desconto);

    
    valorFinal = preco - (preco * desconto / 100);

   
    printf("O valor final do produto com %.2f%% de desconto eh: R$ %.2f\n", desconto, valorFinal);

    return 0;
}