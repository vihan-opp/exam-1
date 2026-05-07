#include<stdio.h>

main()
{

       float base,HRA,DA,TA,GROSS;

       printf("enter base salary : ");
       scanf("%f",&base);

       printf("enter HRA : ");
       scanf("%f",&HRA);

       printf("enter DA : ");
       scanf("%f",&DA);

       printf("enter TA : ");
       scanf("%f",&TA);

       HRA=base*HRA/100;
       DA=base*DA/100;
       TA=base*TA/100;
       
       GROSS=base+HRA+DA+TA;

        printf("gross salary : %.2f ",GROSS);
}

