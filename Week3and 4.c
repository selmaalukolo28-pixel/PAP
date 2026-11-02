#include <stdio.h>
int main () {
    double basicSalary, allowance, taxRate;
    double grossSalary, netSalary;


    printf("Enter basic salary (NAD): ");
    scanf("%lf", &basicSalary);

    printf("Enter total allowance (NAD): ");
    scanf("%lf", &allowance);
    
    printf("Enter tax rate (e.g., 0.15 for 15%%): ");
    scanf("%lf", &taxRate);
  
    grossSalary = basicSalary + allowance;
    netSalary = grossSalary - (grossSalary * taxRate);

    printf("\n--- Salary Summary ---\n");
    printf("Gross Salary: NAD %.2f\n", grossSalary);
    printf("Net Salary:   NAD %.2f\n", netSalary);

   
    if (netSalary >= 20000.0) {
        printf("High Income\n");
    } else {
        printf("Standard Income\n");
    }

    return 0;

}