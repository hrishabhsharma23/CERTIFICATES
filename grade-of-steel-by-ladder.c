#include<stdio.h>
int main()
{
  int h,t;
  double cc;
  printf("Enter hardness : ");
  scanf("%d",&h);
  
  printf("Enter carbon content : ");
  scanf("%lf",&cc);
  
  printf("Enter tensile strength : ");
  scanf("%d",&t);
  
  if(h>50)
  {  if(cc<0.7)
    {  if(t>5600)
      {  printf("Grade 10");
      }
      else
      {  printf("Grade 9");
      }
    }
    else
    {  if(t>5600)
      {  printf("Grade 7");
      }
      else
      {  printf("Grade 6");
      }      
    }
  }
  else
  {  if(cc<0.7)
    {  if(t>5600)
      {  printf("Grade 8");
      }
      else
      {  printf("Grade 6");
      }
    }
    else
    {  if(t>5600)
      {  printf("Grade 6");
      }
      else
      {  printf("Grade 5");
      }      
    }
  }
  
  
  return 0;
}
