#include <stdio.h>
int main ()
{
	printf("Algoritmo que muestra el mes en funcion de los numeros \n");
	int num;
	printf("Introduzca el numero deseado por favor \n");
	scanf("%i",&num);
	switch (num){
	case 1: printf("El mes es: enero \n");
		break;
	case 2: printf("El mes es: febrero \n");
		break;
	case 3: printf("El mes es: marzo \n");
		break;
	case 4: printf("El mes es: abril \n");
		break;
	case 5: printf("El mes es: mayo \n");
		break;
	case 6: printf("El mes es: junio \n");
		break;
	case 7: printf("El mes es: julio \n");
		break;
	case 8: printf("El mes es: agosto \n");
		break;
	case 9: printf("El mes es: septiembre \n");
		break;
	case 10: printf("El mes es: octubre \n");
		break;
	case 11: printf("El mes es: noviembre \n");
		break;
	case 12: printf("El mes es: diciembre \n");
		break;
	default:
		printf("Error: el numero introducido no se corresponde con ningun mes \n");
}
return 0;
}











