// #include<stdio.h>
// int main()
// {   
//     int age;
//     printf("Enter a number: ");
//     scanf("%d", &age);
    
//     if (age >= 18)
//     {
//         printf("You are eligible to vote");
//     }
    
//     else
//     {
//         printf("You are not eligible to vote");
//     }
    
// }

// Switch Case Program
// #include<stdio.h>
// int main()
// {   
//     char day;
//     printf("Enter a day: ");
//     scanf("%s", &day);

//     switch (day)
//     {
//     case 'm': printf("Monday");
//         break;
//     case 't': printf("Tuesday");
//         break;
//     case 'w': printf("Wednesay");
//         break;
//     case 'T': printf("Thursday");
//         break;
//     case 'f': printf("Friday");
//         break;
//     case 's': printf("Saturday");
//         break;
//     case 'S': printf("Sunday");
//         break;
//     default: printf("Invalid day");
//     }

//     return 0;
// }

// price Obtained Program
// #include <stdio.h>

// int main() {

//     int price;
//     printf("Enter your price: ");
//     scanf("%d", &price);

//     if (price < 30 && price >= 0) {
//         printf("You got C grade");
//     }

//     else if (price >= 30 && price < 70) {
//         printf("You got B grade");
//     }

//     else if (price >= 70 && price < 90) {
//         printf("You got A grade");
//     }
//     else if (price >= 90 && price <= 100) {
//         printf("You got A+ grade");
//     }
//     else {
//         printf("Invalid price");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main() {
// int x = 2;
// if (x == 1) {
// printf("x is equal to 1");
// } else {
// printf("x is not equal to 1");
// }
// }

// #include <stdio.h>

// int main(){
//     char letter;
//     printf("Enter a letter: ");
//     scanf("%c", &letter);

//     if (letter >= 'A' && letter <= 'Z') {
//         printf("%c is an uppercase letter", letter);
//     }
//     else if (letter >= 'a' && letter <= 'z') {
//             printf("%c is a lowercase letter", letter);
//         }
//     else {
//         printf("%c is not a letter", letter);
//     }
//     }

// For Loop
// #include <stdio.h>

// int main () {
//     for (int i = 0; i <=10; i++)
//     {
//         printf("%d \n", i);
//     }
//     return 0;
// }

