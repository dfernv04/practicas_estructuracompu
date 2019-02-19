#include <stdio.h>
int main ()
{
	// Este programa indica si el número leído por teclado es 3
	// Declaro las variables de mi función
	int Num;
	//Sustituyo la función ESCRIBA cadena por printf
	printf("Escribe un número: ");
	//Sustituyo la función LEA Num por scanf ( %d, &variableEntera);
	scanf("%d", &Num); //Guarda el número leído en la variable Num
	//Compruebo si el número introducido es el 3
	if (Num == 3){
	//Sustituyo la función ESCRIBA cadena por printf
	printf("El número introducido es el 3 \n");
	}
	else {
	//Sustituyo la función ESCRIBA cadena por printf
	printf("El número introducido no es el 3 \n");
	}
	//Sustituyo la función ESCRIBA cadena por printf
	printf("Fin del algoritmo \n");
return 0;
}
