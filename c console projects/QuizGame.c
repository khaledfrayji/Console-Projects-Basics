//What does DNA stand for?
// Deoxyribonucleic Acid
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
char name[20];
int level=0;
int score=0;
void ballon_dor();
void Css();
void Prime();
void Account_Detail();
void Option();
void Easy();
void start();
void Difficult();
void divider();
void readfile();
void history();
int main(){
  system("color 47");
    int choice;
     printf("\nEnter your name: ");
 scanf("%s",name);
   while(1){
     Option();
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

        switch(choice){
        case 1:
        system("cls");
        start();
        break;
        case 2:
        system("cls");
        printf("Score: %d\n",score);
        printf("Press any Key to continue");
        getch();
        system("cls");
        break;
        case 3:
        system("cls");
        Account_Detail();
        getch();
        break;
        case 4:
         system("cls");
            readfile();
         history();

        break;
        case 5:
        system("cls");
        exit(0);
        default:
        printf("INVALID CHOICE !!!\n");
        break;
    }
    }


}
void ballon_dor(){
    printf("\n1.Lionel Messi\n");
    printf("2.Cristiano_Ronaldo\n");
    printf("3.Ronaldinho\n");
    printf("4.Ricardo Kaka\n");
}
void Css(){
    printf("\n1.Cascading sheet style\n");
    printf("2.Cascading style sheet\n");
    printf("3.Cascading string style\n");
    printf("4.Cascading style string \n");
}
void Prime(){
 printf("\n1.  \"2\"\n");
    printf("2. \"17\"\n");
    printf("3. \"23\"\n");
    printf("4. \"25\"\n");
}
void Option(){
  system("cls");
     printf("\n1.Start Game\n");
    printf("2.Score\n");
    printf("3.Account Details\n");
    printf("4.History\n");
    printf("5.Exit\n");
}
void Account_Detail(){
    printf("\n MY ACCOUNT\n");
    divider();
    printf("\nName: %s\n",name);
    printf("Score: %d\n",score);
    printf("\nPress Any Key to continue...\n");

   }
