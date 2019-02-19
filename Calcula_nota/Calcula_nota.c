#include <stdio.h>
//Función principal del programa
int main ()
	{
	// Este programa convierte una nota numérica a su
	// calificación correspondiente
	// Declaro las variables de mi función
	int Num;
	//Sustituyo la función ESCRIBA cadena por printf
	printf("Escribe la nota numérica: ");
	//Sustituyo la función LEA Num por scanf ( %d, &variableEntera);
	scanf("%d", &Num); //Guarda el número leído en la variable Num
	//Compruebo qué nota es para imprimir la cadena correspondiente
	if ((Num == 5) || (Num == 6)){
	//Sustituyo la función ESCRIBA cadena por printf
	printf("Aprobado \n");
	}
	else{
		if ((Num == 7) || (Num == 8)){
		//Sustituyo la función ESCRIBA cadena por printf
		printf("Notable \n");
		}
		else{
			if ((Num == 9) || (Num == 10)){
			//Sustituyo la función ESCRIBA cadena por printf
			printf("Sobresaliente \n");
			}
			else{
			//Sustituyo la función ESCRIBA cadena por printf
			printf("Suspenso \n");
			}
		}
	}

//Fin del programa
return 0;
}
