#include<stdio.h>

int main(){
    int n;
    printf("nisha singh\n");
    printf("Enter the no.");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    return 0;
}