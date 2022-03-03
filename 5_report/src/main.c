#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include"cl.h"

int main()
{
int option;
printf("enter your option\n");
scanf("%d",&option);
switch(option)
{
case 1: addition();
break;
case 2: subtraction();
break;
case 3: multiplication();
break;
case 4: division();
break;
case 5: modulus();
break;
case 6: factorial();
break;
case 7: power();
break;
case 8: square();
break;
case 9: squareroot();
break;
case 10: absolute();
break;
case 11: naturallogarithm();
break;
case 12: exponentiallogarithm();
break;
case 13: sine();
break;
case 14: cosine();
break;
case 15: tann();
break;
case 16: cosec();
break;
case 17: sec();
break;
case 18: cot();
break;
case 19: decimaltobinary();
break;
case 20: binarytodecimal();
break;
default : return 0;
break;
}
}
