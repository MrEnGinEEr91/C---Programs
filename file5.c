#include<stdio.h>
int main(){
     float p,r,t;
     //The values of Principal
     printf("Enter Principal Value: ");
     scanf("%f",&p);
     //The Value of Rate
     printf("Enter Rate Value: ");
     scanf("%f",&r);
     //The value of Time
     printf("Enter Time Value: ");
     scanf("%f",&t);
     //The Simple Intrest
     float ans=(p*r*t)/100;
     printf("rate of intrest = %1.3f",ans);
     
     return 0;  
}