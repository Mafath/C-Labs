//header file
#include<stdio.h>
#include<assert.h>

float calcRemainingFuel(int vehicalType,float usedFuelQuota);
float calcFuelCost(int vehicalType,float usedFuelQuota);
void displayDetails(int vType,float usedFuelQuota,float remainingQuota,float cost);

//main method
int main(){
	
	int vehicalType;
	float usedFuelQuota,remainingQuota,cost;
	
	printf("Enter vehical type: ");
	scanf("%d",&vehicalType);
	
	
	while(vehicalType!=-1){
		
		printf("Enter used fuel quota: ");
		scanf("%f",&usedFuelQuota);
		
	remainingQuota=calcRemainingFuel(vehicalType,usedFuelQuota);	
	cost = calcFuelCost(vehicalType,usedFuelQuota);	
	displayDetails(vehicalType,usedFuelQuota,remainingQuota,cost);
	
	printf("Enter vehical type: ");
	scanf("%d",&vehicalType);
	}

	return 0;
}//end of main method

float calcRemainingFuel(int vehicalType,float usedFuelQuota){
	
	
	float remainingQuota,allowedFuelQuota;
	
	
	if(vehicalType==1){
		
		
		allowedFuelQuota=5;
		remainingQuota=	allowedFuelQuota-usedFuelQuota;
		
	}else if(vehicalType==2){
		
		allowedFuelQuota=20;
		remainingQuota=	allowedFuelQuota-usedFuelQuota;
		
	}else if(vehicalType==3){
		
		
		allowedFuelQuota=20;
		remainingQuota=	allowedFuelQuota-usedFuelQuota;
		
	}else if(vehicalType==4){
		
		allowedFuelQuota=30;
		remainingQuota=	allowedFuelQuota-usedFuelQuota;
	}
	
	return remainingQuota;
	
	assert(calcRemainingFuel(1,5)==0);
	assert(calcRemainingFuel(4,10)==20);
}

float calcFuelCost(int vehicalType,float usedFuelQuota){
	
	float cost,price;
	
	if(vehicalType==1){
		
		cost=usedFuelQuota*370;
		
	}else if(vehicalType==2){
		
			cost=usedFuelQuota*370;
		
	}else if(vehicalType==3){
		
			cost=usedFuelQuota*510;
		
	}else if(vehicalType==4){
		
			cost=usedFuelQuota*370;
	}
	return cost;
}

void displayDetails(int vType,float usedFuelQuota,float remainingQuota,float cost){
	
	printf("%s\t%s\t%s\t%s \n","Vehical type","Quota used","Quota Remaing","Fuel Cost");
	printf("%d\t\t%.2f\t\t%.2f\t\t%.2f \n",vType,usedFuelQuota,remainingQuota,cost);
	
}
