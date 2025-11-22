#include<stdio.h>
int main (void)
{
	int pizza_typ , num;
	char size ;
	char card , loy , online;
	float price , dis , tot;

	printf("Enter Pizza Type : ");
	scanf("%d" , &pizza_typ);

	while(pizza_typ != -1)
	{
	

		if(pizza_typ == 1)
		{
	    printf("Enter Pizza Size :");
		scanf(" %c" , &size);
			switch(size)
			{
				case 'L':
				printf("Input the number of pizzas :");
		        scanf("%d" , &num);
				price = price + (float) (1720 * num) ;
				break;
				case 'M':
				printf("Input the number of pizzas :");
		        scanf("%d" , &num);
				price = price + (float) (975 * num) ;
				break;
				default:
				printf("Invalid Size\n");
			}

		}
		else if(pizza_typ == 2)
		{
		  printf("Enter Pizza Size :");
		  scanf(" %c" , &size);
			switch(size)
			{
				case 'L':
				printf("Input the number of pizzas :");
		        scanf("%d" , &num);
				price = price + (float) (1820 * num) ;
				break;
				case 'M' :
				printf("Input the number of pizzas :");
		        scanf("%d" , &num);
				price = price + (float) (1000 * num) ;
				break;
				default:
				printf("Invalid Size\n");
			}

		}
		else{
		printf("Invalid Pizza Type \n");
	    }
		
		
		printf("Enter Pizza Type : ");
		scanf("%d" , &pizza_typ);
	}

	printf("\n*****************\n");




		printf("Are You paying by credit card (y/n) :");
		scanf(" %c" , &card);
		
		printf("Are You a Loyalty Member (y/n) :");
		scanf(" %c" , &loy);
		
		printf("Is this an Online Order (y/n) :");
		scanf(" %c" , &online);
		
		if((card=='y' || card=='Y') && (loy=='y' || loy=='Y') && (online=='y' || online=='Y')){
			dis= 0.2f;
		}
		
		else if((card=='y' || card=='Y') && (loy=='y' || loy=='Y') && (online=='n' || online=='N')){
		   dis= 0.2f;	
		}
		
		else if((card=='y' || card=='Y') && (online=='y' || online=='Y') && (loy=='n' || loy=='N')){
		   dis= 0.2f;	
		}
		
		else if((loy=='y' || loy=='Y') && (online=='y' || online=='Y') && (card=='n' || card=='N')){
		   dis= 0.2f;	
		}
		
		else if((card == 'y' || card == 'Y') && (online=='n' || online=='N') && (loy=='n' || loy=='N')){
		   dis=0.2f; 	
		}
	    
		   	
		else if((loy== 'y' || loy == 'Y') && (card == 'n' || card == 'N') && (online=='N' || loy=='n')){
		   dis =0.15f;	
		}
		
		
		else if((online == 'y' || online == 'Y') && (loy== 'n' || loy == 'N') && (card == 'n' || card == 'N')){
		  dis =0.05f;	
		}
		
		else {
		  dis = 0.0f;	
		}
			
		tot = price - (price*dis);
		
		printf("\n Bill Ammount : %.2f \n" , price);
		printf(" Discount Ammount : %.2f \n" , (price*dis));
		printf(" Net Ammount : %.2f \n" , tot);

return 0;
}
