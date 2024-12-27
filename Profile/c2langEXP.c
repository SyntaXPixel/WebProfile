#include<stdio.h>
int main(){
// prime number

    int n;
    int i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1) { printf("1 is neither Prime or Non Prime."); }
    
    for (int i=2;i<n;i++){
       if (n%i==0)
       {
        printf("%d is not a Prime Number.", n);
        break;
       }
    }
    if (i ==n)
    {
        printf("%d is a Prime Number %d", n);
    }
    
    
    return 0;
}