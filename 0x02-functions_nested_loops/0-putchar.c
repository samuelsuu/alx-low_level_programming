#include <stdio.h>
#include <unistd.h> // Include the necessary header for the write function

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *output = "_putchar\n"; // Define the desired output

    // Use the write function to print the output to the standard output (stdout)
    // File descriptor 1 represents stdout
    write(1, output, 9); // 9 is the length of the output string

    return (0); // Return 0 to indicate success
}
#include <stdio.h>
#include <unistd.h> // Include the necessary header for the write function

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *output = "_putchar\n"; // Define the desired output

    // Use the write function to print the output to the standard output (stdout)
    // File descriptor 1 represents stdout
    write(1, output, 9); // 9 is the length of the output string

    return (0); // Return 0 to indicate success
}
