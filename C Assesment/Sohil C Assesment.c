#include<stdio.h>
#include<stdbool.h>

void menu()
{
	printf("\n\n1. Icecream\t\tPrice = 80 rs/Piece");
	printf("\n2. Cold COCO\t\tPrice = 100 rs/Piece");
	printf("\n3. GulabJamun\t\tPrice = 50 rs/Piece");
	printf("\n4. Rasgulla\t\tPrice = 40 rs/Piece");
	printf("\n5. Mava Malai\t\tPrice = 90 rs/Piece");
}

main()
{
	printf("\t\t\t-:WELCOME TO OUR FOOD COURT:-");
	
	menu();
	
	bool status =true;
	
	while (status)
	{
		int icecream;
		int cold_coco;
		int gulab_jamun;
		int ras_gulla;
		int mava_malai;
		
	int choice;
	
	printf("\n\nPlease Enter Your Choice. :- ");
	scanf("%d",&choice);
	
	if (choice == 1)
	{
		printf("\nYou choose Icecream.");
	}
	else if (choice == 2)
	{
		printf("\nYou choose Cold COCO.");
	}
	else if (choice == 3)
	{
		printf("\nYou choose GulabJamun.");
	}
	else if (choice == 4)
	{
		printf("\nYou choose Rasgulla.");
	}
	else if (choice == 5)
	{
		printf("\nYou choose Mava Malai.");
	}
	
	int quantity;
	
	printf("\n\nEnter Your Quantity :- ");
	scanf("%d",&quantity);
	
	switch (choice)
	{
		case 1:
			printf("Your Bill is :- %d RS",icecream = 80 * quantity);
			break;
			
		case 2:
			printf("Your Bill is :- %d RS",cold_coco = 100 * quantity);
			break;
			
		case 3:
			printf("Your Bill is :- %d RS",gulab_jamun = 50 * quantity);
			break;
			
		case 4:
			printf("Your Bill is :- %d RS",ras_gulla = 40 * quantity);
			break;
			
		case 5:
			printf("Your Bill is :- %d RS",mava_malai = 90 * quantity);
			break;
			
		default:
			printf("We Don't Have");
	}
	
	
	printf("\n\t\t\t-:.....Did You Want Anymore.....:-");
	
	int i;
	
	printf("\n Yes ! Press :- 1");
	printf("\n No ! Press :- 2\n");
	scanf("%d",&i);
	
	if (i == 1)
	{
		menu();
	}
	else if (i == 2)
	{
		printf("THANK YOU FOR COMMING");
		status = false;
	}
	else
	{
		printf("Invalid Input");
	}
	
	int total = 0;
	
	total = icecream + cold_coco + gulab_jamun + ras_gulla + mava_malai;
	
	printf("\nTHE TOTAL OF YOUR BILL IS = %d",total); 
	
	}
}
