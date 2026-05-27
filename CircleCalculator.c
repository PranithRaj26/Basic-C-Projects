//CIRCLE CALCULATOR PROGRAM

#include <stdio.h>
#include <math.h>

int main(){
    double radius = 0.0;
    double area = 0.0;
    double surfArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfArea = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfArea);
    printf("Volume: %.2lf", volume);
    
    return 0;

}