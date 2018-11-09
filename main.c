#include <stdio.h>
#include <stdlib.h>

int main()
{
    float data = 50;
    int i = 0;
    printf("Enter amount of data: ");
    scanf("%f", i);
    int highestnumber;
    int lowestnumber;
    int sumofall;
    highestnumber = data > 5;
    lowestnumber = data < 5;
    sumofall = highestnumber + lowestnumber;
    printf("Highest Number: %d \n Lowest Number: %d \n Average: %f \n Sum of All: %d");
    return 0;
}
