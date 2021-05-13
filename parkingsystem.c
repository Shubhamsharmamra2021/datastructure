#include<stdio.h>
#include<conio.h>
int menu();
void delete();
void showdata();
void car();
void rikshaw();
void cycle();
void bus(); 
int nocar=0,nob=0,noc=0,nor=0,amount=0,countv=0;
void main()
{  while(1)
   { 
    switch(menu())
    {
        case 1:
             bus();
             break;
        case 2:
             car();
             break;
        case 3:
             rikshaw();
             break;
        case 4:
             cycle();
             break;
        case 5:
              showdata();
              break;
        case 6:
              delete();
              break;
        
        default:
            printf("invalid choice")  ;    

    }
   getch();
}
}
int menu(){
    int ch;
   printf("\n 1 enter bus");
   printf("\n2 enter car");
   printf("\n3 enter rikhaw ");
   printf("\n4 enter cycle");
   printf("\n5 enter showdata"); 
   printf("\n6 enter delete");
   printf("\n4 enter your choice :");
   scanf("%d",&ch);
   return(ch);
}
void showdata(){
   printf("\n bus:",nob);
   printf("\n car:",nocar);
   printf("\n rikhaw: ",nor);
   printf("\n cycle:",noc);
   printf("\n no of vehicle:" ,countv); 
   printf("\n amount:",amount);    
}
void delete()
{
    nob=0;
    noc=0;
    nocar=0;
    nor=0;
    amount=0;
    countv=0;
}
void car()
{
    nocar++;
    amount =amount+50;
    countv++;
}
void bus()
{
    nob++;
    amount =amount+100;
    countv++;
}
void cycle()
{
    noc++;
    amount =amount+10;
    countv++;
}
void rikshaw()
{
     nor++;
    amount =amount+20;
    countv++;

}