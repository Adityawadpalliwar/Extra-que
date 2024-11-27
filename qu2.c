#include<stdio.h>
struct table
{
    int a;
    char b;
    int c;
};

int main()
{
    int m,i,j,x,y;
    printf("enter the value of m: ");
    scanf("%d",&m);

    struct table mat[m][m];

    
    printf(" enter i and j : ");
    scanf("%d %d",&x,&y);

printf("enter the elemnt of the matrix");
for(i=0;i<m;i++)
 {
 for(j=0;j<m;j++)
{
    scanf("%d%c%d",&mat[i][j].a,&mat[i][j].b,&mat[i][j].c);
}
}
    int nj = x*y;
    int k=0;
    while(k<nj)
    {
        x=mat[x][y].a;
        y=mat[x][y].c;
        k++;
    }

    printf("%d %d",x,y);
    return 0;

}
