#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float gallons, miles;
    float total_gallons = 0, total_miles = 0;
    float miles_per_gallon, overall_miles_per_gallon;

    while (1) {
        // Get the gallons used
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);

        // Check for the sentinel value
        if (gallons == -1) {
            break;
        }

        // Get the miles driven
        printf("Enter the miles driven: ");
        scanf("%f", &miles);

        // Calculate miles per gallon for this tank
        miles_per_gallon = miles / gallons;
        printf("The miles/gallon for this tank was %.6f\n", miles_per_gallon);

        // Update totals
        total_gallons += gallons;
        total_miles += miles;
    }

    // Calculate and print the overall average miles/gallon
    if (total_gallons > 0) {
        overall_miles_per_gallon = total_miles / total_gallons;
        printf("\nThe overall average miles/gallon was %.6f\n", overall_miles_per_gallon);
    }

    return 0;

}