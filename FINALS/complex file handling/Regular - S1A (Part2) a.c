//CAN USE.(with found)
#include <stdio.h>
#include <string.h>

int main() {
    char IName[20], NewIName[20];
    int Icode;
    FILE *ptr2;
    ptr2 = fopen("Items1.txt", "r");

    if (ptr2 == NULL) {
        printf("Can't Open File!\n");
        return -1;
    }
    printf("Enter check Item Name: ");
    scanf("%s", NewIName);

    int found = 0; // Flag to indicate if item is found

    while (fscanf(ptr2, "%d %s", &Icode, IName) == 2) {
        if (strcmp(NewIName, IName) == 0) {
            found = 1; // Set flag if item is found
            break;
        }
    }

    if (found) {
        printf("Item Found!\n");
        printf("Code = %d\nName = %s\n", Icode, NewIName);
    } else {
        printf("Item not found!\n");
    }

    fclose(ptr2);
    return 0;
}
