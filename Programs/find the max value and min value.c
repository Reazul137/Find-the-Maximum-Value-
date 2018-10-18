#include<stdio.h>
int max(int[]); //function declaration
int min(int[]); //function declaration
int main()
{
    int a[18],i,m;

    printf("\n Enter 10 numbers : ");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    m=max(a); //function calling
    printf("\n Maximum = %d", m);

    m=min(a); //function calling
    printf("\n Minimum = %d", m);

    return 0;
}
int max(int a[]) //function definition
{
    int i, m=-32768;
    for(i=0; i<10; i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;
}
int min(int a[]) //function definition
{
    int i, m=32768;
    for(i=0; i<10;i++)
    {
        if(a[i]<m)
        m=a[i];
    }
    return m;
}
