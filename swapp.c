#include <stdio.h>
int main (){
    int a,b,temp;
    printf("Enter value of a & b :\n");
    scanf("%d%d",&a,&b);
    /*swapping use third varriable*/
    temp = a;
    a = b;
    b = temp;
    printf("Enter swapp value of a & b: %d  %d\n",a,b);
    /*swapping wwithout third varriable*/
    printf("Enter value of a & b:\n");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Enter swapp value of a & b: %d  %d",a,b);
    return 0;
}
