//This file takes a series of numbers as an input and works out the mean of them.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float number_of_elements = 0;                                               //Creating the variables used
    float running_total = 0;
    float average = 0;

    printf("Please enter the size of the dataset: ");                           //Obtaining the size of data required to determine the amount of memory required
    scanf("%f", &number_of_elements);

    float *numbers = calloc(number_of_elements, sizeof(float));                 //Allocating memory

    for (int i = 0; i < number_of_elements; i++ ) {                             //Filling the allocated memory with user inputs
        printf("Please enter element %d:", (i + 1));
        scanf("%f", &numbers[i]);
        running_total = running_total + numbers[i];                             //Adding the number to the running total
    }

    average = running_total / number_of_elements;                               //calculating the average

    printf("The average of: \n[ ");                                             //printing the array of numbers that were used to work out the average 
    for (int i = 0; i < number_of_elements; i++ ) {
        printf("%.0f ", numbers[i]);
    }
    printf("]");
    printf("is: %.2f", average);                                                //printing the average to 2dp

}
