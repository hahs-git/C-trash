#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416
void sq(float *ar);
void trian(float *ar);
void circ(float *ar);
void poly(float *ar);

int main (void) {
		char vol;
		float ar,ext;
		printf("** Square = s / Circle = c / Prism = p / Pyramid = v **\n");
		printf("Figure: ");
		scanf("%c",&vol);
		if (vol=='s') {
				float x[1];
				printf("Side size: ");
				scanf("%f",&x[0]);
				x[1]=powf(x[0],3);
				printf("Volume: %.2lf m3\n",x[1]);
		}
		else if (vol=='c') {
				float y[3];
				printf("Radius: ");
				scanf("%f",&y[0]);
				y[1]=powf(y[0],3);
				y[2]=(4*pi)*(y[1]);
				printf("Volume: %.2lf m3\n",y[2]);
		}
		else if (vol=='p') {
				int base;
				float h;
				printf("Height: ");
				scanf("%f",&h);
				printf("Base:\n");
				printf("Square = 1 / Triangle = 2 / Circle = 3 / Polygon = 4\n");
				scanf("%i",&base);
				if (base==1) {
						sq(&ar);	
						ext=ar*h;
						printf("Volume: %.2f m3\n",ext);
				}
				else if (base==2) {
						trian(&ar);
						ext=ar*h;
						printf("Volume: %.2f m3\n",ext);
				}
				else if (base==3) {
						circ(&ar);
						ext=ar*h;
						printf("Volume: %.2f m3\n",ext);
				}
				else if (base==4) {
						poly(&ar);
						ext=ar*h;
						printf("Volume: %.2f m3\n",ext);
				}
				else {
						printf("?!\n");
						return 0;
				}
		}
		else if (vol=='v') {
				int base;
				float h;
				printf("Height: ");
				scanf("%f",&h);
				printf("Base:\n");
				printf("Square = 1 / Triangle = 2 / Circle = 3 / Polygon = 4\n");
				scanf("%i",&base);
				if (base==1) {
						sq(&ar);	
						ext=(ar*h)/3;
						printf("Volume: %.2f m3\n",ext);
				}
				else if (base==2) {
						trian(&ar);
						ext=(ar*h)/3;
						printf("Volume: %.2f m3\n",ext);
				}
				else if (base==3) {
						circ(&ar);
						ext=(ar*h)/3;
						printf("Volume: %.2f m3\n",ext);
				}
				else if (base==4) {
						poly(&ar);
						ext=(ar*h)/3;
						printf("Volume: %.2f m3\n",ext);
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

void sq (float *ar){
		float x[2];
		printf("Side x size: ");
		scanf("%f",&x[0]);
		printf("Side y size: ");
		scanf("%f",&x[1]);
		*ar = x[0]*x[1];
}

void trian (float *ar){
		float x[2];
		printf("Base: ");
		scanf("%f",&x[0]);
		printf("Height: ");
		scanf("%f",&x[1]);
		*ar = (x[0]*x[1])/2;
}
void circ (float *ar){
		float x;
		printf("Radius: ");
		scanf("%f",&x);
		*ar = pi * powf(x,2);
}
void poly (float *ar){
		float x[4];
		printf("Number of sides: ");
		scanf("%f",&x[0]);
		printf("Side size: ");
		scanf("%f",&x[1]);
		x[2]= x[0]*x[1];
		printf("Apothem: ");
		scanf("%f",&x[3]);
		*ar = (x[2]*x[3])/2;
}
