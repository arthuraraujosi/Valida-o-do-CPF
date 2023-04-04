#include <stdio.h>

int main(){
	
int a, b, c, d, e, f, g, h, i, j, k, resto;

	printf ("***** CPF *****\n\n");
	printf ("Digite os 11 digitos:\n\n");
	
	printf ("PRIMEIRO:");
	scanf ("%d", &a);
	printf ("SEGUNDO:");
	scanf ("%d", &b);
	printf ("TERCEIRO:");
	scanf ("%d", &c);
	printf ("QUARTO:");
	scanf ("%d", &d);
	printf ("QUINTO:");
	scanf ("%d", &e);
	printf ("SEXTO:");
	scanf ("%d", &f);
	printf ("SETIMO:");
	scanf ("%d", &g);
	printf ("OITAVO:");
	scanf ("%d", &h);
	printf ("NONO:");
	scanf ("%d", &i);
	printf ("DECIMO:");
	scanf ("%d", &j);
	printf ("DECIMO PRIMEIRO:");
	scanf ("%d", &k);
	 
	resto = ((a*10) + (b*9) + (c*8) + (d*7) + (e*6) + (f*5) + (g*4) + (h*3)+ (i*2)) % 11; 
	
		if (resto>=2){
		
		resto = 11 - resto;
	
		}
		
		else {
			
			resto = 0;
		}
	
	if (resto==j){
	
	resto = ((a*11) + (b*10)+ (c*9) + (d*8) + (e*7)+ (f*6)+ (g*5)+ (h*4) + (i*3) + (j*2)) % 11; 
	
			if (resto>=2){
		
		resto = 11 - resto;
	
		}
		
		else {
			
			resto = 0;
		}

	
		if (resto==k){
			
		printf ("O CPF: [%d%d%d.%d%d%d.%d%d%d-%d%d] - [CPF Valido] ",a,b,c,d,e,f,g,h,i,j,k);	
		
		}
		
		else 
		printf ("CPF Invalido");
	}
	
	else {
		printf ("CPF Invalido");
	} 
	
return 0;
}

