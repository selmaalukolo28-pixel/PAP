#include <stdio.h>
#include <string.h>

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

//Department Budgets
int main() {
    float budgets[10];
    int i, j;
    float totalBudget = 0, averageBudget, temp;

    printf("Enter 10 department budgets:\n");
    for (i = 0; i < 10; i++) {
        printf("Budget %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    // Display the budgets
    printf("\n--- Department Budgets ---\n");
    for (i = 0; i < 10; i++) {
        printf("Budget %d: %.2f\n", i + 1, budgets[i]);
    }

  
    for (i = 0; i < 10; i++) {
        totalBudget += budgets[i];
    }
    averageBudget = totalBudget / 10;

    printf("\nTotal Budget:   %.2f\n", totalBudget);
    printf("Average Budget: %.2f\n", averageBudget);

   
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (budgets[j] > budgets[j + 1]) {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\n--- Budgets Sorted from Lowest to Highest ---\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }

    return 0;
}

// Vehicle registration numbers 
int main() {
    char registrations[20][20];
    int i, found = 0;
    char searchRegistration[20];

    // Capture 20 registration numbers[cite: 16]
    printf("Enter 20 vehicle registration numbers:\n");
    for (i = 0; i < 20; i++) {
        printf("Registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    // Display all registration numbers[cite: 16]
    printf("\n--- All Vehicle Registration Numbers ---\n");
    for (i = 0; i < 20; i++) {
        printf("Registration %d: %s\n", i + 1, registrations[i]);
    }

    // Search for a particular registration number[cite: 16]
    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchRegistration);

    for (i = 0; i < 20; i++) {
        if (strcmp(registrations[i], searchRegistration) == 0) {
            printf("Registration '%s' found at index %d (Vehicle %d).\n", searchRegistration, i, i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("Registration '%s' was not found in the records.\n", searchRegistration);
    }

    return 0;
}

int main() {
    float salaries[50];
    int i, j, found = 0;
    float total = 0, average, highest, lowest, searchVal, temp;

    // 1 & 2. Capture salaries for 50 employees and store in an array[cite: 16]
    printf("Enter salaries for 50 employees:\n");
    for (i = 0; i < 50; i++) {
        printf("Employee %d salary: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // 3. Display all salaries[cite: 16]
    printf("\n--- All Employee Salaries ---\n");
    for (i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    // 4 & 5. Calculate total salary expenditure and average salary[cite: 16]
    highest = salaries[0];
    lowest = salaries[0];
    for (i = 0; i < 50; i++) {
        total += salaries[i];
        
        // 6. Find the highest salary[cite: 16]
        if (salaries[i] > highest) {
            highest = salaries[i];
        }
        
        // 7. Find the lowest salary[cite: 16]
        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }
    average = total / 50;

    printf("\nTotal Salary Expenditure: %.2f\n", total);
    printf("Average Salary:           %.2f\n", average);
    printf("Highest Salary:           %.2f\n", highest);
    printf("Lowest Salary:            %.2f\n", lowest);

    // 8. Search for a particular salary[cite: 16]
    printf("\nEnter a salary amount to search for: ");
    scanf("%f", &searchVal);
    for (i = 0; i < 50; i++) {
        if (salaries[i] == searchVal) {
            printf("Salary %.2f found at index %d (Employee %d).\n", searchVal, i, i + 1);
            found = 1;
        }
    }
    if (!found) {
        printf("Salary %.2f was not found in the records.\n", searchVal);
    }

    // 9. Sort salaries from lowest to highest (Bubble Sort)[cite: 16]
    for (i = 0; i < 49; i++) {
        for (j = 0; j < 49 - i; j++) {
            if (salaries[j] > salaries[j + 1]) {
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }

    // 10. Display the sorted salaries[cite: 16]
    printf("\n--- Salaries Sorted from Lowest to Highest ---\n");
    for (i = 0; i < 50; i++) {
        printf("%.2f\n", salaries[i]);
    }

    return 0;
}