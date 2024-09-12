#include<stdio.h>
int main(){

int a=10, b=20, c=30, d;
d=(a-- -10)?c--:++b;
printf("%d%d%d%d",a,b,c,d);



    return 0;
}