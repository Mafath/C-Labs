#include<stdio.h>
#include<string.h>
int main() {
	
	char strings[20];
	
	printf("Enter a text: ");
	scanf("%s",&strings);
	int length=strlen(strings);
	
//	printf("%d\n",length);
	
	printf("\nOriginal Array\n");
	for(int i=0;i<length;i++){
		printf("%c ",strings[i]);
	}
	
	printf("\nReversed Array\n");
	for(int i=length-1;i>=0;i--){
		printf("%c ",strings[i]);
	}
	
	return 0;
}