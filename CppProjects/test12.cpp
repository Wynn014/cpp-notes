#include <iostream> 
int main (){
    int numSubjects;
    double grade;
    double totalGrades = 0.0;

    std::cout << "How many subjects do you have? ";
    std::cin >> numSubjects;

    for (int i = 1; i <= numSubjects; i++){
    std::cout << "Enter grade for subject " << i << ": ";
    std::cin >> grade;

     totalGrades += grade;
    }

    double average = totalGrades / numSubjects;
    std::cout << "\n-------------------------\n";
    std::cout << "Total Grade Sum: " << totalGrades << std::endl;
    std::cout << "Overall Average: " << average << std::endl;

    return 0;
}