#include <stdio.h>
#include <stdlib.h>


int main(){
int num1, num2, result;
char oper;
printf("key in the first number\n");
scanf("%d",&num1);
printf("Key in the second number\n");
scanf("%d",&num2);
printf("Key in an arithmetic operator, +,=,/,%,- \n");
scanf("%C \n", &oper);
switch(oper){
case '+': {
printf("sum=%d\n", num1+num2);
break;
}
case '-' : {
printf("difference=%d\n", num1 - num2);
break;
}
case '*' : {
printf("product = %d \n", num1*num2);
break;
}
case '/' : {
printf("division=%d \n", num1/num2);
break;
}
case '%' : {
printf("modulus=%d \n", num1%num2);
break;
}
default: {
printf( "Input a valid operator");
}
}
return 0;
// }

