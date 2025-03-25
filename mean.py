#This file takes a series of numbers as an input and works out the mean of them.

number_of_elements = int(input("Please enter the size of the dataset: "))       #Obtaining the amount of numbers the user would like to average
numbers = []                                                                    #Initialising variables
running_total = 0

for i in range(0,number_of_elements):                                           #for loop to get the numbers from the user, also adds the numbers to a running total
    numbers.append(int(input(f"Please enter element {(i + 1)}:")))
    running_total = running_total + numbers[i]

average = running_total / number_of_elements                                    #calculates the average
print(f"The average of\n{numbers} is {average}")                                #prints the array of numbers that were input and the average of them.

