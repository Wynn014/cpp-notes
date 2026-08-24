#include <iostream>
#include <string>

int main() {
    // correct answers
    char q1_correct = 'B';
    char q2_correct = 'D';
    char q3_correct = 'A';
    char q4_correct = 'C';
    char q5_correct = 'B';

    // answers input
    char q1_user, q2_user, q3_user, q4_user, q5_user;
    
    int score = 0;
    double percentage;
    std::string letter_grade;

    std::cout << "=== Online Quiz Grading System ===\n";
    std::cout << "Please enter your answers as A, B, C, or D.\n\n";

    // Question 1
    std::cout << "Q1: ";
    std::cin >> q1_user;
    if (q1_user == q1_correct) {
        score++;
    }

    // Question 2
    std::cout << "Q2: ";
    std::cin >> q2_user;
    if (q2_user == q2_correct) {
        score++;
    }

    // Question 3
    std::cout << "Q3: ";
    std::cin >> q3_user;
    if (q3_user == q3_correct) {
        score++;
    }

    // Question 4
    std::cout << "Q4: ";
    std::cin >> q4_user;
    if (q4_user == q4_correct) {
        score++;
    }

    // Question 5
    std::cout << "Q5: ";
    std::cin >> q5_user;
    if (q5_user == q5_correct) {
        score++;
    }

    // Compute percentage score
    percentage = (score / 5.0) * 100;

    // Assign a letter grade using a switch statement based on total score (0 to 5)
    switch (score) {
        case 5:
            letter_grade = "A";
            break;
        case 4:
            letter_grade = "B";
            break;
        case 3:
            letter_grade = "C";
            break;
        case 2:
            letter_grade = "D";
            break;
        case 1:
        case 0:
            letter_grade = "F";
            break;
        default:
            letter_grade = "Invalid";
            break;
    }

    // Print summary
    std::cout << "\n--- Quiz Summary ---\n";
    std::cout << "Number Correct: " << score << " out of 5\n";
    std::cout << "Percentage: " << percentage << "%\n";
    std::cout << "Letter Grade: " << letter_grade << "\n";

    return 0;
}