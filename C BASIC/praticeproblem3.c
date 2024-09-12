/*in this program we have to check whether a student have passed the exam or not 
and the condition are that he has minimun 33% marks in all the 3 subject and 50 % marks in total */  
#include<stdio.h>
int main(){
    int physics , chemistry, maths ;
    int total;
    printf("enter the marks in physics \n");
    scanf("%d",&physics);
     printf("enter the marks in chemistry \n");
    scanf("%d",&chemistry);
     printf("enter the marks in maths \n");
    scanf("%d",&maths );
    total=physics+maths+chemistry/3;
    if (total<50 || physics<33 || maths<33 || chemistry<33)
    {
        printf("you are passed");
    }
    else {
        printf("you are failed");
    }
return 0;
}
