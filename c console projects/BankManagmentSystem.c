// Bank Management System

#include<stdio.h> //printf(),scanf()
#include<time.h> //time(),ctime()
#include<stdlib.h> //exit(0),system()
#include<conio.h> //getch()
 char name[20];
 int dip_amt, amt=10000, acc_no;
 int trans_amt;
 int with_amt;
 int count=0;
void menu();
void deposit_money();
void  withdraw_money();
void  transfer_money();
void  account_details();
void transaction_details();
void  last_details();
void divider(){
    for(int i=0;i<50;i++){
        printf("-");
    }
}
int main(){
    int choice;
    printf("Enter your name: ");
    gets(name);
    printf("Enter your account number: ");
    scanf("%d",&acc_no);
    while(1){
    menu();
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        system("cls");
        deposit_money();
        break;
        case 2:
         system("cls");
        withdraw_money();
        break;
        case 3:
         system("cls");
        transfer_money();
        break;
        case 4:
         system("cls");
        account_details();
        break;
        case 5:
         system("cls");
        transaction_details();
        break;
        case 6:
         system("cls");
        last_details();
        exit(0);
        default:
        printf("INVALID CHOICE !!! \n");
        break;
    }
    }
}
void menu(){
    printf("MAIN MENU\n");
    divider();
    printf("\n1.Deposit Money\n");
    printf("2.WithDraw Money\n");
    printf("3.Transfer Money\n");
    printf("4.Account Details\n");
    printf("5.Transaction Details\n");
    printf("6.Exit\n");
}

void  deposit_money()
{
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt","a");
    printf("DEPOSITING MONEY \n");
    divider();
    printf("\nEnter the amount: ");scanf("%d",&dip_amt);
    amt+=dip_amt;
    printf("MONEY DEPOSITED\n");
    printf("CURRENT BALANCE: %d\n",amt);
    printf("Press any Key to continue...");
    fprintf(ptr,"%d had been deposited from your account \n ",dip_amt);
    fprintf(ptr,"Date /time of transaction %s ",ctime(&tm));
    count++;
    getch();
    fclose(ptr);
}
void  withdraw_money(){
      time_t tm;
    time(&tm);
     FILE *ptr = fopen("Account.txt","a");
  printf("WITHDRAW MONEY \n");
  divider();
  printf("\nEnter the amount : "); scanf("%d",&with_amt);
  if(amt < with_amt){
    printf("INSUFFICIENT BALANCE\n");
  }
  else{
  amt-=with_amt;
  printf("MONEY WITHDRAWN \n");
  printf("CURRENT BALANCE: %d\n",amt);
  fprintf(ptr,"\n%d had been withdrawn from your account \n ",with_amt);
   fprintf(ptr,"Date/Time of transaction %s\n ",ctime(&tm));
   count ++;
   fclose(ptr);
   }
   printf("Press any Key to continue...");
   getch();
}
void  transfer_money(){
    int ac;
    time_t tm;
    time(&tm);
     FILE *ptr = fopen("Account.txt","a");
printf("TRANSFERRING MONEY\n");
divider();
printf("\nEnter the amount : ");
scanf("%d",&trans_amt);
printf("Enter the account number in which you want to transfer the money : ");
scanf("%d",&ac);
if(amt<trans_amt){
    printf("You don't have sufficient balance \n");
}
else{
    amt-=trans_amt;
    printf("Money transferred successfully\n");
    printf("Current balance %d\n",amt);
     fprintf(ptr,"%d had been transferred from your account  to %d \n ",trans_amt,ac);
       fprintf(ptr,"Date/Time of transaction %s \n",ctime(&tm));
     count ++;
}
fclose(ptr);
printf("Press any Key to continue...\n");
getch();

}
void  account_details(){
printf("ACCOUNT DETAILS\n");
divider();
printf("\nName: %s\n",name);
printf("Account number: %d\n",acc_no);
printf("Total balance = %d\n",amt);
printf("Number of transaction made through your account : %d\n",count);
printf("Press any Key...");
getch();
}
void transaction_details() 
{
    
 FILE *ptr;
 ptr = fopen("Account.txt","r");
  printf("\nTRANSACTION DETAILS\n");
 divider();
 printf("\n");
 char c;
 while( (c = fgetc(ptr)) != EOF)
 printf("%c",c);
 printf("Press any Key to continue...");
 getch();

}
void  last_details()
{
    printf("ACCOUNT DETAILS\n");
    divider();
printf("\nName: %s\n",name);
printf("Account number: %d\n",acc_no);
printf("Current balance = %d\n",amt);
printf("Press any Key...");
getch();
}