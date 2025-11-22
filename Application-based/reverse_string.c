/*
 * reverse_string.c
 * Reads a single word, prints its length and characters in original
 * and reversed order.
 */
#include<stdio.h>
#include<string.h>

int main() {
    
    	
    char strings[20];
    char temp;

    printf("Type your word: ");
    scanf("%s",&strings);
    
    int length = strlen(strings);
    printf("length is: %d\n",length);
    
    printf("Original array\n");
    for(int i=0;i<length;i++){
        printf("%c ",strings[i]);
    }
    
    printf("\nReversed array\n");
    for(int i=length-1;i>=0;i--){
        printf("%c ",strings[i]);
    }
    
    return 0;
}
