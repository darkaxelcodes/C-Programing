/*
Question: Write a program which computes and prints the sum of the days in all four quarters of the current year.
*/
#include <stdio.h>
int main()
{
    int jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec,q1,q2,q3,q4;
    jan=mar=may=jul=aug=oct=dec=31;
    feb=28;
    apr=jun=sep=nov=30;
    q1=jan+feb+mar;
    q2=apr+may+jun;
    q3=jul+aug+sep;
    q4=oct+nov+dec;
    printf("Days in Q1 of the current year: %d\n",q1);
    printf("Days in Q2 of the current year: %d\n",q2);
    printf("Days in Q3 of the current year: %d\n",q3);
    printf("Days in Q4 of the current year: %d",q4);
    return 0;
}
