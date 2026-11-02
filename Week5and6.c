#include <stdio.h>
//Employee Salaries 
int main () {
    float salaries[50];
    int i, found = 0;
    float sum = 0, average, highest, lowest, searchVal;

  
    printf("Enter 50 employee salaries:\n");
    for (i = 0; i < 50; i++) {
        printf("Salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

  
    printf("\n--- All Salaries ---\n");
    for (i = 0; i < 50; i++) {
        printf("Salary %d: %.2f\n", i + 1, salaries[i]);
    }


    highest = salaries[0];
    lowest = salaries[0];
    for (i = 0; i < 50; i++) {
        sum += salaries[i];
        if (salaries[i] > highest) {
            highest = salaries[i];
        }
        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }
    average = sum / 50;

    printf("\nAverage Salary: %.2f\n", average);
    printf("Highest Salary: %.2f\n", highest);
    printf("Lowest Salary:  %.2f\n", lowest);

    // Search for a particular salary
    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchVal);
    for (i = 0; i < 50; i++) {
        if (salaries[i] == searchVal) {
            printf("Salary %.2f found at index %d (Employee %d).\n", searchVal, i, i + 1);
            found = 1;
        }
    }
    if (!found) {
        printf("Salary %.2f not found in the records.\n", searchVal);
    }

    return 0;

}