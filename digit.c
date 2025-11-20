#include <stdio.h>
int main () {
    int a, b, c;
    printf(" Enter value of a & b & c :\n");
    scanf("%d%d%d", &a , &b, &c);
    if((a == b) && (b == c))
    {
      printf("a & b & c are eqal.\n");
    }
    else if (a == b)
    {
       printf("a & b are equal .\n");
    }
    else if (a == c)
    {
      printf(" a & c are equal .\n");
    }
    else if(b == c)
    {
       printf(" b & c are equal .\n");
    }
    else
    {
        printf(" a & b & c are not equal. \n");
    }

 return 0;
}
