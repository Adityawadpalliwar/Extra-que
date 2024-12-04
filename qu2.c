#include<stdio.h>
struct table
{
    int a;
    char b;
    int c;
};

int main()
{
    int m,i,j,x,y,b,v;
    printf("enter the value of m: ");
    scanf("%d",&m);

    struct table mat[m+1][m+1];

    
    printf(" enter i and j : ");
    scanf("%d %d",&x,&y);
    

    printf("enter the elements of the matrix in row wise fasion \n");
    for(i=1;i<m+1;i++)
     {
        for(j=1;j<m+1;j++)
        {
         scanf("%d%c%d",&mat[i][j].a,&mat[i][j].b,&mat[i][j].c);
         mat[i][j].a;
         mat[i][j].b;

        }
    }
    int nj = x*y;
    

    int k=0;
    while(k<nj-1)
    {
        b=mat[x][y].a;
        v=mat[x][y].c;
        x=b;
        y=v;
        k++;
    }

    printf("%d %d",x,y);
    return 0;

}
