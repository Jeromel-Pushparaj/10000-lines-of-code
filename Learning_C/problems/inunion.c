#include <stdio.h>
#include<string.h>


// Define the union
union Data {
    int integerValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Declare and initialize a union variable
    union Data data;

    // Initialize the union with an integer value
    data.integerValue = 42;

    // Access and print the integer value
    printf("Integer Value: %d\n", data.integerValue);

    // Initialize the union with a float value
    data.floatValue = 3.14;

    // Access and print the float value
    printf("Float Value: %f\n", data.floatValue);

    // Initialize the union with a string value
    strcpy(data.stringValue, "Hello, Union!");

    // Access and print the string value
    printf("String Value: %s\n", data.stringValue);

    return 0;
}
