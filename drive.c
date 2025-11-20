#include <stdio.h>
int main (){
    int age ;
    char name[100] ;
    printf("Enter your Name :\n");
    scanf("%s",name);
    printf("Enter your Age :\n");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("%s \n you are eligible for driving licence .\n",name);
    }
    else
    {
        printf("%s \n you are not eligible for driving licence !\n",name);
    }
    return 0;
}
