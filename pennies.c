#include <stdio.h>
#include <cs50.h>
#include <math.h>
//suhanigupta hello.c
int main(void)
{
    int numDays, start;
    double total;
    do
    {
        numDays=get_int("How many days are in this month? \n");
    }
    while (numDays<28 || numDays>31);
     do
    {
        start=get_int("How many pennies did you start with? \n");
    }
    while (start < 1);

    for (int i=0; i<numDays;i++)
    {
        total = total + start*pow(2,i);
    }
    printf("$%.2f\n", total/100);
