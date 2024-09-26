#include<stdio.h>
int main () {

int a,b,c;
printf("\nenter the number = ");
scanf("%d" , &b);
c =1;
for(a=1;a<=b;a++){
    c =c*a;
}
printf("the factorial of %d is = %d " , b , c);

}