#include <stdio.h>

int main() {
    double startOdometer, endOdometer, distance, rate = 0.35, reimbursement;

    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("Enter beginning odometer reading => ");
    scanf("%lf", &startOdometer);
    printf("Enter ending odometer reading => ");
    scanf("%lf", &endOdometer);

    distance = endOdometer - startOdometer;
    reimbursement = distance * rate;

    printf("You traveled %.1f miles. At $%.2f per mile,\n", distance, rate);
    printf("your reimbursement is $%.2f.\n", reimbursement);

    return 0;
}
