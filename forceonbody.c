//in this we have to calculate the forceof attraction  on a body of a mass entred by user  
#include<stdio.h>
float force(float mass);
int main()
{
    float acceleration =9.8;
    float mass;
    printf("enter the mass of the object \n");
    scanf("%f",&mass);
printf("the force of attraction on the body is %f",force(mass));


return 0;
}
float force(float mass)
{
    float result,accleration=9.8;
    result=mass*accleration;
    return result;
}