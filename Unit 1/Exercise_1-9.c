#include <stdio.h>

int main(){
	int spaces;
	char c;

	while ((c = getchar()) != EOF){
		if (c == ' '){
			++spaces; // comienza a contar los espacios hasta que se ingrese otro caracter
		}else {
			spaces = 0;
		}
		if (spaces <= 1) // el input se copia al outpur solo si 'spaces' es menor o igual a 1 para asegurnos de imprimir el string sin espacios demas
			putchar(c);
	}
	return 0;
}
