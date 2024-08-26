#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define BASE_HOURS 3  /* define base hours */
#define BASE_CHARGE 2.00 /* define base charges */
#define ADDITIONAL_CHARGE_PER_HOUR 0.50 /* define charge per hour */
#define MAX_CHARGE 10.00 /* define max charge */

double calculateCharges(double hours);

/* function main begins program excution */
int main() {

    double hours1, hours2, hours3 ; 
    double charge1, charge2, charge3, totalHours, totalCharges;


    printf("Enter ParkingHours : "); /* prompt user to input ParkingHours */
    scanf("%lf %lf %lf", &hours1, &hours2, &hours3); /* Assign value from user input to variable */

    

    charge1 = calculateCharges(hours1);
    charge2 = calculateCharges(hours2);
    charge3 = calculateCharges(hours3);

    /* Calculate Total */
    totalHours = hours1 + hours2 + hours3;
    totalCharges = charge1 + charge2 + charge3;

    /* Output Table */
    printf("Car\tHours\tCharge\n");
    printf("1\t%.1f\t%.2f\n", hours1, charge1);
    printf("2\t%.1f\t%.2f\n", hours2, charge2);
    printf("3\t%.1f\t%.2f\n", hours3, charge3);
    printf("TOTAL\t%.1f\t%.2f\n", totalHours, totalCharges);

    return 0;
}

/* function calculateCharges */
double calculateCharges(double hours) {
    if (hours <= BASE_HOURS) {
        return BASE_CHARGE;
    } /* end if */
    else if (hours > 24) {
        return MAX_CHARGE;
    } /* end else if */
    else {
        double charge = BASE_CHARGE + ceil(hours - BASE_HOURS) * ADDITIONAL_CHARGE_PER_HOUR;
        return charge > MAX_CHARGE ? MAX_CHARGE : charge;
    } /* end else */
}
