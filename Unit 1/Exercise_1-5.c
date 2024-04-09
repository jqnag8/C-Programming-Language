#include <stdio.h>
#define STEP 20
#define INIT 300
int main(){
	int fahr;

	for (fahr = INIT; fahr >= 0; fahr -= STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	return 0;
}
