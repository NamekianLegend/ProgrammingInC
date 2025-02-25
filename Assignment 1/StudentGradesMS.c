#include <stdio.h>
#include <stdbool.h> // Include the header for boolean type

int main() {
    char studentName[50]; // Use a fixed size array for student name
    int grade1, grade2, grade3, grade4; // Separate variables for each subject's grade
    int totalMarks; // Use a separate variable for total marks
    float studentAverage; // Use a float variable for student average
    bool status; // Use a boolean variable for pass/fail status
    int numOfStudentsProcessed = 0; // Initialize the number of students processed to 0
    float classAverage = 0.0f; // Initialize the class average to 0.0

    printf("Welcome to the Student Grades Management System\n");
    printf("================================================\n");
    printf("\n");

    while (true) { // Use an infinite loop to process multiple students
        printf("Enter student name: \n"); // Prompt the user to enter student name
        scanf(" %[^\n]", &studentName); // Read the student name as a string
        printf("Enter grade for Subject 1:\n"); // Prompt the user to enter grade for Subject 1
        scanf("%d", &grade1); // Read the grade for Subject 1 as an integer
        if (grade1 < 0 || grade1 > 100) { // Check if the grade is valid
            printf("Invalid grade entered. Please enter a grade between 0 and 100.\n"); // Print an error message
            continue; // Skip the rest of the loop and start from the beginning
        }
        printf("Enter grade for Subject 2:\n"); // Prompt the user to enter grade for Subject 2
        scanf("%d", &grade2); // Read the grade for Subject 2 as an integer
        if (grade2 < 0 || grade2 > 100) { // Check if the grade is valid
            printf("Invalid grade entered. Please enter a grade between 0 and 100.\n"); // Print an error message
            continue; // Skip the rest of the loop and start from the beginning
        }
        printf("Enter grade for Subject 3:\n"); // Prompt the user to enter grade for Subject 3
        scanf("%d", &grade3); // Read the grade for Subject 3 as an integer
        if (grade3 < 0 || grade3 > 100) { // Check if the grade is valid
            printf("Invalid grade entered. Please enter a grade between 0 and 100.\n"); // Print an error message
            continue; // Skip the rest of the loop and start from the beginning
        }
        printf("Enter grade for Subject 4:\n"); // Prompt the user to enter grade for Subject 4
        scanf("%d", &grade4); // Read the grade for Subject 4 as an integer
        if (grade4 < 0 || grade4 > 100) { // Check if the grade is valid
            printf("Invalid grade entered. Please enter a grade between 0 and 100.\n"); // Print an error message
            continue; // Skip the rest of the loop and start from the beginning
        }
        totalMarks = grade1 + grade2 + grade3 + grade4; // Calculate the total marks
        studentAverage = (float)(totalMarks) / 4.0f; // Calculate the student average by casting totalMarks to float
        if (studentAverage >= 50) { // Check if the student average is greater than or equal to 50
            status = true; // Set status to true for pass
        } else { // If the student average is less than 50
            status = false; // Set status to false for fail
        }
        printf("====================================\n"); // Print a separator
        printf("Results for: %s\n", studentName); // Print the student name with the label "Results for:"
        printf("Total Marks: %d\n", totalMarks); // Print the total marks
        printf("Average Marks: %.2f\n", studentAverage); // Print the student average with 2 decimal places
        printf("Status: %s\n", status ? "Pass" : "Fail"); // Print status based on boolean value
        printf("====================================\n"); // Print a separator

        // Update the number of students processed and class average
        numOfStudentsProcessed++; // Increment the number of students processed
        classAverage += studentAverage; // Add the student average to the class average

        printf("Do you want to enter details for another student? (1 for yes, 0 for no): "); // Ask the user if they want to continue adding more students and their details
        int continueInput; // Declare a variable to store the user input
        scanf("%d", &continueInput); // Read the user input
            // Break the loop if continueInput is 0
            if (continueInput == 0) { // Check if the user input is 0
                    break; // Exit the loop
                }
            }

    printf("====================================\n"); // Print a separator

    // Calculate the final class average
    if (numOfStudentsProcessed > 0) { // Check if any students were processed
        classAverage /= (float)numOfStudentsProcessed; // Calculate the final class average by dividing by the number of students processed
    }

    printf("Final Summary:\n"); // Print the final summary statement
    printf("Number of students processed: %d\n", numOfStudentsProcessed); // Print the number of students processed
    printf("Class Average: %.2f\n", classAverage); // Print the final class average with 2 decimal places
    printf("====================================\n"); // Print a separator
    printf("Thank you for using the Student Grades Management System.\n"); // Print a closing message

    return 0; // Return 0 to indicate successful completion
}
