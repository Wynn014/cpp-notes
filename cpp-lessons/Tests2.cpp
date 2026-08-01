#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip> // Required for std::setw and std::setfill to format numbers nicely

int main() {
    // Standard 24-hour clock structure using nested loops
    for (int hours = 0; hours < 24; hours++) {
        for (int minutes = 0; minutes < 60; minutes++) {
            for (int seconds = 0; seconds < 60; seconds++) {
                
                // 1. Clear the terminal screen so the time stays in one place
                // "\033[2J" clears the screen, "\033[H" moves the cursor to the top-left
                std::cout << "\033[2J\033[H";
                
                // 2. Print the time nicely formatted (e.g., 02:05:09 instead of 2:5:9)
                // std::setw(2) forces the number to take up 2 spaces, std::setfill('0') fills empty spaces with a zero
                std::cout << std::setfill('0') << std::setw(2) << hours << ":"
                          << std::setfill('0') << std::setw(2) << minutes << ":"
                          << std::setfill('0') << std::setw(2) << seconds << "\n";
                
                // 3. Wait exactly 1 second before updating the loop
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        }
    }
    
    return 0;
}