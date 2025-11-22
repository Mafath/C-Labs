#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 5

// Function to check if an Employee ID already exists in the file
int isEmployeeIdExists(int empId);
// Function to append new employee details to the file
void appendEmployeeDetails(int empId, char *empName, char *empNic);


int main() {
    int numEmployees = 3; // Initial number of employees
    int empId;
    char empName[50];
    char empNic[15];

    // Read existing employee data from file
    FILE *file = fopen("employee.dat", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i < numEmployees; i++) {
        fscanf(file, "%d %s %s", &empId, empName, empNic);
    }
    fclose(file);

    // Input details of new employees
    for (int i = numEmployees; i < MAX_EMPLOYEES; i++) {
        printf("Enter Employee ID: ");
        scanf("%d", &empId);
        printf("Enter Employee Name: ");
        scanf("%s", empName);
        printf("Enter NIC: ");
        scanf("%s", empNic);

        // Check if the Employee ID already exists
        if (isEmployeeIdExists(empId)) {
            printf("Employee ID already exists in the file.\n");
            i--; // Decrement i to repeat input for this employee
        }
		else{
            // Append new employee details to the file
            appendEmployeeDetails(empId, empName, empNic);
            numEmployees++; // Increment the total number of employees
        }
    }

    printf("Employee details added successfully.\n");

    return 0;
}
//
int isEmployeeIdExists(int empId) {
    FILE *file = fopen("employee.dat", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file!\n");
        exit(1);
    }

    int id;
    char name[50], nic[15];
    while (fscanf(file, "%d %s %s", &id, name, nic) == 3) {
        if (id == empId) {
            fclose(file);
            return 1; // Employee ID already exists
        }
    }

    fclose(file);
    return 0; // Employee ID does not exist
}
//
void appendEmployeeDetails(int empId, char *empName, char *empNic) {
    FILE *file = fopen("employee.dat", "a");
    if (file == NULL) {
        fprintf(stderr, "Error opening file!\n");
        exit(1);
    }

    fprintf(file, "%d %s %s\n", empId, empName, empNic);
    fclose(file);
}