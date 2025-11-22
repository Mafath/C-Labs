#include <stdio.h>

int main() {
    char firstChar, secondChar;
    int numLines;

    printf("Enter first character: ");
    scanf(" %c", &firstChar);
    printf("Enter second character: ");
    scanf(" %c", &secondChar);
    printf("Number of lines: ");
    scanf("%d", &numLines);

	for(int i=1;i<=numLines;i++){
		for(int j=numLines;j>=i;j--){
			printf(" ");
		}
		for(int j=1;j<=i*2-1;j++){
			if(j%2==1){
				printf("%c",firstChar);
			}
			else{
				printf("%c",secondChar);
			}
		}
		printf("\n");
	}
	

    return 0;
}
