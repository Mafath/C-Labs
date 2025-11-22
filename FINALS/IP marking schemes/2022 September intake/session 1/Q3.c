#include <stdio.h>
#include <assert.h>
float calcinterest (int FDType,float depositamount);//start function
float calctax (float annual);
void displaydetails (float annual,float taxamount);

int main ()  {

	int  type;
	float rate,amount,total;
	float annualinterest,totalpayble;
	
	
	printf("enter type for deposit (1,2,3,4): ");
	scanf("%d",&type);
	while (type!=-1){
			printf("enter amount for deposit :");
			scanf("%f",&amount);
			annualinterest =calcinterest (type,amount);
			total=calctax(annualinterest);
			totalpayble=(total-annualinterest);
			displaydetails (annualinterest,total);
			printf("\nenter type for deposit (1,2,3,4): ");
			scanf("%d",&type);
	}
	
	assert(calctax(24.0f)==4.0f);
	assert(calctax(42.0f)==2.0f);
	
	return 0;
} 
float calcinterest (int FDtype,float depositamount) {
	
	float rate;		
	if (FDtype ==1){
		rate=(float) (depositamount*16.0f)/100;
	}
	
	else if (FDtype==2){
		rate=(float) (depositamount*7.5f)/100;	
	}
	
	else if (FDtype==3){
		rate=(float) (depositamount*5.166f)/100;		
	}
	
	else if (FDtype==4){
		rate=(float) (depositamount*4.375f)/100;		
	}
		
	return rate;
}


float calctax (float annual){
	float total;
	total=(float) (annual*5)/100;
	return total;
} 
void displaydetails (float annual,float taxamount) {
	float tot=annual-taxamount;
	printf("Annual interest\tTax amount\t Amount payable\n");
	printf("%.2f \t\t %.2f \t\t %.2f ",annual,taxamount,tot);
} //end of function
 
