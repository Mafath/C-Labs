#include<stdio.h>
int main(void)
{
	FILE *loy;
	loy = fopen("loyalty.txt" , "r+");
	
	int num[5]  , newNum , count = 0;
	char name[50] , newName[50];
	int i  ,j , k;
	
	//Checking File
	if(loy == NULL)
	{
		printf("File Not Open....");
		return -1;
	}
	
	//reading The file	
	j = 1;
	fscanf(loy , "%d %s" , &num[0] , name );
	while(!feof(loy))
	{
		fscanf(loy , "%d %s" , &num[j] , name );
		j++;
	}
	
	//Getting Input For Loyalty Number
	for(k=0 ; k<5 ; k++)
	{
		printf("Enter Loyalty Number : ");
		scanf("%d" , &newNum);
	
		//Checking If Number Is already Exist
		for(i = 0 ; i <= j ; i++)
		{
			if(num[i] == newNum )
			{
				printf("****Number Is alrady exist**\n");
				printf("****************************\n");
				count = 1;
				break;
			}
			else
				count = 0;
			
		}
		
		if(count == 1)
			k--;
		else
		{
			printf("Enter Name : ");
			scanf("%s" , newName);
			
			fprintf(loy , "%d  %s\n" , newNum , newName);
		}
			
	}
	
	fclose(loy);
	
	return 0;
}
