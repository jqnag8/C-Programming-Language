#include <stdio.h>

/*far to celsius table*/

int main(){
	float fahr, celsius;
	int lower = 0, upper = 200, step = 20;

	fahr = lower;
	printf("Tabla de conversiones de Fahrenheit a Celsius\n");
	while(fahr <= upper){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.f\t%.2f\n", fahr, celsius);
		fahr += step;
	}
}
