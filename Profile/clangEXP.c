#include<stdio.h>
int main(){

    int n;
    long long int f=1;
    printf("Enter a number: ");
    scanf("%d", &n);


    for (int i=1;i<n;i++){
       f=f*i;
    }
    printf("Factorial of %d = %d", n, f);
    return 0;
}