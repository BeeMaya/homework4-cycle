#include <stdio.h>

void piramida (int m);
void oddNumbers (int n);
void sumNumbers (int n);
void devide_3_5 (int n, int m);
int multiply_Odd_13 ();
void sum_5_7 (int m, int n);


int main()
{
    //piramida (9);
    //100oddNumbers (27);
    //sumNumbers (5);
    //devide_3_5 (5, 35);
    //multiply_Odd_13();
    sum_5_7 (6, 39);
    return 0;
}

void piramida (int m) ///////task 1
{
    int a=1;
    while (a<=m)
    {
        int b=1;
        while (b<=a)
        {
            printf("%d ", a);
            b++;
        }
        printf("\n");
        a++;
        
    }
}

void oddNumbers (int n) ///////task 2
{
    int d=0;
    for (int r=1; r<1983; r=r+2)
    {
        d++;
        if (d<=n)
        {
            printf("%d ", r);
        }
    }
    printf("\n");
}


void sumNumbers (int n)  ///////task 3
{
    int b=0;
    for (int a=1; a<=n; a++)
    {
        b=b+a;
    }
    printf("Sum of %d is %d \n", n, b);
}


void devide_3_5 (int n, int m) ///////task 4
{
    int a=n;
    do{
        
        if (a%3==0 && a%5!=0)
        {
            printf("%d ", a);
        }
        a=a+1;
    }
    while (a<=m);
    printf("\n");
}



int multiply_Odd_13 () ///// task 5
{
    int a=1;
    for (int x=10; x<100; x=x+1)
    {
        if (x%2!=0 && x%13==0) {
            printf("%d ", x);
            a=a*x;
        }
    }
    printf("\n%d\n",a);
    
    return a;
}


void sum_5_7 (int m, int n)
{
    int b=0;
    int a=m;
    do{
        
        if (a%5==0 || a%7==0)
        {
            printf("%d ", a);
            b=a+b;
        }
        a++;
    }
    while (a<n);
    printf("\nSum is %d\n",b);
}



