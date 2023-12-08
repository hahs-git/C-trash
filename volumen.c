#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416
void cuad(float *ar);
void trian(float *ar);
void circ(float *ar);
void poli(float *ar);

int main (void) {
		char vol;
		float ar,ext;
		printf("** Cubo = c / Esfera = o / Prisma = p / Piramide = v **\n");
		printf("Volumen: ");
		scanf("%c",&vol);
		if (vol=='c') {
				float x[1];
				printf("Lado: ");
				scanf("%f",&x[0]);
				x[1]=powf(x[0],3);
				printf("Volumen: %.2lf m3\n",x[1]);
		}
		else if (vol=='o') {
				float y[3];
				printf("Radio: ");
				scanf("%f",&y[0]);
				y[1]=powf(y[0],3);
				y[2]=(4*pi)*(y[1]);
				printf("Volumen: %.2lf m3\n",y[2]);
		}
		else if (vol=='p') {
				int base;
				float h;
				printf("Altura: ");
				scanf("%f",&h);
				printf("Base:\n");
				printf("Cuadrada = 1 / Triangular = 2 / Circular = 3 / Poligonal = 4\n");
				scanf("%i",&base);
				if (base==1) {
						cuad(&ar);	
						ext=ar*h;
						printf("Volumen: %.2f m3\n",ext);
				}
				else if (base==2) {
						trian(&ar);
						ext=ar*h;
						printf("Volumen: %.2f m3\n",ext);
				}
				else if (base==3) {
						circ(&ar);
						ext=ar*h;
						printf("Volumen: %.2f m3\n",ext);
				}
				else if (base==4) {
						poli(&ar);
						ext=ar*h;
						printf("Volumen: %.2f m3\n",ext);
				}
				else {
						printf("?!\n");
						return 0;
				}
		}
		else if (vol=='v') {
				int base;
				float h;
				printf("Altura: ");
				scanf("%f",&h);
				printf("Base:\n");
				printf("Cuadrada = 1 / Triangular = 2 / Circular = 3 / Poligonal = 4\n");
				scanf("%i",&base);
				if (base==1) {
						cuad(&ar);	
						ext=(ar*h)/3;
						printf("Volumen: %.2f m3\n",ext);
				}
				else if (base==2) {
						trian(&ar);
						ext=(ar*h)/3;
						printf("Volumen: %.2f m3\n",ext);
				}
				else if (base==3) {
						circ(&ar);
						ext=(ar*h)/3;
						printf("Volumen: %.2f m3\n",ext);
				}
				else if (base==4) {
						poli(&ar);
						ext=(ar*h)/3;
						printf("Volumen: %.2f m3\n",ext);
				}
				else {
						printf("?!\n");
						return 0;
				}
		}
		else {
				printf("?!\n");
				return 0;
		}
		return 0;
}

void cuad (float *ar){
		float x[2];
		printf("Lado x: ");
		scanf("%f",&x[0]);
		printf("Lado y: ");
		scanf("%f",&x[1]);
		*ar = x[0]*x[1];
}

void trian (float *ar){
		float x[2];
		printf("Base: ");
		scanf("%f",&x[0]);
		printf("Altura: ");
		scanf("%f",&x[1]);
		*ar = (x[0]*x[1])/2;
}
void circ (float *ar){
		float x;
		printf("Radio: ");
		scanf("%f",&x);
		*ar = pi * powf(x,2);
}
void poli (float *ar){
		float x[4];
		printf("Lados: ");
		scanf("%f",&x[0]);
		printf("Lado: ");
		scanf("%f",&x[1]);
		x[2]= x[0]*x[1];
		printf("Apotema: ");
		scanf("%f",&x[3]);
		*ar = (x[2]*x[3])/2;
}
