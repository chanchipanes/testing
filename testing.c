#include <stdio.h>
#include <math.h>

double ac(double r){
	return pow(r*3.14,2);
}
	
double pc(double r){
	return(r*2*3.14);
}

double asq(double l){
	return pow(l,2);
}
double psq(double l){
	return (l*4);
}

double at( double a, double b){
	return (a*b)/2;
}

double pt(double a, double b){
	return sqrt(a*a+b*b)+a+b;
}

double ar(double a, double b){
	return a*b;
}

double pr(double a, double b){
	return (a*2+b*2);
}

int main(int argc, char *argv[]){
	double a,b;
	int opt= 0;
	int aux= 0;
	
	printf("Ingrese poligono:\n");
	printf("1) CIRCULO\n");
	printf("2) CUADRADO\n");
	printf("3) TRIANGULO RECTANGULO\n");
	printf("4) RECTANGULO\n");
	printf("0) SALIR\n");
	scanf("%d", &opt);
	
	while(opt != 0){
		if(opt==1){
			printf("Ingrese radio\n");
			scanf("%f", &a);
			printf("Ingrese operacion:\n");
			printf("1)AREA\n");
			printf("2)PERIMETRO\n");
			scanf("%d",&aux);
			if(aux==1){
				printf("%f\n",ac(a));
			}
			if(aux==2){
				printf("%f\n",pc(a));
			}
		}
		
		if(opt==2){
			printf("Ingrese lado\n");
			scanf("%f", &a);
			printf("Ingrese operacion:\n");
			printf("1)AREA\n");
			printf("2)PERIMETRO\n");
			scanf("%d",&aux);
			if(aux==1){
				printf("%f\n",asq(a));
			}
			if(aux==2){
				printf("%f.2\n",psq(a));
			}
		}
		
		if(opt==3){
			pedir_memoria();
			printf("Ingrese lado a\n");
			scanf("%f", &a);
			printf("Ingrese lado b\n");
			scanf("%f", &b);
			printf("Ingrese operacion:\n");
			printf("1)AREA\n");
			printf("2)PERIMETRO\n");
			scanf("%d",&aux);
			if(aux==1){
				printf("%f\n",at(a,b));
			}
			if(aux==2){
				printf("%f\n",pt(a,b));
			}
		}
		
		if(opt==4){
			printf("Ingrese lado a\n");
			scanf("%f", &a);
			printf("Ingrese lado b\n");
			scanf("%f", &b);
			printf("Ingrese operacion:\n");
			printf("1)AREA\n");
			printf("2)PERIMETRO\n");
			scanf("%d",&aux);
			if(aux==1){
				printf("%f\n",ar(a,b));
			}
			
			if(aux==2){
				printf("%f\n",pr(a,b));
			}
		}
	
	printf("Ingrese poligono:\n");
	printf("1) CIRCULO\n");
	printf("2) CUADRADO\n");
	printf("3) TRIANGULO RECTANGULO\n");
	printf("4) RECTANGULO\n");
	printf("0) SALIR\n");
	scanf("%d", &opt);
	}
	
return 0;


}
