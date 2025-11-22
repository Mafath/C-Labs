#include <stdio.h>

int main() {
    int empID, nempID;
    char empName[20], NIC[20], nempName[20], nNIC[20];
    FILE *ptr2;
    ptr2 = fopen("employee.dat", "a+");
    if (ptr2 == NULL) {
        printf("Can't read File!\n");
        return 1;
    }
    int exists = 0;
    for (int i = 0; i < 2; i++) {
        exists = 0; 
        printf("Enter Employee ID: ");
        scanf("%d", &nempID);
        rewind(ptr2); 
        while (fscanf(ptr2, "%d\t%s\t%s", &empID, empName, NIC) == 3) {
            if (empID == nempID) {
                printf("Employee ID already exists!\n");
                exists = 1; 
                i--;
                break;
            }
        }
        if (!exists) {
            printf("Enter Name: ");
            scanf("%s", &nempName);
            printf("Enter NIC: ");
            scanf("%s", &nNIC);
            // Write the new employee record to the file
            fprintf(ptr2, "%d\t%s\t%s\n", nempID, nempName, nNIC);
        }
    }
    fclose(ptr2);
    return 0;
}