#include <stdio.h>
#include<stdlib.h>

float working_citizen(float inc );
float senior_citizen(float inc );
float Super_senior_citizen(float inc );

int main () {
  float ic,iv;
  char age_grp,name;
  int i;
  printf("\nThe\nH Division\nTAX Calculator \n--Deogire\n" );
for(i=0;i<50;i++)
  {printf("_");}
  
  
     printf("\nSelect your age :\n1.Age<60(Working Citizen) : i \n2.Age>=60(Senior Citizen) : s\n3.Age>=80(Super Senior Citizen) : S \nType it here :");
  scanf("%c",&age_grp);
  switch(age_grp)
    {
      case'i':
     printf("\nType your income here : ");
     scanf("%f",&ic);
     printf("\nType your non taxable investments here :  ");
     scanf("%f",&iv);
     ic=ic-iv;
     working_citizen(ic);
        
     break;
      case's':
       printf("\nType your income here : ");
     scanf("%f",&ic);
     printf("\nType your non taxable investments here :  ");
     scanf("%f",&iv);
     ic=ic-iv;
     senior_citizen(ic);
        
     break;
      case'S':
     printf("\nType your income here : ");
     scanf("%f",&ic);
     printf("\nType your non taxable investments here :  ");
     scanf("%f",&iv);
     ic=ic-iv;
     Super_senior_citizen(ic);
       
      }
    
    
  }

float working_citizen(float inc )
{
float tax,tax1,tax2,tax3,tax4,taxs;
printf("\nYour  taxble income is : %f",inc);
if(inc<=250000 && inc<0)
{printf("\nYou have put the invalid data should check");}
else if(inc<=250000 && inc>=0)
{
  printf("\nYou don't have to pay income tax  ");
}
else if(inc>250000 && inc<=500000 )
{
inc=inc-250000;
  
{printf("\nYour taxable income is : %f",inc);
tax=0.05*inc;
tax=tax+tax*0.04;//education cess
  if(tax>0)
  {printf("\nYour payable tax is %f",tax);}
}}
else if(inc>500000 && inc<=1000000 )
{
inc=inc-250000;//no tax upto 250000
  tax1=0.05*250000;//from 250kto500k
tax2=inc-250000;
  tax2=tax2*0.2;//tax on remaining after 500k
  tax2=tax1+tax2;//total tax to pay
  tax3=tax2*0.04;//education cess
  tax3=tax3+tax2;//final tax
  if(tax3>0)
  { printf("\nYour payable tax is : %f",tax3);}
}
else if(inc>1000000 && inc<=5000000 )
{ inc=inc-250000;//no tx
  tax1=250000*0.05;
  tax2=500000*0.2;
  tax3=inc-750000;
  tax3=tax3*0.3;
  tax3=tax1+tax2+tax3;
  tax4=tax3*0.04;
  tax4=tax4+tax3;
  if(tax4>0)
  {printf("\nYour payable tax is %f",tax4);}}
  }

float senior_citizen(float inc )
{
float tax,tax1,tax2,tax3,tax4,taxs;
  
  
if(inc<=300000 && inc<0)
{printf("\nYou have put the invalid data should check");}
else if(inc<=300000 && inc>=0)
{
  printf("\nYou don't have to pay income tax  ");
}
else if(inc>300000 && inc<=500000 )
{
inc=inc-300000;
  
{printf("\nYour taxable income is : %f",inc);
tax=0.05*inc;
tax=tax+tax*0.04;//education cess
  if(tax>0)
  {printf("\nYour payable tax is %f",tax);}
}}
else if(inc>500000 && inc<=1000000 )
{
inc=inc-300000;//no tax upto 250000
  tax1=0.05*300000;//from 250kto500k
tax2=inc-300000;
  tax2=tax2*0.2;//tax on remaining after 500k
  tax2=tax1+tax2;//total tax to pay
  tax3=tax2*0.04;//education cess
  tax3=tax3+tax2;//final tax
  if(tax3>0)
  {printf("\nYour payable tax is : %f",tax3);}
}
else if(inc>1000000)
  inc=inc-300000;//no tx
  tax1=300000*0.05;
  tax2=500000*0.2;
  tax3=inc-800000;
  tax3=tax3*0.3;
  tax3=tax1+tax2+tax3;
  tax4=tax3*0.04;
  tax4=tax4+tax3;
     if(tax4>0)
     {printf("\nYour payable tax is %f",tax4);}
      
}
float Super_senior_citizen(float inc )
{
float tax,tax1,tax2,tax3,tax4,taxs;
  
if(inc<=500000 && inc<0)
{printf("\nYou have put the invalid data should check");}
else if(inc<=500000 && inc>=0)
{
  printf("\nYou don't have to pay income tax  ");
}

else if(inc>500000 && inc<=1000000)
{
inc=inc-500000;//no tax upto 500000
  tax1=0.2*inc;//from 500kto1000k
  tax2=tax1*0.04;//health and education cess
 tax3=tax1+tax2;//final tax
  if(tax3>0)
  {printf("\nYour payable tax is : %f",tax3);}
}
else if(inc>1000000)
  inc=inc-500000;//no tx
  tax1=500000*0.2;
  tax2=inc-500000;
  tax2=tax2*0.3;
  tax3=tax1+tax2;
  tax4=tax3*0.04;
  tax4=tax4+tax3;
     if(tax>0)
  printf("\nYour payable tax is %f",tax4);
  }

