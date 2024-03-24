//lab11.1.c
/*WAP to add two numbers entered through the keyboard by using a
suitable user defined function.*/
#include <stdio.h>

void add(int a,int b){
    printf("Sum of %d and %d is %d\n",a,b,a+b);
}
int main (){
    int m,n;
    printf("Enter two numbers:\n");
    scanf("%d%d",&m,&n);
    add(m,n);
    return 0;
}

//lab11.2.c
/*WAP to find the factorial of a number by using a suitable user defined
function.*/
#include <stdio.h>
int fact(int n) {
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main () {
    int m;
    printf("Enter a number:\n");
    scanf("%d",&m);
    printf("factorial of %d is %d",m,fact(m));
    return 1;
}

//lab11.3.c
/*WAP to find out thevalue of nth term of the Fibonacci sequence by writing
a suitable user defined function.*/
#include <stdio.h>
void fib(int n) {
    int a=0,b=1,t;
    if (n==1)
        printf("The 1st term of Fibonacci series is 0");
    if (n==2)
        printf("The 2nd term of fibonacci series is 1");
    else{
        for(int i=0;i<n-2;i++){
            t=a+b;
            a=b;
            b=t;
        }
        printf("The %dth term of fibonacci series is %d\n",n,t);
    }
}
int main () {
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    fib(n);
    return 0;
}

//lab11.4.c
/*Write a C program to determine a number is prime or not using a function
named as “isPrime”.*/
#include <stdio.h>
int isPrime(int n){
    int i=0;
    if (n==1)
        printf("1 is Co-Prime Number\n");
    else{
        for (i=2;i<n;i++){
            if(n%i==0)
            break;
        }
        if (i==n)
            printf("%d is a Prime Number",n);
        else
            printf("%d is not a Prime Number",n);
    }
}
int main (){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    isPrime(n);
    return 0;
}

//lab11.5.c
/*Write a C program to perform swapping of two integers using a function
SWAP.*/
#include<stdio.h>

int SWAP(int n1,int n2){
    printf("Before swaping the two numbers are: n1=%d and n2=%d\n",n1,n2);
    int t=n1;
    n1=n2;
    n2=t;
    printf("After swaping the two numbers are: n1=%d and n2=%d\n",n1,n2);
}
int main (){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    SWAP(a,b);
    return 0;
}

//lab11.6.c
/*WAP to calculate the sum of the digits of any given integer by designing
a function.*/
#include <stdio.h>
int digitsum(int n){
    int num=n,digit,total=0;
    while(num>0){
        digit=num%10;
        total+=digit;
        num=num/10;
    }
    return total;
}
int main () {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d\n",n,digitsum(n));
    return 0;
}
