// Seat reservation system - manages 10 seats, allows users to reserve seats,
// handles invalid inputs and shows reserved seats (use -1 to exit)
#include <stdio.h>
#define NUM_SEATS 10

int main() {
    int seats[NUM_SEATS] = {0}; // Initializing all seats as available (0)
	
    int seatNumber;
    while (1) {
        printf("Please input the seat number (1-10): ");
        scanf("%d", &seatNumber);

        if (seatNumber == -1) {
            break; // Exit the loop if user input is -1
        } else if (seatNumber < 1 || seatNumber > 10) {
            printf("Sorry. Please input a valid seat number.\n");
            continue; // Continue the loop if the seat number is invalid
        } else if (seats[seatNumber - 1] == 1) {
            printf("Sorry. The seat %d is reserved.\n", seatNumber);
        } else {
            seats[seatNumber - 1] = 1; // Reserve the seat
        }
    }

    printf("Reserved seat numbers: ");
    for (int i = 0; i < NUM_SEATS; i++) {
        if (seats[i] == 1) {
            printf("%d ", i + 1); // Display reserved seat numbers
        }
    }
    printf("\n");

    return 0;
}
