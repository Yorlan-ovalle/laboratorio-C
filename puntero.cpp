#include<stdio.h>

int main(){
	
int a=5;
int *puntero= &a;

printf("el valor de a es: %d\n", a);

printf("el vaalor de la direccion de a es: %d\n", &a);

printf("el valor almacenado en la direccion de a es: %d\n",puntero);

printf("el valor que contiene la direccion de a es: %d\n",*puntero);
}
