#include <stdio.h>

int main(){
	int num;
	int q;
	printf("WELCOME TO MAMA CAS RESTAURANT\n");
	printf("\nPress 1 to display the menu: ");
	scanf("%d", &num);
	char *menu_array[5]= {"PoundoYam/Edinkainko Soup","Fried Rice","Amala & Ewedu Soup","Eba & Soup", "White rice & Stew"};
	int price[5] = {3200, 3000, 2500, 2000, 2500};
	if(num==1){
		
	for (int i=0; i<5; i++)
	{
		printf("\t%s\t%d\t\n",menu_array[i],price[i]);
	}
	
	}
	else{
		printf("Enter a valid response");
	}
	char *order = "What do you want to order?";
	
	switch(o)
	{
		case menu_array:
			printf("What Quantity Do you want to order: ");
			scanf("%d", &q);
			printf("Price of Order is: %d\n", price[0]*q);
			break;
			
		case menu_array[1]:
			printf("What Quantity Do you want to order: ");
			scanf("%d", &q);
			printf("Price of Order is: %d\n", price[1]*q);
			break;
		
		case menu_array[2]:
			printf("What Quantity Do you want to order: ");
			scanf("%d", &q);
			printf("Price of Order is: %d\n", price[2]*q);
			break;
			
		case menu_array[3]:
			printf("What Quantity Do you want to order: ");
			scanf("%d", &q);
			printf("Price of Order is: %d\n", price[3]*q);
			break;
			
		case menu_array[4]:
			printf("What Quantity Do you want to order: ");
			scanf("%d", &q);
			printf("Price of Order is: %d\n", price[4]*q);
			break;
	        default:
	        	printf("\n Not Available in the Menu!");
	
	}
	 
	return 0;
	
}



