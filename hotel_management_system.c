#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main() {
    int n, y, score = 0;
    char name[25];
    bool ready = true;
    int r;
    
    while (ready)
    {
    printf(".......... QUIZ GAME LOADING ..........\n");
    printf(" >Press 1 to start the game and 0 to EXIT the game: ");
    scanf("%d", &n);

    if (n == 1) {
        printf(" >You are starting the game now:\n");
        printf(" >.......... LOADING ..........\n");

        printf(" >ENTER YOUR NAME: ");
        while ((getchar()) != '\n');  // Clear input buffer
        fgets(name, 25, stdin);
        name[strcspn(name, "\n")] = '\0';  // Remove newline

        printf(" >>Hello %s, welcome to the GENERAL KNOWLEDGE quiz!\n", name);
        printf(">%s, you are required to get at least 70 points to qualify for the next stage:\n", name);
        printf(" >>YOUR TEST STARTS NOW:\n\n");

        int answer;

        // Question 1
        printf("1. What planet is known as the Red Planet?\n");
        printf("1) Venus\n2) Mars\n3) Jupiter\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 2) { score += 10; printf(">>> CORRECT! +10 POINTS\n\n"); }
        else { printf(">>> WRONG! The correct answer is Mars.\n\n"); }

        // Question 2
        printf("2. Who invented the light bulb?\n");
        printf("1) Albert Einstein\n2) Thomas Edison\n3) Isaac Newton\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            score += 10; printf(">>> CORRECT! +10 POINTS\n\n");
        }

        else
        {
            printf(">>> WRONG! The correct answer is Thomas Edison.\n\n");
        }

        // Question 3
        printf("3. What is the capital of France?\n");
        printf("1) Rome\n2) Berlin\n3) Paris\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 3)
        {
            score += 10;
            printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is Paris.\n\n");
        }

        // Question 4
        printf("4. How many continents are there on Earth?\n");
        printf("1) 5\n2) 7\n3) 6\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            score += 10;
            printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is 7.\n\n");
        }

        // Question 5
        printf("5. What gas do humans need to breathe to survive?\n");
        printf("1) Oxygen\n2) Hydrogen\n3) Carbon Dioxide\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            score += 10;
            printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is Oxygen.\n\n");
        }

        // Question 6
        printf("6. Which is the largest ocean in the world?\n");
        printf("1) Atlantic\n2) Pacific\n3) Indian\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            score += 10; printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is Pacific.\n\n");
        }

        // Question 7
        printf("7. Who wrote 'Romeo and Juliet'?\n");
        printf("1) William Shakespeare\n2) Charles Dickens\n3) Jane Austen\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            score += 10;
            printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is William Shakespeare.\n\n");
        }

        // Question 8
        printf("8. What is the boiling point of water in Celsius?\n");
        printf("1) 90°C\n2) 100°C\n3) 110°C\n> Your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            score += 10;
            printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is 100°C.\n\n");
        }

        // Question 9
        printf("9. What is the largest animal on Earth?\n");
        printf("1) African Elephant\n2) Blue Whale\n3) Giraffe\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
            {
            score += 10;
            printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is Blue Whale.\n\n");
        }

        // Question 10
        printf("10. Which country is known as the Giant of Africa?\n");
        printf("1) Nigeria\n2) Egypt\n3) South Africa\n> Your answer: ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            score += 10;
            printf(">>> CORRECT! +10 POINTS\n\n");
        }
        else
        {
            printf(">>> WRONG! The correct answer is Nigeria.\n\n");
        }

        // Final Score
        printf(">>> YOUR TOTAL SCORE IS: %d out of 100\n", score);
        if (score >= 70) {
            printf(">>> CONGRATULATIONS %s, YOU QUALIFIED FOR THE NEXT STAGE!\n", name);
        } else {
            printf(">>> SORRY %s, YOU DID NOT QUALIFY. Try again!\n", name);
        }

    } else if (n == 0) {
        printf(">DO YOU WANT TO EXIT (YES/NO)?\n");
        printf(">Press 1 for YES and 0 for NO: ");
        scanf("%d", &y);
        if (y == 1) {
            printf(">>> EXITING... BYE!\n");
        } else {
            printf(">Returning to main menu... (You can restart the program)\n");
        }
    } else {
        printf(">>> ENTER VALID INPUT !!! >>>\n");
    } 

    }

    printf("Enter 1 to continue and 0 to end: ");
    scanf("%d", &r);
    if(r==0) ready = false;
 

    return 0;
}