// Whilte Loop
// #include <stdio.h>
// int main () {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int i = 0;
//     while (i <= n) {
//         printf("%d \n", i);
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int n;
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     for (int j = n; j >= 0; j--) {
//         sum = sum + j;
//         printf("%d \n", j);
//     }
//     printf("%d is the sum of all the above numbers\n", sum);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     int j = n; 
//     while (j > 0){
//        sum = sum + j;
//        printf("%d \n", j);
//        j--; 
//     }
//     printf("%d is the sum of all the above numbers\n", sum);
//     return 0;
// }

// int main () {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d \n", n*i); 
//     }
//     return 0;
// }

// Break Statement
// #include <stdio.h>
// int main () {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <=n; i++){
//         if (n % 2 != 0){
//             printf("Sorry %d is an odd number", n);
//             break;
//         }
          
//         printf("%d \n", i*n);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main () {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n % 7 == 0)
//     {
//         printf("%d is a multiple of 7", n);
//     }
//     else
//     {
//         int i = 1;
//         do {
//             printf("%d \n", i * n);
//             i++;
//         } while (i <= n);
        
//     }
//     return 0;
// }

// Contiue Statement
// #include <stdio.h>
// int main () {
//     // int n;
//     // printf("Enter a number: ");
//     // scanf("%d", &n);

//     for (int i = 5; i <= 50; i++) {
//         if (i % 2 == 0) {  
//            continue;           /*Printing all the odd numbers from 5 to 50*/
//         }
        
//         printf("%d \n", i);
//     }
//     return 0;
// }

//  Finding the factorial of a number 
// #include <stdio.h>
// int main () {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int fact = 1;

//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     printf("%d \n", fact);
//     return 0;
// }

// Program for calculating average of 3 numbers
// #include <stdio.h>
// int main () {
//     float x, y, z;
//     printf ("Enter 3 numbers: ");
//     scanf("%f %f %f", &x, &y, &z);
//     float avg = (x + y + z)/3;
//     printf("%f", avg);
//     return 0;
// }


// Write a C program to check if given character is digit or not.
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if (isdigit(ch)) {
//         printf("%c is a digit.\n", ch);
//     } else {
//         printf("%c is not a digit.\n", ch);
//     }

//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int x, y;
//     printf ("Enter 2 numbers: ");
//     scanf("%d %d", &x, &y);

//     if (x < y)
//     {
//         printf("The smallest number is %d", x);
//     }
//     else
//     {
//         printf("The smallest number is %d", y);
//     }
// }

// #include<stdio.h>
// int main() {
//     int x;
//     printf ("Enter a number: ");
//     scanf("%d", &x);

//     if (x > 0)
//     {
//         printf("%d is a nutral number", x);
//     }
//     else
//     {
//         printf("%d is not a natural number", x);
//     }
// }


// Creating a star patter with given number of rows and columns
// #include<stdio.h>
// int main() {
//     int rows, columns;
//     printf ("Enter the number of rows and columns respectively: ");
//     scanf("%d %d", &rows, &columns);
//     int i, j;

//     for (i = 1; i <= rows; i++)
//     {   
//         for (j = 1; j <= columns; j++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//     }

//     return 0;
// }

// Functions
// #include <stdio.h>

// void printNamaste();
// void printBonjour();

// int main() {
//     char ch;
//     printf("Enter 'f' for French and 'i' for Indian: ");
//     scanf("%c", &ch);
//     if (ch == 'i') {
//         printNamaste();
//     } else if (ch == 'f') {
//         printBonjour();
//     }
//       else {
//         printf("Invalid Entry");
//      }
     

//     return 0;
// }

// void printNamaste() {
//     printf("Namaste!\n");
// }

// void printBonjour() {
//     printf("Bonjour!\n");
// }

// Summing up numbers using a function
// #include <stdio.h>
// int sum(int x, int y);
// int main() {
//     int x, y;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     int s = sum(x, y);
//     printf("%d is the Sum", s);
// }

// int sum (int x , int y) {
//     return x + y;
// }

// Summing up numbers using a function
// #include <stdio.h>
// #include <math.h>
// float square(float x);
// float circleArea (float r);
// float squareArea (float s);
// float rectangleArea (float l, float b);
// int main() {
//     float l, b;
//     printf("Enter the length of the reactangle: ");
//     scanf("%f", &l);
//     printf("Enter the breadth of the reactangle: ");
//     scanf("%f", &b);
//     float a = rectangleArea(l, b);
//     printf("%f is the area of the sqaure\n", a);
//     return 0;
// }

// float square (float x) {
//    return pow (x, 2);
// }

// float circleArea (float r) {
//     return 3.14 * r * r;
// }

// float squareArea (float s) {
//     return s * s;
// }

// float rectangleArea (float l, float b) {
//     return l * b;
// }


// factorial using recurssion
// #include <stdio.h>
// int fact(int n);

// int main(){
//     printf("The factorial is %d", fact(5));
//     return 0;
// }

// int fact (int n) {
//     if (n == 0) {
//         return 1;
//     }
//     int factNew = fact(n - 1) * n;
//     return factNew;
// }


// #include <stdio.h>

// float convertTemp(float c);

// int main() {

//     float celsius = 25;
//     float fahrenheit = convertTemp(celsius);

//     printf("The temperature in Fahrenheit is: %f\n", fahrenheit);

//     if (fahrenheit <= 68) {
//         printf("The temperature is cold\n");
//     } else if (fahrenheit <= 86) {
//         printf("The temperature is normal\n");
//     } else {
//         printf("The temperature is hot\n");
//     }

//     return 0;
// }

// float convertTemp(float celsius) {
//     return celsius * (9.0 / 5.0) + 32;
// }



// #include <stdio.h>
// void doWork (int a, int b);

// int main () {
//     int a = 3, b = 5;
//     doWork(a, b);

//     return 0;
// }
 
// void doWork (int a, int b) {
//     int sum = a + b;
//     int product = a * b;
//     int average = (a*b)/2;

//     printf("The sum is %d\n", sum);
//     printf("The product is %d\n", product);
//     printf("The average is %d\n", average);
// }


// #include <stdio.h>
// void doWork (int a, int b, int *sum, int *product, int *average);

// int main () {
//     int a = 3, b = 5;
//     int sum, product, average;
//     doWork(a, b, &sum, &product, &average);

//     printf("Sum = %d, Product = %d, Average = %d\n", sum, product, average);
//     return 0;
// }
 
// void doWork (int a, int b, int *sum, int *product, int *average) {
//     *sum = a + b;
//     *product = a * b;
//     *average = (a*b)/2;
// }


// Write a program in C to find the maximum number between two numbers using a pointer.
// #include <stdio.h>
// int maxNum (int *ptr1, int *ptr2);

// int main () {
//     int num1, num2;
    
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
    
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
    
//     int max  = maxNum(&num1, &num2);
//     printf("The maximum number is: %d\n", max);
//     return 0;
// }
 
// int maxNum (int *ptr1, int *ptr2) {
//     if (*ptr1 > *ptr2)
//     {
//         return *ptr1;
//     }
//     else
//     {
//         *ptr2;
//     }
// }

// Arrays
// #include <stdio.h>

// int main() {
//     float price[3];
//     printf("Laptop Price: ");
//     scanf("%f", &price[0]);

//     printf("Smartphone Price: ");
//     scanf("%f", &price[1]);

//     printf("Tablet Price: ");
//     scanf("%f", &price[2]);

//     float GST = 0.18;

//     price[0] += price[0] * GST;
//     price[1] += price[1] * GST;
//     price[2] += price[2] * GST;

//     printf("Laptop Price: %f, Smartphone Price: %f, Tablet Price: %f", price[0], price[1], price[2]);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int fact = 1;
    
//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     printf("%d", fact);

//     return 0;
// }       

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "RANJAN";
//     int length = strlen(str);

//     for (int i = 0; i < length; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%c", str[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// Write a program to find the minimum marks among the given marks of 20 students.
// #include <stdio.h>
// #define SIZE 20

// int findMinimumMarks(int marks[], int size);

// int main() {
//     int marks[SIZE];

//     printf("Enter the marks of 20 students:\n");
//     for (int i = 0; i < SIZE; i++) {
//         printf("Student %d: ", i + 1);
//         scanf("%d", &marks[i]);
//     }

//     int minimumMarks = findMinimumMarks(marks, SIZE);
//     printf("The minimum marks among the given marks is: %d\n", minimumMarks);

//     return 0;
// }

// int findMinimumMarks(int marks[], int size) {
//     int minimum = marks[0];

//     for (int i = 1; i < size; i++) {
//         if (marks[i] < minimum) {
//             minimum = marks[i];
//         }
//     }

//     return minimum;
// }

#include <stdio.h>

int stringLength(const char *str) {
    // Function to calculate the length of a string

    int length = 0;  // Initialize length to 0

    // Iterate through the string until the null character is encountered
    while (*str != '\0') {
        length++;   // Increment length
        str++;      // Move to the next character in the string
    }

    return length;  // Return the final length of the string
}

int main() {
    char str[100];  // Declare a character array to store the string

    printf("Enter a string: ");
    scanf("%s", str);  // Read the input string from the user

    int length = stringLength(str);  // Call the stringLength function to calculate the length

    printf("Length of the string: %d\n", length);  // Print the length of the string

    return 0;
}
