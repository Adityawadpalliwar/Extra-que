#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{   int i,j;

    int a=1,b=1,sum,greatest=0;
    int l ,k;
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS");

    int row,coloums;
    scanf("%d",&row);
     scanf("%d",&coloums);

  if(row>=2&&coloums<=100)
  {
        printf("enter the elements of the matrix: ");
        int m[row][coloums];
        for(i=0;i<row;i++)
        {
         for(j=0;j<coloums;j++)
            {
            printf("enter the %d %d element ",i+1,j+1);
            scanf("%d",&m[i][j]);
             }
         }
  

      
 

         for(i=0;i<row;i++)
            {  sum=0;
            if (i==0)
              { for(j=0;j<coloums;j++)
                {if (j==0)
                { continue;
                }
                 if (j==coloums-1)
                {   for(l=0;l<2;l++)
                   {
                     for(k=-1;k<1;k++)
                     {   if(l==0&&k==0)
                     continue;
                      sum=sum+ m[i+l][j+k];
                    }
                    }
                }

               for(l=0;l<2;l++)
                {
                 for(k=-1;k<2;k++)
                {   if(l==0&&k==0)
                 continue;
                  sum=sum+ m[i+l][j+k];
                }
                }
                
             if (sum>greatest)
             {
                a=i;
                b=j;
            }
            if (sum==greatest)
            {
             if (sqrt(i*i+j*j)<sqrt(a*a+b*b))
                a=i;
                b=j;
             }
            }
            }

        if (i==row-1)
        {      
            for(j=0;j<coloums;j++)
              {  if (j==0)
               { for(l=-1;l<1;l++)
                {
                 for(k=0;k<2;k++)
                   if(l==0&&k==0)
                 continue;
                  sum=sum+ m[i+l][j+k];
                }
                }
               }
            if (j==coloums-1)
            {   for(l=0;l<2;l++)
                {
                 for(k=-1;k<1;k++)
                {   if(l==0&&k==0)
                 continue;
                  sum=sum+ m[i+l][j+k];
                }
                }
                }
            else {for(l=0;l<2;l++)
            {
                for(k=-1;k<2;k++)
                {  if(l==0&&k==0)
                 continue;
                  sum=sum+ m[i+l][j+k];
                }
            }}
               
             if (sum>greatest)
             {
                a=i;
                b=j;
            }
            if (sum==greatest)
            {
             if (sqrt(i*i+j*j)<sqrt(a*a+b*b))
                a=i;
                b=j;
             }

        }

            

   
        else
        {
           for(j=0;j<coloums;j++)
              {  if (j==0)
               { for(l=-1;l<1;l++)
                {
                 for(k=0;k<2;k++)
                   if(l==0&&k==0)
                 continue;
                  sum=sum+ m[i+l][j+k];
                }
                }
               
            if (j==coloums-1)
            {   for(l=0;l<2;l++)
                {
                 for(k=-1;k<1;k++)
                {   if(l==0&&k==0)
                 continue;
                  sum=sum+ m[i+l][j+k];
                }
                }
            }
            
             else{ for(l=0;l<2;l++)
            
                for(k=-1;k<2;k++)
                {  if(l==0&&k==0)
                 continue;
                  sum=sum+ m[i+l][j+k];
                }
            }
              if (sum>greatest)
             {
                a=i;
                b=j;
            }
            if (sum==greatest)
            {
             if (sqrt(i*i+j*j)<sqrt(a*a+b*b))
                a=i;
                b=j;
             } 
            }
        }


        
    
    }
  }
  
    
  
  else
  {
    printf("no sutaible girl found");
  }


  printf("%d %d",a,b);

}


