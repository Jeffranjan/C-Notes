//// If/else statements
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



//// Switch Case Program
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



//// Program to calculate grades using if/else statements
// #include <stdio.h>

// int main() {

//     int grade;
//     printf("Enter your grade: ");
//     scanf("%d", &grade);

//     if (grade < 30 && grade >= 0) {
//         printf("You got C grade");
//     }

//     else if (grade >= 30 && grade < 70) {
//         printf("You got B grade");
//     }

//     else if (grade >= 70 && grade < 90) {
//         printf("You got A grade");
//     }
//     else if (grade >= 90 && grade <= 100) {
//         printf("You got A+ grade");
//     }
//     else {
//         printf("Invalid grade");
//     }
//     return 0;
// }



//// Program to calculate whethere the given alphabet charachter is uppercase or lowercase 
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
// }


//// For Loop
// #include <stdio.h>

// int main () {
//     for (int i = 0; i <=10; i++)
//     {
//         printf("%d \n", i);
//     }
//     return 0;
// }



// // While Loop
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


//// Program to print numbers in reverse and then add them usuing for loops
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



//// Program to print numbers in reverse and then add them usuing while loop
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     int j = n; 
//     while (j > 0){
//        sum += j;
//        printf("%d \n", j);
//        j--; 
//     }
//     printf("%d is the sum of all the above numbers\n", sum);
//     return 0;
// }


// //// Program to calculate multiples of a numbers
// #include <stdio.h>
// int main () {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
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


//// Program to determine whether a number is a multiple of 7 or not 
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



//// Contiue Statement - Printing all the odd numbers from 5 to 50
// #include <stdio.h>
// int main () {
//     // int n;
//     // printf("Enter a number: ");
//     // scanf("%d", &n);

//     for (int i = 5; i <= 50; i++) {
//         if (i % 2 == 0) {  
//            continue;          
//         }
        
//         printf("%d \n", i);
//     }
//     return 0;
// }


////  Finding the factorial of a number 
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

//// Program for calculating average of 3 numbers
// #include <stdio.h>
// int main () {
//     float x, y, z;
//     printf ("Enter 3 numbers: ");
//     scanf("%f %f %f", &x, &y, &z);
//     float avg = (x + y + z)/3;
//     printf("%f", avg);
//     return 0;
// }


//// Write a C program to check if given character is digit or not.
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


//// Program to determine the smallest number between two given numbers
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



// // Program to determine whether the given number is natural or not
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


//// Creating a star pattern with given number of rows and columns
// #include<stdio.h>
// int main() {
//     int rows, columns;
//     printf ("Enter the number of rows and columns respectively: ");
//     scanf("%d %d", &rows, &columns);
//     int i, j;

//     for (i = 1; i <= rows; i++)
//     {   
//         for (j = 1; j <= columns; j++)
//         {s
//             printf("*");
//         }
        
//         printf("\n");
//     }

//     return 0;
// }


//// Functions
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



//// Summing up two numbers using a function
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



// // Program for calculating - square, area of circle, area of square and area of rectangle using functions
// #include <stdio.h>
// // #include <math.h>
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



//// factorial using recurssion
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



// //  A program to convert celcius into Faherenheit and to determine whether the temperature is normal, hot or cold
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



// // Program to calculate the su,, product and average of two integers 
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

//// Arrays
// // Program to print array items
// #include <stdio.h>

// int main () {
//     int arr[] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++) {
//         printf("%d\n", arr[i]);
//     }
    
// }

// // C program to give inputs as an array items and then print it
// #include <stdio.h>

// #define MAX_SIZE 100  // Define a macro for the maximum size of the array

// int main() {
//     int arr[MAX_SIZE];  // Declare an array to store the elements
//     int size;  // Variable to store the number of elements

//     printf("Enter the number of elements (up to %d): ", MAX_SIZE);
//     scanf("%d", &size);  // Read the number of elements from the user

//     printf("Enter the elements:\n");
//     for (int i = 0; i < size; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);  // Read each element from the user
//     }

//     printf("The array elements are:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);  // Print each element of the array
//     }

//     return 0;
// }



//// Program to add GST in the given array of products prices
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

// // Printing Array using functions
// #include <stdio.h>

// void printNumbers(int *arr, int n);

// int main () {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);

//     return 0;
// }

// void printNumbers(int *arr, int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }



// Write a program to display a given string in a pattern (using ‘‘LOOP’’ control statement) :
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


//// Write a program to find the minimum marks among the given marks of 20 students.
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



//// Function to calculate the length of a string with strlen 
// #include <stdio.h>
// int stringLength(const char *str) {

//     int length = 0;  // Initialize length to 0

//     // Iterate through the string until the null character is encountered
//     while (*str != '\0') {
//         length++;   // Increment length
//         str++;      // Move to the next character in the string
//     }

//     return length;  // Return the final length of the string
// }

// int main() {
//     char str[100];  // Declare a character array to store the string

//     printf("Enter a string: ");
//     scanf("%s", str);  // Read the input string from the user

