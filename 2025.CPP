#include<stdio.h>
#include<conio.h>

void main(){
int n;
int firstdigit, lastdigit;
int sum = 0;
clrscr();
printf("enter any num to find sum of first digit and last digit: ");
scanf("%d",&n);

lastdigit = n % 10;

while(n>=10){
      n=n/10;
      }

firstdigit = n;

sum = firstdigit + lastdigit;

printf("sum of first and last digit: %d",sum);

getch();
}