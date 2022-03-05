// Examen 1 programacion II

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>

void menu(void);
void ec2grado(void);
void volumenEsf(void);
void MRUV(void);

main(){
	menu();
}

void menu(void)
{
	int opcion;
	printf("\n\t 1. Calcular las raices de un polinomio \n");
	printf("\n\t 2. Calcular el volumen de una esfera \n");
	printf("\n\t 3. Calcular el desplazamiento de un movil en MRUV \n");
	printf("\n\t Seleccione una opcion: \n\t ");
	scanf ("%d", &opcion);
	switch (opcion)
	{
		case 1:
			system("cls");
			ec2grado ();
		break;
		case 2:
			system("cls");
			volumenEsf ();
		break;
		case 3:
			system("cls");
			MRUV ();
		break;		
		default: 
			printf("\n\t Opcion no valida \n"); 
		break;
	}
}


void ec2grado(void){
		  
	 float a, b, c, disc, x1, x2, xi, xr;
	
		   printf("\n\t\tCalculando las raices de un polinomio");
		   printf("\n\t\t_________________________________________\n\n\n");
		   printf("\t\t\tEscribe el valor de a --> ");
		   scanf("%f", &a);
		   while(a==0){
		   printf("\t\tEl valor de a no puede ser 0 ingrese el valor de nuevo --> ");
		   scanf("%f", &a);
		   }
		   printf("\t\t\tEscribe el valor de b --> ");
		   scanf("%f", &b);
		   printf("\t\t\tEscribe el valor de c --> ");
		   scanf("%f", &c);
		   
			disc=pow(b, 2.0)-4*a*c;
		   if(disc>0.0){
		       printf("\t\t\tLas dos raices son reales");
		       x1=((-b+sqrt(disc))/(2.0*a));
		       x2=((-b-sqrt(disc))/(2.0*a));
		       printf("\n\t\t\tx1=%.2f   x2=%.2f", x1, x2);
		   }
		   else{
		       if(disc==0.0){
		           x1=(-b)/(2.0*a);
		           printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", x1);
		       }
		       else{
		           xr=(-b/(2.0*a));
		           xi=(sqrt(-disc)/(2.0*a));
		           printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f", xr, xi);
		       }
		   }

				
}

void volumenEsf(void){
	float R, V;
	float pi = 3.141592654;
	
		   printf("\n\t\tCalculando el volumen de una esfera");
		   printf("\n\t\t_________________________________________\n\n\n");
		   printf("\t\t\tEscribe el valor del radio --> ");
		   scanf("%f", &R);
		   while(R<=0){
		   printf("\t\tEl radio no puede ser menor o igual a 0 ingrese el valor de nuevo --> ");
		   scanf("%f", &R);
		   }
	
		   V = (4 * pi * pow(R,3.0))/3;
		   
		   printf("\t\t\tEl volumen de la esfera es: %.2f",V);
		   

}

void MRUV(void){
	float x, v, t, a, Vf;
	
		   printf("\n\t\tCalculando el desplazamiento de un movil en MRUV");
		   printf("\n\t\t___________________________________________________\n\n\n");
		   printf("\t\t\tEscribe el valor del Desplazamiento Inicial --> ");
		   scanf("%f", &x);
		   printf("\t\t\tEscribe el valor de la Velocidad Inicial --> ");
		   scanf("%f", &v);
		   printf("\t\t\tEscribe el valor del Tiempo de desplazamiento --> ");
		   scanf("%f", &t);
		   printf("\t\t\tEscribe el valor de la Aceleracion --> ");
		   scanf("%f", &a);
		   
		   Vf = x + v + (a * 0.5 * pow(t,2.0));
		    
		   printf("\n\t\t\tEl desplazamiento del movil fue de: %.2f",Vf);
}
