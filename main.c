#include <stdio.h> 

 int main() {
    int mainChoice = 0; // Stores the user's main menu selection

    // Professional application header section
    printf("========================================\n");
    printf("            WELL-CHECK C                \n");
    printf("  A Text-Based Student Wellness App     \n");
    printf("========================================\n");

    // This loop keeps the app running continuously until the user chooses option 4 to exit
    while (mainChoice != 4) {
        printf("\n---MAIN MENU---\n");
        printf("1. Wellness Advisor\n");
        printf("2. Wellness Quiz\n");
        printf("3. Coding Challenges\n");
        printf("4. Exit App\n");
        printf("Enter your choice (1-4):");

        // Read user input
        scanf("%d", &mainChoice);

        // Process user choice
    switch(mainChoice) {
        case 1 :
        printf("Feel free to seek guidance below:\n");
        printf("1. Headache / Stress\n");
        printf("2. Eye Strain from Screens\n");

        int advisorChoice; // Creates a temporary variable to hold the chosen symptom
        printf("Select your symptom (1-2): ");
        scanf("%d", &advisorChoice); // Reads the symptom choice integer from the user 

        //Checks if the user chose option 1 (Headache / Stress)
        if (advisorChoice == 1) {
            printf("\n-> Tip: Take a 15-minute screen break, drink water, and rest.\n");
        }
        // Checks if the user chose option 2 (Eye Strain)
        else if (advisorChoice == 2) {
            printf("\n-> Tip: Follow the 20-20-20 rule. Look 20 feet away for 20 seconds.\n");
        }
        // Handles any entry that is not 1 or 2
        else{
            printf("\nInvalid symptom choice.\n");
        }
        break; // Exits case 1 and goes back to the main loop

        // ---CASE 2: THE INTERACTIVE WELLNESS QUIZ ---
        case 2:
        printf("\n---WELLNESS QUIZ---\n");
        int score = 0; // Initialize the wellness score counter at 0
        int answer; // Creates a temporary variable to hold quiz answers

        // --- QUIZ QUESTION 1 ---
        printf("\n1. How many hours of sleep did you get last night?\n");
        printf("1) Less than 5 hours\n2) 5-6 hours\n3) 7-9 hours\nChoice: ");
        scanf("%d", &answer); // Stores the user's multiple-choice option

        if (answer == 3) score += 2; //Adds 2 points for the healthiest answer (7-9 hours)
        else if (answer == 2) score += 1; //Adds 1 point for moderate sleep (5-6 hours)

        // ---QUIZ QUESTION 2---
        printf("\n2. How many cups of water have you had today?\n");
        printf("1) 1-3 cups\n2) 4-7 cups\n3) 8+ cups\nChoice: ");
        scanf("%d", &answer); // Stores the user's second answer

        if (answer == 3) score += 2; //Adds 2 points for excellent hydration (8+ cups)
        else if (answer == 2) score += 1; //Adds 1 point for moderate hydration (4-7 cups)

        // ---QUIZ SCORE DISPLAY---
        printf("\nYour Wellness Score: %d / 4\n", score); //Prints final tally out of 4 points
        break; // Exits Case 2 and goes back to the main loop

        // ---CASE 3: THE CODING CHALLENGE (HEALTH MATH)---
        case 3:
        printf("\n--- CHALLENGE: MACRONUTRIENT MATH ---\n"); // Prints the challenge header
        printf("Formula: (Carbs *4) + (Protein *4) + (Fat *9)\n");

        int carbs, protein, fat; //Declares inputs for raw macronutrient grams
        int userTotalCalories, correctCalories; //Declares variables to hold answers

        //Gathers test data from the user
        printf("Enter grams of Carbs: ");
        scanf("%d", &carbs);
        printf("Enter grams of Protein");
        scanf("%d", &protein);
        printf("Enter grams of Fat");
        scanf("%d", &fat );

        //The backened calcuation using standard dietary caloric values
        correctCalories - (carbs *4) + (protein *4) + (fat *9);

        //Challenges the user to input their manual calculation
        printf("\nCalculate the total calories for these macros: ");
        scanf("%d", &userTotalCalories);
        
        //Conditional block checking if the user's math matches the computer's calculation
        if (userTotalCalories == correctCalories) {
            printf("Exact match! Your program formula math checks out./n");
        } else {
            printf("Match Error. The correct answer was %d calories.\n", correctCalories);
        }
        break; // Exits Case 3 and goes back to the main loop

        // ---CASE 4: EXITING THE APPLICATION---
        case 4:
        printf("\nThak you for using Well-Check C.\n");
        break; // Exits Case 4, allowing the main while loop condition to fail and close the app

        // ---DEFAULT CASE: WRONG MENU INPUTS---
        default:
        printf("\nInvalid choice. Please enter a number between 1 and 4.\n");
    } //Closes the switch statement
} // Closes the while loop

return 0;
} //Closes the main function
    