#include<stdio.h>
int main()
{
int a;
float b;
float kilometertofeet= 3280.8399;
float kilometertoinches= 39370.07899;
float kilometertomiles= 0.6213;
float kilometertonaut= 0.5399;
float kilogramtopounds= 2.2046;
char input;

while (1)
{
printf("\n\npress q to quit\n\n1.kilometertofeet\n\n 2.kilometertoinches\n\n3.kilometertomiles\n\n 4.kilometertonaut\n\n 5.kilogramtoponds \n\n");
    scanf("%c",&input);
    printf("the entered input is %c \n\n",input);


switch (input)
{
case 'q':
    printf("quitinng the program:");
    goto end ;
    break;
    case '1':
    printf("enter the first no which is in first quantity :");
    scanf("%d",&a);
    b=a*kilometertofeet;
    printf("%d kilometer is %0.3f in feet:",a,b);
    break;
 case '2':
    printf("enter the first no which is in first quantity :");
    scanf("%d",&a);
    b=a*kilometertoinches;
    printf("%d kilometer is %0.3f in inches:",a,b);
    break;
     case '3':
    printf("enter the first no which is in first quantity :");
    scanf("%d",&a);
    b=a*kilometertomiles;
    printf("%d kilometer is %0.3f in miles:",a,b);
    break;
     case '4':
    printf("enter the first no which is in first quantity :");
    scanf("%d",&a);
    b=a*kilometertonaut;
    printf("%d kilometer is %0.3f in naut:",a,b);
    break;
     case '5':
    printf("enter the first no which is in first quantity :");
    scanf("%d",&a);
    b=a*kilogramtopounds;
    printf("%d kilogram is %0.3f in pound:",a,b);
    break;
     
    

default:
printf("\n\nyou have entred wrong no  ");
break;
    end :
    printf("\n\nwell try babe ");

}

}
return 0;
}