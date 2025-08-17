#include <stdio.h>


int main(){
	
	
	float maquinas1=8, pecas=120, horas=5, maquinas2=10;
    float producao_por_maquina, valor;

	
	producao_por_maquina = pecas/maquinas1;

    
    valor = producao_por_maquina*maquinas2;


    printf("%f  maquinas produzem %f pecas %f horas,\n", maquinas1, pecas, horas);
    printf("%f  maquinas produzem %f pecas.\n", maquinas2, valor);

    return 0;
  	
}