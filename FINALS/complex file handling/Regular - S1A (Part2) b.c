//CAN USE.(without found)//use this
#include <stdio.h>
#include <string.h>

int main() {
    char IName[20], NewIName[20];
    int Icode;
    FILE *ptr2;
    ptr2 = fopen("Items.txt", "r");

    if (ptr2 == NULL) {
        printf("Can't Open File!\n");
        return -1;
    }
    printf("Check Item Name: ");
    scanf("%s", NewIName);

    while(fscanf(ptr2,"%d %s",&Icode,&IName)!=EOF) {
        if (strcmp(NewIName, IName)==0){
            break;
        }
    }

    if (strcmp(NewIName,IName)==0){
        printf("Item Found!\n");
        printf("Code = %d\nName = %s\n",Icode,NewIName);
    }
	else{
        printf("item not found!\n");
    }

    fclose(ptr2);
    return 0;
}