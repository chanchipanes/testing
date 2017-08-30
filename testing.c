#include <stdio.h>
#include <math.h>
float ac(float r){
	return pow(r*3.14,2);
	}
float pc(float r){
	return(r*2*3.14);
}
float asq(float l){
	return pow(l,2);
}
float psq(float l){
	return (l*4);
}
float at( float a, float b){
	return (a*b)/2;
}
float pt(float a, float b){
	return sqrt(a*a+b*b)+a+b;
}
float ar(float a, float b){
	return a*b;
}
float pr(float a, float b){
	return (a*2+b*2);
}
int main(){
	float a,b;
	int opt,aux= 0;
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
