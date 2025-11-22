#include<stdio.h>
int main() {

//01
	for(int i=1;i<=5;i++){   //1-6 okkoma mehemmai me line eka
		for(int j=1;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
//02
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n\n");	
//03
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n");	
//04
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			printf("%c ",j+64);
		}
		printf("\n");
	}
	printf("\n\n");
//05
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			printf("%c ",i+96);
		}
		printf("\n");
	}
	printf("\n\n");	
//06
	for(int i=1;i<=5;i++){
		for(int j=5;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");	
//07
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
//08
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",j+64);
		}
		printf("\n");
	}
	printf("\n\n");
//09
	for(int i=5;i>=1;i--){
		for(int j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
//10
	for(int i=1;i<=5;i++){
		for(int j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
//11
	for(int i=5;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
//12
	for(int i=5;i>=1;i--){
		for(int j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
//13
	for(int i=5;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("%c ",j+64);
		}
		printf("\n");
	}
	printf("\n\n");
	
	
	return 0;
}


/*
//01
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

//02
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

//03
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

//04
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

//05
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e

//06
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1

//07
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

//08
A
A B
A B C
A B C D
A B C D E

//09
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

//10
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

//11
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

//12
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

//13
A B C D E
A B C D
A B C 
A B 
A
*/