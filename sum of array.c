#include<stdio.h>
#include<conio.h>
int count;
int Sum(float a[100],int a)
{
 float s=0.0;
  int i;
 count=count+1;
     for(i=0;i<n;i++)
        {
           count=count+1;
            s=s+a[i];
           count=count+1;
      }


        count=count+1;
  count=count+1;
return s;
}
void main()
{
  float a[100] , s ;
  int n , i;
  clrscr() ;
     printf("\n Enter no of elements : \n");
     scanf("%d",&n);
           for(i=0;i<n;i++)
              {
                 printf("\n Enter element : \n");
                 scanf("%f",&a[i]);
              }
           printf("\n");
          for(i=0;i<n;i=i+1)
              {
                  printf(" %f ",a[i]);
              }
     s=Sum(a,n);
     printf("\n");
     printf("\n Sum = %f \n Count = %d",s,count);


getch();
}
