#include <stdio.h>
#include <stdlib.h>
void catering();
void hotel();
void room();
void laundry();
void emergency();
int main(){     // MAIN FUNCTION
	int i=0;

	time_t t;
	time(&t);
   hotel();
   printf("\n\n\t*******THANK YOU*******\n");
   printf("\n\tFOR TRUSTING OUR SERVICE\n\n\t");
        for(i=0;i<60;i++){
		printf("-");}
	    printf("\n\tCurrent date and time : %s\t",ctime(&t));
	    for(i=0;i<60;i++)
		printf("-");
		printf("\n");
   return 0;}

   hotel(){
       int num;
    system("cls");
		printf("-");
		printf("\n");
		printf("   ******************************  |SUMMER STREET HOTEL SYSTEM|  ***************************** \n");
		printf("-");
		printf("\n");
		printf("\t\t ****What do you want to do?****");
		printf("\n");
		printf(" \n\t1.Book a room");
		printf("\n\t------------------------");
		printf(" \n\t2.Catering services");
		printf("\n\t----------------------------------");
		printf(" \n\t3.Laundry Services");
		printf("\n\t-----------------------------------");
		printf(" \n\t4.Report emergency");
		printf("\n\t-----------------------------------");
		printf(" \n\t5.Exit");
		printf("\n\t-----------------");
		printf("\n");
		printf("\n\tEnter your choice:");
		scanf("%d",&num);

		if(num==1){
            room();
            int choice;
            printf("\n\n\tPress 1 to return to main menu..or 0 to exit: ");
            scanf("%d",&choice);
            if(choice==1)
                hotel();
		}
		else if(num==2){
            catering();
            int choice;
            printf("\n\n\tPress 1 to return to main menu..or 0 to exit: ");
            scanf("%d",&choice);
            if(choice==1)
                hotel();
		}
		else if(num==3){
            laundry();
             int choice;
            printf("\n\n\tPress 1 to return to main menu..or 0 to exit: ");
            scanf("%d",&choice);

            if(choice==1)
                hotel();
		}

		else if(num==4){
            emergency();
             int choice;
            printf("\n\n\tPress 1 to return to main menu..or 0 to exit: ");
            scanf("%d",&choice);
            if(choice==1)
                hotel();
		}
		else if(num==5){
            exit(0);
		}
		else{printf("\n\tYou Entered an invalid number!!..Try again");
		hotel();
		 int choice;
            printf("\n\n\tPress 1 to return to main menu..or 0 to exit: ");
            scanf("%d",&choice);
            if(choice==1)
                hotel();
		}}


void room(){
    system("cls");
    int room1;
    printf("\n\t*************|ROOM BOOKING|************\n");
printf("\n\tHow many rooms do you want to book?\n");
printf("\n\t1.Single Room");
printf("\n\t--------------");
printf("\n\t2.Two bed Room");
printf("\n\t----------------");
printf("\n\t3.Three bed Room");
printf("\n\t-----------------\n");
printf("\n\tEnter your choice: ");
scanf("%d",&room1);
int price1=4000.00;
int price2=7000.00;
int price3=10000.00;
if(room1==1){
printf("\n\tThe cost for Single Room is ksh %d.00\n",price1);}
else if(room1==2){
printf("\n\tThe cost for Two Bed Room is ksh %d.00\n",price2);}
else if(room1==3){
printf("\n\tThe cost for Three Bed Room is ksh %d.00\n",price3);}
int choice3;
printf("\n\tDo you wish to proceed?\n\t1.YES\n\t2.NO\n\tEnter your choice: ");
scanf("%d",&choice3);

    if(choice3==1)
printf( "\n\tYou have been allocated the room");
else{printf("\n\t...OK..Thank you");}

}

void catering(){
    int food;
    system("cls");
printf("\n\n\t***********|FOOD MENU|**************\n");
printf("\n\t  1.Mushroom Pizza   :Ksh.1050\n\t  2.Meat stew        :Ksh.650\n\t  3.Rice and Chicken :Ksh.700\n\t  4.Black Coffee     :Ksh.350\n\t  5.Lemon Juice      :Ksh.550\n");
printf("\n\tMake an order by entering your choice: ");
scanf("%d",&food);
if(food==1){printf("\n\tYour Mushroom pizza will be ready soon.");}
else if(food==2){printf("\n\tYour Meat Stew will be ready soon.");}
else if(food==3){printf("\n\tYour Rice and Chicken will be ready soon.");}
else if(food==4){printf("\n\tYour Black Coffee will be ready soon.");}
else if(food==5){printf("\n\tYour Lemon Juice will be ready soon.");}
else{printf("\n\tYou entered an invalid choice.");}

}
void laundry(){
    system("cls");
    int clothes;
    int price1=400;
    printf("\n\n\t***********|LAUNDRY SERVICES|**************\n");
    printf("\n\n\tHow many kg of clothes do you have? :");
    scanf("%d",&clothes);
    price1=clothes*price1;
    int choice2;
    printf("\n\n\tThe price is ksh %d.00\n",price1);
printf("\n\tDo you wish to proceed?\n\t1.YES\n\t2.NO\n\tEnter your choice: ");
scanf("%d",&choice2);

    if(choice2==1)
printf( "\n\t...Your clothes will be taken soon.");
else if (choice2==2){printf("\n\t...OK..Thank you");}
else{printf("You entered an invalid choice");}
}
void emergency(){
    int emergency;
    system("cls");
    printf("\n\t*************|EMERGENCY SERVICES|*****************\n\n");
    printf("\n\t1.Illness and Epidemics emergency situation.\n\t2.Accident emergency situation.\n\t3.Fire Threat emergency situation.\n\t4.Vandalism.");
    printf("\n\n\tEnter your emergency:");
    scanf("%d",&emergency);
    printf("\n\n\tYour problem will be attended to in a few minutes.");

}
