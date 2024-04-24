#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Armstrong Number

int main(int argc, char *argv[])
{
    int number;
    printf(" Enter Number :");
    scanf("%d", &number);
    int temp=number;

    int n=0;

    while(temp!=0)
    {
        temp=temp/10;
        n++;


    }

     temp=number;

    int result=0;

    while(temp!=0)
    {
        int temporary = temp%10;

        result += pow(temporary, n);
        temp=temp/10;
    }

    if(number == result)
    printf(" The number %d is armstrong number ", number);
    else
    printf(" The number %d is not an armstrong number ", number);

    return 0;
}