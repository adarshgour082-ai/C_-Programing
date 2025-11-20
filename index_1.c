#include <stdio.h>
int main (){
    float temp;
    printf("Enter the value of Temperature (Degree celsius):");
    scanf("%f",&temp);
    if (temp < 0)
    {
        printf("It's freezing cold ! \n");
    }
    else if ((temp >= 0) && (temp < 15))
    {
        printf("Il's cold weather.\n");
    }
    else if ((temp >= 15) && (temp < 30))
    {
        printf("The weather is normal.\n");
    }
    else if ((temp >= 30) && (temp < 40))
    {
        printf("It's hot weather.\n");
    }
    else
        printf("It's extermely hot !\n");
      
    return 0;    
}
