#include <stdio.h>

// Function to calculate acceleration from force and mass
double calculateAcceleration(double force, double mass) {
    if (mass == 0) {
        printf("Error: Mass cannot be zero.\n");
        return 0;
    }
    return force / mass;
}

// Function to check if the acceleration produces approximately 1 g of artificial gravity
void checkArtificialGravity(double acceleration) {
    double required_acceleration = 9.81;  // m/s^2
    if (fabs(acceleration - required_acceleration) < 1e-2) {  // Tolerance of 0.01 m/s^2
        printf("The acceleration produces approximately 1 g of artificial gravity.\n");
    } else {
        printf("The acceleration does not produce 1 g of artificial gravity.\n");
    }
}

int main() {
    double force, mass, acceleration;

    // Get input from the user
    printf("Enter the force (in Newtons): ");
    scanf("%lf", &force);

    printf("Enter the mass (in kilograms): ");
    scanf("%lf", &mass);

    // Calculate acceleration
    acceleration = calculateAcceleration(force, mass);

    // Print the result
    printf("The calculated acceleration is: %.2f m/s^2\n", acceleration);

    // Check if the acceleration is approximately 1 g
    checkArtificialGravity(acceleration);

    return 0;
}