//     int length = stringLength(str);  // Call the stringLength function to calculate the length

//     printf("Length of the string: %d\n", length);  // Print the length of the string

//     return 0;
// }


// Explain the function ‘‘call by reference’’ in C language. Give advantages and disadvantages of it.
// In C programming language, "call by reference" is a method of passing arguments to a function where the actual memory address of the variables is passed to the function parameters. In other words, instead of passing the values themselves, the memory addresses (pointers) of the variables are passed. This allows the function to directly access and modify the original variables in the calling code.

// To use call by reference, you need to pass the address of the variables using pointers. The function parameters should be declared as pointer variables, and inside the function, you can manipulate the values at the memory locations pointed to by those pointers.

// Advantages of call by reference:

// Modification of arguments: Call by reference allows a function to modify the values of variables in the calling code. Any changes made to the referenced variables inside the function are reflected in the original variables.
// Efficiency: Call by reference avoids unnecessary memory duplication when passing large structures or arrays to functions. It saves memory and improves performance since no additional memory is required to store copies of the arguments.
// Multiple return values: Call by reference allows a function to return multiple values by modifying the referenced variables.
// Disadvantages of call by reference:

// Side effects: Since call by reference modifies the original variables, it can have unintended side effects if not used carefully. It can make the code harder to understand and debug, especially when multiple functions are involved.
// Indirect access: Call by reference introduces indirect access to variables through pointers, which can be error-prone if not handled correctly. It requires a good understanding of pointers and careful management of memory addresses.
// Overwriting data accidentally: If the function modifies the referenced variables carelessly, it can accidentally overwrite data in the calling code, leading to unexpected behavior or bugs.
// Overall, call by reference is useful when you need to modify variables inside a function or when you want to avoid the overhead of copying large data structures. However, it requires careful handling of pointers and consideration of potential side effects.



// // Function to determine how many numbers odd numbers are there in an array
// #include <stdio.h>
// #define SIZE 6
// int oddCounter(int arr[], int n);


// int main() {
//     int arr[SIZE];
//     printf("Enter %d numbers: ", SIZE);
//     for (int i = 0; i < SIZE; i++) {
//         printf("Number %d ", i + 1 );
//         scanf("%d", &arr[i]);
//     }
    
//     printf("%d", oddCounter(arr, SIZE));

//     return 0;
// }

// int oddCounter(int arr[], int n) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 != 0) {
//             count++;
//         }
        
//     }
//     return count;
// }


// // Multi-Dimentional Arrays
// #include <stdio.h>

// int main() {
//     int marks[2][3];

//     marks[0][0] = 89;
//     marks[0][1] = 89;
//     marks[0][2] = 89;

//     marks[1][0] = 89;
//     marks[1][1] = 89;
//     marks[1][2] = 89;

//     printf("%d",marks[0][0]);
// }


// // Function to count the occurrences of a number 'x' in an array 'arr'
// #include <stdio.h>

// #define SIZE 10


// int countOccurrences(int arr[], int size, int x) {
//     int count = 0; // Initialize a counter variable to keep track of occurrences
    
//     // Iterate over each element in the array
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == x) { // Check if the current element is equal to 'x'
//             count++; // Increment the count if a match is found
//         }
//     }
    
//     return count; // Return the final count
// }

// int main() {
//     int arr[SIZE] = {2, 5, 6, 3, 9, 2, 5, 8, 2, 4}; // Array of numbers
//     int x; // Number to count occurrences of

//     printf("Enter the number to count occurrences: ");
//     scanf("%d", &x); // Read the number from the user

//     int occurrences = countOccurrences(arr, SIZE, x); // Call the function to count occurrences
//     printf("Number of occurrences of %d: %d\n", x, occurrences); // Print the result

//     return 0;
// }


// // Write a program to print the largest number in an array.
// #include <stdio.h>

// #define SIZE 10

// int findLargestNumber(int arr[], int size) {
//     int largest = arr[0]; // Assume the first element as the largest
    
//     // Iterate over each element in the array
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > largest) { // Compare current element with the largest
//             largest = arr[i]; // Update largest if current element is greater
//         }
//     }
    
//     return largest; // Return the largest number
// }

// int main() {
//     int arr[SIZE] = {3, 9, 5, 2, 8, 1, 7, 6, 4, 10}; // Array of numbers

//     int largestNumber = findLargestNumber(arr, SIZE); // Call the function to find the largest number
//     printf("The largest number is: %d\n", largestNumber); // Print the result

//     return 0;
// }


// // Strings
// #include <stdio.h>

// void printString(const char arr[]);

// int main() {
//     const char firstName[] = "Ranjan";
//     const char lastName[] = "Gupta";

//     printString(firstName);
//     printString(lastName);

//     return 0;
// }

// void printString(const char arr[]) {
//     for (int i = 0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }


// // Strings
// #include <stdio.h>

// int main() {
//     char name[50];
//     scanf("%s", name);
//     printf("Your name is %s", name);

//     return 0;
// }