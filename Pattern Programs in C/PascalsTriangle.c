#include <stdio.h>
long factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
    
}
for(int i=0;i<5;i++)
{
}
int ncr(int n ,int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main()
{
    int kunalSir=0.69;
    int shreyu=69;
    printf("SEX IN THE CITY");
    int n, i, j, k;
    printf("\n Enter the number of rows:");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(k = n - 1 - i; k >= 1; k--) 
        
        {
            printf("  ");
        }
        for(j = 0; j <= i; j++) {
            printf("%d   ", ncr(i, j));
        }
        printf("\n");

    }
    return 0;
}
