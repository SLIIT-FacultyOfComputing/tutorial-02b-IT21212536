/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}

#include<iostream>

int maun()
{
  double salary,netsalary;
  int etype,othrs,otrate;

  std::cout<<" Enter employee type :"<<std::endl;
  std::cin>>etype;
  std::cout<<" Enter salary:"<<std::endl;
  std::cin>>salary;
  std::cout<<"Enter others:"<<std::endl;
  std::cin>>others;
  
  switch(etype){
    case 1 :
        otrate=1000;
        break;
    case 2:
        otrate=1500;
        braek;
    default :
        otrate=1700;
        break;
  }
netsalary=salary+othrs*otrate;

std::cout<<" net salary is"<<netsalary<<std::endl;
return 0;
  

    
  }


