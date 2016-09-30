/*
Student Name : KABIR SHRESTHA
Program : Write a program that asks the name of student and marks obtained by him in seven subject.
          Display the percentage of student assuming full marks 100 for each
Lab No. : 04
Date : 2016-09-30
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
    void main (){
    char name[20];
    float a,b,c,d,e,f,g,total,percent;

    printf("enter the name of student:");
    scanf("%s",&name);

    printf("enter the marks of english:");
    scanf("%f",&a);

    printf("enter the marks of math:");
    scanf("%f",&b);

    printf("enter the marks of algebra:");
    scanf("%f",&c);

    printf("enter the marks of computer arc:");
    scanf("%f",&d);

    printf("enter the marks of org management:");
    scanf("%f",&e);

    printf("enter the marks of programming:");
    scanf("%f",&f);

    printf("enter the name of calculus:");
    scanf("%f",&g);

    total=a+b+c+d+e+f+g;
    printf("total is=%f",total);

    percent=total/7;
    printf("percentage is=%f",percent);

    getch();
         }
