#include<stdio.h>
#include<assert.h>

float calcRemainingFuel(int vehicleType, float usedFuelQuota);
float calcFuelcost (int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);
void testcalcRemainingFuel();

int main() {
	
	int type;
	float usedQuota,remainingQuota,fuelCost;
	
	while(1){
		printf("Enter the vehicle type: ");
		scanf("%d",&type);
		if(type==-1){
			break;
		}
		printf("Enter used fuel quota(litres): ");
		scanf("%f",&usedQuota);	
		

		remainingQuota=calcRemainingFuel(type,usedQuota);

		fuelCost=calcFuelcost(type,usedQuota);

		displayDetails(type,usedQuota,remainingQuota,fuelCost);
		
		testcalcRemainingFuel();

	}

	
	
	return 0;
}

float calcRemainingFuel(int vehicleType, float usedFuelQuota){
	float remainingQuota;
	
	if(vehicleType==1){
		remainingQuota=5-usedFuelQuota;
	}
	else if(vehicleType==2){
		remainingQuota=20-usedFuelQuota;
	}
	else if(vehicleType==3){
		remainingQuota=20-usedFuelQuota;
	}
	else if(vehicleType==4){
		remainingQuota=30-usedFuelQuota;
	}
	return remainingQuota;
}
//
float calcFuelcost (int vehicleType, float usedFuelQuota){
	float fuelCost;
	
	if(vehicleType==1){
		fuelCost=usedFuelQuota*370;
	}
	else if(vehicleType==2){
		fuelCost=usedFuelQuota*370;
	}
	else if(vehicleType==3){
		fuelCost=usedFuelQuota*510;
	}
	else if(vehicleType==4){
		fuelCost=usedFuelQuota*370;
	}
	return fuelCost;
}
//
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost){
	printf("\nVehicle type\tQuota used\tQuota remaining\t\tFuel cost\n");
	printf("%7d %10.0f litres %10.0f litres %20.2f\n\n",vType,usedFuelQuota,remainingQuota,cost);
}
//
void testcalcRemainingFuel(){
	//test case 1
	float expected1=5-3;
	float actual1=calcRemainingFuel(1,3);
	assert(expected1==actual1);

	//test case 1
	float expected2=20-15;
	float actual2=calcRemainingFuel(3,15);
	assert(expected2==actual2);
	
	
	printf("All test cases passed succesfully\n");
}