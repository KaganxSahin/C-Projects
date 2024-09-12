#include <stdio.h>

// Function to calculate whether the provided acceleration produces 1 g of artificial gravity
int checkArtificialGravity(double acceleration) {
    // Required acceleration for 1 g of artificial gravity
    double required_acceleration = 9.81;  // m/s^2
    // Compare the provided acceleration with the required acceleration
    return (acceleration == required_acceleration);
}

int main() {
    double acceleration;
    
    // Get input from the user
    printf("Enter the constant acceleration (in meters per second squared): ");
    scanf("%lf", &acceleration);
    
    // Check if the acceleration is equal to 1 g
    if (checkArtificialGravity(acceleration)) {
        printf("The acceleration produces exactly 1 g of artificial gravity.\n");
    } else {
        printf("The acceleration does not produce exactly 1 g of artificial gravity.\n");
    }
    
    return 0;
}
