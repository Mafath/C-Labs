// Vowel frequency counter - analyzes a word and counts occurrence
// of each vowel (A, E, I, O, U) in both uppercase and lowercase
#include<stdio.h>
#include<string.h>
int main() {
	
	char name[100];
	char vowels[5]={'A','E','I','O','U'};
	int count[5]={0};
	int length;
	
	printf("Enter word: ");
	scanf("%s",&name);
	
	length = strlen(name);

	
	for(int i=0;i<length;i++){
		if(name[i]=='A'||name[i]=='a'){
			count[0]++;
		}
		else if(name[i]=='E'||name[i]=='e'){
			count[1]++;
		}
		else if(name[i]=='I'||name[i]=='i'){
			count[2]++;
		}
		else if(name[i]=='O'||name[i]=='o'){
			count[3]++;
		}
		else if(name[i]=='U'||name[i]=='u'){
			count[4]++;
		}
		
	}
	printf("vowel count\n");
	for(int j=0;j<5;j++){
		printf("%c : %d\n",vowels[j],count[j]);
	}
	
	
	return 0;
}