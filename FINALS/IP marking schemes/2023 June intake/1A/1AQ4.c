#include<stdio.h>

int main(void){
	
	// Open the text file for writing
	FILE *file;
	file = fopen("pizza.txt", "w");
	
	if ( file == NULL ){  // check if the text file created successfully
		printf("Error, Creating the text file\n");
		return -1;
	}
	
	// Declare variables
	int i, orderNo, noOfPizza, price;
	float totalAmount;
	
	// Get the orderNo, noOfPizza and price for 4 Pizzas
	for (i = 0; i < 4; i++){
		printf("Pizza %d of 4:\n", i+1);

		printf("  Enter Order Number : ");
		scanf("%d", &orderNo);

		printf("  Enter Number of Pizzas : ");
		scanf("%d", &noOfPizza);

		printf("  Enter Price of One Pizza : ");
		scanf("%d", &price);
		
		// Write the data to the text file
		fprintf(file, "%d  %d   %d\n", orderNo, noOfPizza, price);
	}
	
	fclose(file); // close the text file
	
	// Reopen the text file for reading
	file = fopen("pizza.txt", "r");
	
	if ( file == NULL ){ // check if the text file opened successfully
		printf("Error, Opening the text file\n");
		return -1;
	}
	
	printf("\n\nOrder No.\tTotal Amount\n");
	
	while(fscanf(file, "%d %d %d", &orderNo, &noOfPizza, &price) == 3){
		
		// Calculate the Total Amount
		totalAmount = (float)price * noOfPizza; 
		
		// Apply 10% discount if Total above Rs. 10000
		if (totalAmount > 10000){
			totalAmount -= totalAmount * 0.1;
		}
		
		// Display each respective order no
		printf("%-15d  %.2f\n", orderNo, totalAmount);
	}
	
	fclose(file); // close the text file
	
	return 0;
}
