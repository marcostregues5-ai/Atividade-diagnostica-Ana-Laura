#include <stdio.h>
 #include <math.h>
 #define PI 3.14159

 int main(){
 	
 	
 	double raio,area,perimetro;
 	
 	
	 printf("informe o raio do circulo:");
 	scanf("%lf", &raio);
 	
 	
     area= PI*raio*raio;
	 perimetro=2*PI*raio;
	 
 	
	 printf("Area do circulo: %.2lf\n", area);
 	
 	
	 printf("perimetro do circulo: %.2lf\n", perimetro);
 	
	 return 0;
 	
 
 	
 	
 }