#include<stdio.h>

int main() {
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf(" ");
		}
		for(int j=5;j>=i;j--){
			if(j%2==1){
				printf("* ");
			}
			else if(j%2==0){
				printf("$ ");
			}
		}
		printf("\n");
	}
	
	return 0;
}

/*

* $ * $ *
  $ * $ *
    * $ *
      $ *
        *
        
*/