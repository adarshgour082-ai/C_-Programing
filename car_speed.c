#include<stdio.h>
int main (){
    int speed;
    printf("Enter the car speed (Km/h): \n");
    scanf("%d",&speed);
    if (speed < 0)
    {
        printf("Invalid speed !\n");
    }
    else if (speed <= 60)
    {
        printf("Safe speed . Drive carefully!\n");
    }
    else if (speed <= 100)
    {
        printf("Warning! YOu are driving fast.\n");
    }
    else
        printf("Over Speeding ! Fine will be imposed .\n");
    
    return 0;
      
}
