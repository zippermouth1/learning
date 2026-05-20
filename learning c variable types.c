// displaying product quanity

#include <stdio.h>

int main() {
    // declare variable
    int quanity = 50;

    // display the product quanity
    printf("Product Quanity: %d\n", quanity);

    return 0;
}

// use of short and int in c (height and weight)

#include <stdio.h>

int main() {
    // Declare a short variable for weight and assign it the value 70
    short Weight = 70;
    // Declare an integer variable for height and assign it the value 175
    int Height = 175;
    // Print: "Height: " followed by the value of height
    printf("Height: %d\n", Height);
    // Print: "Weight: " followed by the value of weight
    printf("Weight: %d", Weight);
    
    return 0;;
}

// use of long variable types in c 

#include <stdio.h>

int main() {
    // declare long varaible
    long total_distance = 360590000; // Variable declaration and assignment

    // print total distance traveled
    printf("Total distance traveled: %ld", total_distance); // Use %ld to print long variable

    return 0;
}

// displaying bank balance

#include <stdio.h>

int main() {
    // Declare an int variable for a portion of the balance (in millions)
    // Represent 500 million 
    int millions = 500;
    // Declare a long variable for the total bank balance and assign it the value 10000000
    long bank_balance = 10000000;
    
    // Print the value of millions portion
    printf("Balance in millions: %d million \n", millions);
    
    // Print the total bank balance
    printf("Total Bank Balance: %ld millions", bank_balance);
    
    return 0;
}

// discount price

#include <stdio.h>

int main() {
    // Declare double variable for the original price 
    double originalPrice = 1678.99123340;
    
    // Declare float varaible for the discounted price
    float discountedPrice = 1600.00f;

    // Print the original price
    printf("Original Price: %f\n", originalPrice);
    
    // Print the discounted price
    printf("Discounted Price: %f", discountedPrice);

    return 0;
}

// calculating area of a circle

#include <stdio.h>

int main() {
    // Declare a float variable for the radius and initialize it with 5.345
    float radius = 5.345f;

    // Declare a double variable for the area and initialize it with 89.752232
    double area = 89.752232;

    // Print the radius of the circle
    printf("Radius: %f\n", radius);

    // Print the area of the circle
    printf("Area: %f", area);

    return 0;
}