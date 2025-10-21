// Employee overtime payment calculator - tracks 5 employees' overtime hours and rates,
// calculates payments, then identifies the highest earner
#include<stdio.h>
int main() {
	
	int OTHours[5]={20,22,25,19,20};
	double OTrate[5]={0};
	int max = 0,count,emp;
	
	for(int i=0;i<5;i++) {
		printf("Enter OT rate for employee %d: ", i+1);
		scanf("%lf",&OTrate[i]);
	}
	
	printf("OTHours array\n");
	for(int j=0;j<5;j++) {
		printf("%d\t",OTHours[j]);
	}
	
	printf("\nOTrate array\n");
	for(int k=0;k<5;k++) {
		printf("%.2lf\t",OTrate[k]);
	}
	
	for(int m=0;m<5;m++) {
		count = OTHours[m]*OTrate[m];
		if (count>max) {
			max=count;
			emp = m+1;
		}
	}
	
	printf("\nEmployee who earned highest payment: %d", emp);
	
	return 0;
}
