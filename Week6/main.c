#include <stdio.h>

 #define SIZE 50
#define BUDGET_COUNT 10


 int main() {
    float salaries[SIZE];

    for (int i = 0; i < SIZE; i++) { 
        printf("Enter salary %d: ", i + 1);
        scanf("%f", & salaries[i]);
    
    }
        printf("\nEmployee salaries\n");
        for (int i = 0; i < SIZE; i++) {
            printf("%.2f\n", salaries[i]);
        }
        float total = salaries[0];
        float highest = salaries[0];
        float lowest = salaries[0];
        for (int i = 1; i < SIZE; i++) {
            total = total + salaries[i];
            if (salaries[i] > highest) {
                highest = salaries[i];
            }
            if (salaries[i] < lowest) {
                lowest = salaries[i];
            }
        }
        float average = total / SIZE;
        printf("\n--- Salary Report ---\n");
        printf("total salary: %.2f\n", total);
        printf("Average salary: %.2f\n", average);
        printf("Highest salary: %.2f\n", highest);
        printf("Lowest salary: %.2f\n", lowest);        
    
    float search;
    int found = 0;
    printf("\nEnter a salary to search for: ");
    scanf("%f", &search);
    for (int i = 0; i < SIZE; i++) {
        if (salaries[i] == search) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Salary %.2f found in the array.\n", search);
    } else {
        printf("Salary %.2f not found in the array.\n", search);
    }

float budgets[BUDGET_COUNT];
float budgetTotal = 0;
printf("\n-----Department Budgets -----\n");
for (int i = 0; i < BUDGET_COUNT; i++) {
    printf("Enter budget %d: ", i + 1);
    scanf("%f", &budgets[i]);
    budgetTotal = budgetTotal + budgets[i];
}
printf("\nBudgets:\n");
for (int i = 0; i < BUDGET_COUNT; i++) {
    printf("%.2f\n", budgets[i]);
}
printf("\nTotal budget: %.2f\n", budgetTotal);
printf("Average budget: %.2f\n", budgetTotal / BUDGET_COUNT);

float temp;
for (int i = 0; i < BUDGET_COUNT - 1; i++) {
    for (int j = 0; j < BUDGET_COUNT - 1 - i; j++) {
        if (budgets[j] > budgets[j + 1]) {
            temp = budgets[j];
            budgets[j] = budgets[j + 1];
            budgets[j + 1] = temp;
        }
    }
}
printf("\nSorted budgets:\n");
for (int i = 0; i < BUDGET_COUNT; i++) {
    printf("%.2f\n", budgets[i]);
}

        return 0;  }
    
 