#include <iostream>
#include <ctime> // importing ctime to set seed for srand
#include <cstring> // to use .lower() func
#include <algorithm>

int main(){
    std::cout << "******NUMBER GUESSING GAME******\n";
    srand(time(NULL));
    int guess;
    int tries = 0;
    std::string difficulty;
    std::cout << "Choose Difficulty:(easy,medium,hard) ";
    std::cin >> difficulty;
    std::transform(difficulty.begin(), difficulty.end(), difficulty.begin(),
    ::tolower);
    if (difficulty == "easy"){ // setting difficulty to easy

        std::cout << "Difficulty is set to easy(1-20)";
        int easy_diff = (rand()%20) + 1; // makes it a max of 20 numbers
         while (tries<10){
            std::cout << "\nGuess the number: ";
            std::cin >> guess;
            if(guess == easy_diff ){
                std::cout << "You won!";
                
                break;
            }else if(guess>easy_diff){
                std::cout << "too high\n";
                tries+=1;
                
                std::cout << "You have " <<10 -tries << " remaining";
            }else if(guess<easy_diff){
                std::cout << "too low\n";
                tries+=1;
                std::cout << "You have " <<10 -tries << " tries remaining";
            }

        }
        }else if(difficulty == "medium"){
            std::cout << "difficulty is set to medium(1-50)";
            int medium_diff = (rand()%50) +1;
            while (true){
            std::cout << "\nGuess the number: ";
            std::cin >> guess;
            if(guess == medium_diff ){
                std::cout << "You won!";
                
                break;
            }else if(guess>medium_diff){
                std::cout << "too high\n";
                tries += 1;
                std::cout << "You have " <<10 -tries << " tries remaining";
            }else if(guess<medium_diff){
                std::cout << "too low\n";
                tries += 1;
                std::cout << "You have " <<10 -tries << " tries remaining";
            }

        }
    }else if(difficulty == "hard"){
        
            std::cout << "difficulty is set to hard(1-100)";
            int hard_diff = (rand()%100) +1;
            while (true){
            std::cout << "\nGuess the number: ";
            std::cin >> guess;
            if(guess == hard_diff ){
                std::cout << "You won!";
                
                break;
            }else if(guess>hard_diff){
                std::cout << "too high\n";
                tries += 1;
                std::cout << "You have " <<10 -tries << " tries remaining";
            }else if(guess<hard_diff){
                std::cout << "too low\n";
                tries += 1;
                std::cout << "You have " <<10 -tries << " tries remaining";
            }

        }

    }else{
    std::cout << "something went wrong";
    }
    return 0;
}

