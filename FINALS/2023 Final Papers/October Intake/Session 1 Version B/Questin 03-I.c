#include<stdio.h>
#include<string.h>

int main(){
	
	int l;
	char temp;
	char strArr[15];
	
	printf("Enter a text: ");
	scanf("%s", &strArr);
	
	l = strlen(strArr);
	printf("%d",l);

	printf("Original arrray\n");
	for(int i=0;i<l;i++){
		printf("%c ", strArr[i]);
	}
		
	for(int i=0;i<l/2;i++){
		for(int j=0;j<7;j++){
			temp = strArr[i];
			strArr[i]=strArr[l-1-i];
			strArr[l-1-i]= temp;
		}
	}
	
	printf("\nReversed arrray\n");
	for(int i=0;i<l;i++){
		printf("%c ", strArr[i]);
	}
	
	return 0;
}