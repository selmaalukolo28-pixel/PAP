#include <stdio.h>
// 25
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

//26
#include <stdio.h>

int main() {
    char studentName[100];
    float test1, test2, assignment, total;


    printf("Enter Student Name: ");
    scanf("%99s", studentName);

    printf("Enter Test 1 Mark: ");
    scanf("%f", &test1);

    printf("Enter Test 2 Mark: ");
    scanf("%f", &test2);

    printf("Enter Assignment Mark: ");
    scanf("%f", &assignment);


    total = test1 + test2 + assignment;


    printf("\n--- Assessment Result ---[cite: 16]\n");
    printf("Student Name: %s\n", studentName);
    printf("Total Mark:   %.2f\n", total);
    printf("Result:       ");

    if (total >= 75 && total <= 100) {
        printf("Distinction\n");
    } else if (total >= 60 && total < 75) {
        printf("Credit\n");
    } else if (total >= 50 && total < 60) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}