void Easy(){
  system("color 27");
    int kaka,css,number,baseball,www,porsche,color,cola,food,ice;
    printf("\n");
printf("___________________\n");
printf("%c                  %c\n",186,186);
printf("%c        EASY      %c\n",186,186);
printf("%c__________________%c\n",186,186);

printf("A)Who is the winner of the  Ballon d'Or in 2008 ?\n");
ballon_dor();
printf("> ");
scanf("%d",&kaka);
switch(kaka) {
    case 1:
    system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("True");
    score+=5;
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
}
printf("\nPress Any Key to continue...");
getch();
system("cls");
printf("\nB)Css stands for: \n");
 Css();
 printf("> ");
scanf("%d",&css);
switch (css){
    case 1:
    system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("True");
     score+=5;
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("Fasle");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
}
printf("\nPress Any Key to continue...");
getch();
system("cls");
printf("\n C)Which of the following numbers is not Prime:\n");
Prime();
printf("> ");
scanf("%d",&number);
switch (number){
   case 1:
   system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
    printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("True");
     score+=5;
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
}
printf("\nPress Any Key to continue...");
getch();
system("cls");
 printf("\nD)In which sport was Nolan Ryan famous ?\n");
      printf("\n1.Basketball\n");
    printf("2.Golf\n");
    printf("3.Baseball\n");
    printf("4.Football\n");
    printf("> ");
    scanf("%d",&baseball);
    switch(baseball){
        case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("That's true");
     score+=5;
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
    printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nE)What does \"www\" stand for in a website browser ?\n");
    printf("\n1.World Wide Web\n");
    printf("2.Web World Wide\n");
    printf("3.Wide World Web\n");
    printf("4.Website Whole World\n");
    printf("> ");
    scanf("%d",&www);
    switch(www){
  case 1:
        system("cls");
    printf("True");
      score+=5;
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nF)Which animal can be seen on the Porsche logo ?\n");
 printf("\n1.Lion\n");
    printf("2.Leopard\n");
    printf("3.Horse\n");
    printf("4.Rabbit\n");
    printf("> ");
    scanf("%d",&porsche);
    switch(porsche){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("True");
      score+=5;
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nG)What is the rarest M&M color ?\n");
    printf("\n1.Yellow\n");
    printf("2.Brown\n");
    printf("3.Red\n");
    printf("4.Blue\n");
    printf("> ");
    scanf("%d",&color);
    switch(color){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("True");
     score+=5;
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nH)What was the first soft drink in space ?\n");
    printf("\n1.Seven Up\n");
    printf("2.Pepsi\n");
    printf("3.Moxie\n");
    printf("4.Coca Cola\n");
    printf("> ");
    scanf("%d",&cola);
    switch(cola){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("That's True");
     score+=5;
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nI)Which country invented ice cream ?\n");
    printf("\n1.South korea\n");
    printf("2.Japan\n");
    printf("3.China\n");
    printf("4.Brasil\n");
    printf("> ");
    scanf("%d",&ice);
    switch(ice){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("True");
     score+=5;
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nJ)Which is the only edible food that never goes bad ?\n");
    printf("\n1.Ramen\n");
    printf("2.Pasta\n");
    printf("3.Honey\n");
    printf("4.Tuna Steak\n");
    printf("> ");
    scanf("%d",&food);
    switch(food){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("True");
     score+=5;
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
     printf("Your score : %d",score);
     getch();
}
void start(){
    int level;
    printf("\nChoose The level: \n");
    printf("1.Easy\n");
    printf("2.Difficult\n");
    printf("3.exit\n");
    printf("> ");
    scanf("%d",&level);
    system("cls");
    switch(level){
        case 1:
        system("cls");
        Easy();
        break;
        case 2:
        system("cls");
        Difficult();
        break;
        case 3:
        break;
        default:
        printf("INVALID CHOICE !!!");
        break;
    }
}
void Difficult(){
  system("color 57");
    int speed,mane,astro,marvel,nfs,organ,guivara,blood,movie,gold;
    printf("\n");
printf("___________________\n");
printf("%c                  %c\n",186,186);
printf("%c     DIFFICULT    %c\n",186,186);
printf("%c__________________%c\n",186,186);
 printf("\nA)What is measured in \"Mickeys\" ?\n");
    printf("\n1.Wind speed\n");
    printf("2.Speed of light\n");
    printf("3.Speed of computer mouse\n");
    printf("4.Speed of sound\n");
    printf("> ");
    scanf("%d",&speed);
    switch(speed){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("True");
     score+=7;
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nB)Which player scored the fastest hat-trick in the Premier League ?\n");
     printf("\n1.Jamie vardy vs Newcastle\n");
    printf("2.Robbie Fowler vs Arsenal\n");
    printf("3.Jerman Defoe vs Wigan\n");
    printf("4.Sadio mane vs Aston villa\n");
    printf("> ");
    scanf("%d",&mane);
    switch(mane){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("True");
     score+=7;
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nC)Which anime character was sold to the circus ?\n");
     printf("\n1.Astro boy\n");
    printf("2.Tanjiro Kamado\n");
    printf("3.Guts\n");
    printf("4.Osamu Dazai\n");
    printf("> ");
    scanf("%d",&astro);
    switch(astro){
  case 1:
        system("cls");
    printf("True");
    score+=7;
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nD)What was the first Marvel movie ever made ?\n");
    printf("\n1.Batman\n");
    printf("2.Iron man\n");
    printf("3.Superman\n");
    printf("4.Spiderman\n");
    printf("> ");
    scanf("%d",&marvel);
    switch(marvel){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("True");
     score+=7;
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nE)In what year was the first Need For Speed game produced ?\n");
    printf("\n1.2008\n");
    printf("2.1998\n");
    printf("3.2005\n");
    printf("4.1994\n");
    printf("> ");
    scanf("%d",&nfs);
    switch(nfs){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("True");
    score+=7;
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nF)What is the human body's largest organ ?\n");
     printf("\n1.Stomach\n");
    printf("2.Legs\n");
    printf("3.Arms\n");
    printf("4.Skin\n");
    printf("> ");
    scanf("%d",&organ);
    switch(organ){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("False");
    break;
    case 4:
    system("cls");
    printf("True");
    score+=7;
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nG)What country was the Marxist revolutionary figure Che Guevara born in ?\n");
    printf("\n1.Chile\n");
    printf("2.Mexico\n");
    printf("3.Argentina\n");
    printf("4.Colombia\n");
    printf("> ");
    scanf("%d",&guivara);
    switch(guivara){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
     printf("That's true");
     score+=7;
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
  printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nH)What is the rarest blood type ?\n");
    printf("\n1.B-\n");
    printf("2.O-\n");
    printf("3.O+\n");
    printf("4.AB-\n");
    printf("> ");
    scanf("%d",&blood);
    switch(blood){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
    printf("False");
    break;
    case 4:
    system("cls");
    printf("True");
     score+=7;
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
    printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nI)What is the highest-grossing movie of all time? \n");
    printf("\n1.Titanic\n");
    printf("2.Avengers:Endgame\n");
    printf("3.Avatar\n");
    printf("4.The Lion King\n");
    printf("> ");
    scanf("%d",&movie);
    switch(movie){
  case 1:
        system("cls");
    printf("False");
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
    printf("That's true");
    score+=7;
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
    printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("\nJ)What element does the chemical symbol Au stand for ?\n");
     printf("\n1.Gold\n");
    printf("2.Argon\n");
    printf("3.Arsenic\n");
    printf("4.Americium\n");
    printf("> ");
    scanf("%d",&gold);
    switch(gold){
  case 1:
    system("cls");
    printf("True");
    score+=7;
    break;
    case 2:
    system("cls");
     printf("False");
    break;
    case 3:
    system("cls");
    printf("False");
    break;
    case 4:
    system("cls");
    printf("False");
    break;
    default:
    printf("INVALID CHOICE !!!\n");
    break;
    }
    printf("\nPress Any Key to continue...");
    getch();
    system("cls");
    printf("Your score : %d",score);
    getch();

}
void divider(){
    for(int i=0;i<50;i++){
        printf("-");
    }
}
void history(){
    time_t tm;
    time(&tm);
    FILE *ptr=fopen("Quiz.txt","a");
    fprintf(ptr,"%s login to the game on %s",name,ctime(&tm));
    fclose(ptr);
}
void readfile(){
    printf("\nHISTORY\n");
    divider();
    printf("\n");
    FILE *ptr=fopen("Quiz.txt","r");
    char c;
    while((c=fgetc(ptr))!=EOF){
        putchar(c);
    }
    printf("\n");
    printf("Press any Key to continue...");
    getch();
}
