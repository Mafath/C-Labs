// Employee overtime payment calculator - tracks 5 employees' overtime hours and rates,
// calculates payments, then identifies the employee with lowest earnings
#include<stdio.h>
int main(){
	
	int OTHours[5]={30,35,40,25,25};
	float OTRate[5];
	
	float count, min=__FLT_MAX__;
	int employee;
	
	
	for(int i=0;i<5;i++){
		printf("Enter rate of employee %d: ",i+1);
		scanf("%f", &OTRate[i]);
	}
	
	for(int i=0;i<5;i++){
		count = OTHours[i]*OTRate[i];
		if(count<min){
			min=count;
			employee=i+1;
		}
	}



	printf("\nOTHours array\n");
	for(int i=0;i<5;i++){
		printf("%d",OTHours[i]);
		if(i!=4){
			printf(", ");
		}
	}
	
	printf("\nOTrate array\n");
	for(int i=0;i<5;i++){
		printf("%.2f",OTRate[i]);
		if(i!=4){
			printf(", ");
		}
	}	
	
	printf("\nEmployee who earned lowest payment: %d", employee);
	return 0;
}