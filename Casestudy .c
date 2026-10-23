#include<stdio.h>
void main()
{
 int choice;
 float balance,amount;
 printf("\nEnter current amount balance:");
 scanf("%f",&balance);
 printf("\n1.Balance Inquiry");
 printf("\n2.Withdrawl");
 printf("\n3.Cash deposit");
 printf("\nEnter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
   case 1:
          printf("Current balance:%.2f",balance);
          break;
   case 2:
          printf("Enter Withdrawl amount:");   
          scanf("%f",&amount); 
          if(amount<=balance&&amount>0)
           {
            balance=balance-amount;
            printf("\nTransaction Successful");
            printf("\nRemaining balance:%.2f",balance);
           }  
          else
            printf("\nInsufficient balance"); 
          break;
   case 3:
          printf("\nEntetlr deposit amount:");    
          scanf("%f",&amount);    
          if(amount>0) 
           {
            balance=balance+amount;
            printf("\nDeposit Successful");
            printf("\nUpdated balance:%.2f",balance);
           }
          else
            printf("\nInvalid deposit amount");
   break;
   default:
          printf("\nInvalid option");         
 }
}