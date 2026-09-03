#include <stdio.h>
int main()
{
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Management System\n\n");

    printf("Enter Municipality Name: ");
    scanf("%49s", municipality);

    printf("Enter Mayor: ");
    scanf("%49s", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);

    double revenue;
    double expenses;
    double balance;

    printf("\nMUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\nRevenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    if (balance > 0) {
        printf("Surplus: %.2f\n", balance);
    } else if (balance < 0) {
        printf("Deficit: %.2f\n", -balance);
    } else {
        printf("The budget is balanced.\n");
    }

    float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;

    printf("\nEMPLOYEE SALARY CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    printf("Enter tax: ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;
    netSalary = grossSalary - tax;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}