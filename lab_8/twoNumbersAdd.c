#include<stdio.h>

int main(){
    int a;
    int b;

    printf("bir sayı giriniz : ");
    scanf("%d",&a);
    
    printf("ikinci sayı giriniz : ");
    scanf("%d",&b);
    
    int c = a + b;
    printf("Sum is:%d", c);
    return 0;
}
