#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{   int i,j;

    //int a=1,b=1;
    int sum,greatest=0,x,y;
    int l=0,k=0;
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
        {
         for(j=0;j<coloums;j++)
            {
              if(m[i][j]==0||(i==0&&j==0))
              continue;
              else
              {  sum=0;
                for(x=i-1;x<=i+1;x++)
                {
                  for(y=j-1;y<=j+1;y++)
                  { 
                    if(((x>=0&&x<row)&&(y>=0&&y<coloums))&&(x!=i||y!=j))
                    {
                      sum+=m[x][y];
                    }
                    else
                    continue;
                  }
                }
                if (sum>greatest)
                {
                  greatest =sum ;
                  l=i;
                  k=j;
                }
                if(sum==greatest)
                {
                  if((i+j)<(l+k))
                  {
                    l=i;
                    k=j;
                  }
                   
                }
              }
            }
        }
  
  
    
  }
  else
  {
    printf("no sutaible girl found");
  }


  printf("%d:%d:%d",l+1,k+1,greatest);
  return 0;

}


