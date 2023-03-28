#include <stdio.h>

int main(){
	
int a, b, c, d, e, f, g, h, i, j, k, resto;

	printf ("***** CPF *****\n\n");
	printf ("Digite os 11 digitos:\n\n");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	scanf ("%d", &d);
	scanf ("%d", &e);
	scanf ("%d", &f);
	scanf ("%d", &g);
	scanf ("%d", &h);
	scanf ("%d", &i);
	scanf ("%d", &j);
	scanf ("%d", &k);
	 
	resto = (a*10 + b*9 + c*8 + d*7 + e*6 + f*5 + g*4 + h*3 + i*2) * 10 % 11; 
	
	if (resto==j){
	
	resto = (a*11 + b*10 + c*9 + d*8 + e*7 + f*6 + g*5 + h*4 + i*3 + j*2) * 10 % 11; 
	
		if (resto==k){
			
		printf ("CPF Valido");	
		
		}
		
		else 
		printf ("CPF Invalido");
	}
	
	else {
		printf ("CPF Invalido");
	} 
	
return 0;
}

