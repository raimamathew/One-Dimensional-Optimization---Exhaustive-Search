#include<iostream.h>
#include<conio.h>

float func(float initial_val)
{
 return(initial_val*(initial_val-1.5));
 }

void main()
{
  float lim = 10/100;
  clrscr();
  float initial_val=0.1;
  float n=0;
  float iter=1;
  float cur_value=0,prev_value=0;

  while(n <= (1/lim)-1)
  {
   prev_value = func(initial_val);
   initial_val = initial_val + 0.1;
   iter++;
   cur_value = func(initial_val);
    if(cur_value == prev_value)
     break;
     else
     n++;
   }
   cout<<"The value is: "<<prev_value<<" for "<<initial_val-0.1<<" and "<<cur_value<<" for "<<initial_val;
   cout<<"\nWe take the mid point for approximation to optimum point";
   cout<<"\nHence the optimum point is: "<<(iter+(iter-1))/2;
   getch();
   }

