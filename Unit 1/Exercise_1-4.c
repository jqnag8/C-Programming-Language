#include <stdio.h>

/*far to celsius table*/

int main(){
	float fahr, celsius;
	int lower = 0, upper = 200, step = 20;

	celsius = lower;
	printf("Tabla de conversiones de Celsius a Fahrenheit\n");
	while(celsius <= upper){
		fahr = (celsius * (9.0 / 5.0)) + 32.0;
		printf("%.0f\t%.0f\n", celsius, fahr);
		celsius += step;
	}
}
