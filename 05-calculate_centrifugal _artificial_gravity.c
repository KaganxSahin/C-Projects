#include <stdio.h>
#include <math.h>

// Function to calculate artificial gravity
double calculateArtificialGravity(double diameter, double frequency) {
    double r = diameter / 2.0;  // radius is half of the diameter
    double omega = 2 * M_PI * frequency;  // angular velocity (rad/s)
    double v = omega * r;  // velocity (m/s)
    double artificial_g = v * v / r;  // artificial gravity (m/s^2)
    
    return artificial_g / 9.81;  // in terms of g (relative to Earth's gravity)
}

int main() {
    double diameter, frequency;
    
    // Get input from the user
    printf("Enter the diameter of the rotating wheel (in meters): ");
    scanf("%lf", &diameter);
    
    printf("Enter the wheel's rotations per second (in Hz): ");
    scanf("%lf", &frequency);
    
    // Calculate artificial gravity
    double artificialGravity = calculateArtificialGravity(diameter, frequency);
    
    // Print the result
    printf("Artificial gravity: %.2f g\n", artificialGravity);
    
    return 0;
}
