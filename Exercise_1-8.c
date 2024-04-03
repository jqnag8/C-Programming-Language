# include <stdio.h>

int main(){
	int tabs = 0, spaces = 0, newlines = 0;
	char c;
	while((c = getchar()) != EOF){
		if (c == ' '){
			++spaces;
		}else if (c == '\t'){
			++tabs;
		}else if (c == '\n'){
			++newlines;
		}
	}
	printf("tabs: %d, spaces: %d, newlines: %d\n", tabs, spaces, newlines);
	return 0;
}

