#include <stdio.h>

int main() {
    int mathScore, scienceScore, englishScore;
    float averageScore;

    // Input scores for math, science, and English from the user
    printf("Enter math score: ");
    scanf("%d", &mathScore);
    printf("Enter science score: ");
    scanf("%d", &scienceScore);
    printf("Enter English score: ");
    scanf("%d", &englishScore);

    // Calculate the average score
    averageScore = (mathScore + scienceScore + englishScore) / 3.0;
// Check if the student has passed or failed based on the average  score
    if (averageScore >= 60.0) {
        // If the average score is greater than or equal to 60, the student has passed
        printf("Congratulations! You have passed the exam with an average score of %.2f\n", averageScore);
    } else {
        // If the average score is less than 60, the student has failed
        printf("Sorry, you have failed the exam with an average score of %.2f\n", averageScore);
    }

    return 0;
}
