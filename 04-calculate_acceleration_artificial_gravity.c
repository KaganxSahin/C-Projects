#include <stdio.h>
#include <math.h>

// Function to calculate artificial gravity from centripetal force, mass, and radius
double calculateArtificialGravity(double force, double mass, double radius) {
    // Calculate acceleration from centripetal force
    double acceleration = force / mass;
    // Calculate centripetal acceleration
    double centripetal_acceleration = acceleration * radius;
    return centripetal_acceleration;
}

int main() {
    double force, mass, radius, artificialGravity;

    // Get input from the user
    printf("Enter the centripetal force (in Newtons): ");
    scanf("%lf", &force);

    printf("Enter the mass (in kilograms): ");
    scanf("%lf", &mass);

    printf("Enter the radius (in meters): ");
    scanf("%lf", &radius);

    // Calculate artificial gravity
    artificialGravity = calculateArtificialGravity(force, mass, radius);

    // Print the result
    printf("The artificial gravity is: %.2f m/s^2\n", artificialGravity);

    // Check if the artificial gravity is equal to 1 g
    double required_acceleration = 9.81;  // m/s^2
    if (fabs(artificialGravity - required_acceleration) < 1e-2) {  // Tolerance of 0.01 m/s^2
        printf("The acceleration produces approximately 1 g of artificial gravity.\n");
    } else {
        printf("The acceleration does not produce 1 g of artificial gravity.\n");
    }

    return 0;
}
