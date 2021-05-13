#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,c=0;
    printf("enter the value");
    scanf("%d",&a);
    printf("the table of %d",a);
    for(i=1;i<=10;i++){
        c=i*a;
            printf("\n%d * %d = %d\n",a,i,c);

    }

}
