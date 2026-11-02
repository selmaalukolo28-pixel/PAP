#include <stdio.h>
#include <string.h>


void displayMenu();
float calculateVAT(float amount);
float calculateSalary(float basic, float allowance, float taxRate);
float calculateBudget(float budgets[], int size);
void searchEmployee(float salaries[], int size, float target);

int main() {
    int choice;
    float amount, basic, allowance, taxRate, target;
    float budgets[5] = {15000.0, 22000.0, 18000.0, 30000.0, 12000.0};
    float salaries[5] = {5000.0, 8500.0, 12000.0, 6500.0, 9500.0};

    do {
        displayMenu(); // Function call
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to calculate VAT: ");
                scanf("%f", &amount);
                printf("VAT (15%%): NAD %.2f\n\n", calculateVAT(amount)); 
                break;
            case 2:
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                printf("Enter allowance: ");
                scanf("%f", &allowance);
                printf("Enter tax rate (e.g., 0.15): ");
                scanf("%f", &taxRate);
                printf("Net Salary: NAD %.2f\n\n", calculateSalary(basic, allowance, taxRate));
                break;
            case 3:
                printf("Total Department Budget: NAD %.2f\n\n", calculateBudget(budgets, 5));
                break;
            case 4:
                printf("Enter salary to search for: ");
                scanf("%f", &target);
                searchEmployee(salaries, 5, target);
                printf("\n");
                break;
            case 5:
                printf("Exiting program. Good luck with Quiz 3 and your group project!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    } while (choice != 5);

    return 0;
}


void displayMenu() {
    printf("--- Municipal Information Management System (MFMS) ---\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Total Budget\n");
    printf("4. Search Employee Salary\n");
    printf("5. Exit\n");
}

float calculateVAT(float amount) {
    return amount * 0.15; // Return value
}

float calculateSalary(float basic, float allowance, float tax_rate) {
    float gross = basic + allowance;
    float net = gross - (gross * tax_rate);
    return net; // Return value
}

float calculateBudget(float budgets[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += budgets[i];
    }
    return total; // Return value
}

void searchEmployee(float salaries[], int size, float target) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (salaries[i] == target) {
            printf("Salary NAD %.2f found at employee index %d.\n", target, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Salary NAD %.2f not found.\n", target);
    }
}