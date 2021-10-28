// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate average and list

#include <iostream>
#include <string>
#include <list>

template<size_t N>
int calculatedRotates(std::list<int> calculateRotatesList,
                      int calculateKNumber) {
    // This function calculate average and list
    std::list<int> rotatesNumberList;
    int factionRotatesNumber = 0;

    // process
    for (int loopNumberFirst = calculateKNumber;
             loopNumberFirst < calculateRotatesList.size();
             ++loopNumberFirst) {
        factionRotatesNumber = calculateRotatesList[loopNumberFirst];
        rotatesNumberList.push_back(factionRotatesNumber);
    }
    for (int loopNumberSecond = 0;
             loopNumberSecond < calculateKNumber;
             ++loopNumberSecond) {
        factionRotatesNumber = calculateRotatesList[loopNumberSecond];
        rotatesNumberList.push_back(factionRotatesNumber);
    }

    return rotatesNumberList;
}

int main() {
    // This Program calculate average
    std::list<int> rotatesList;
    int rotatesNumber;

    std::string userKString;
    int userKNumber = -1;
    std::string userRotatesString;
    int userRotatesNumber = 0;

    // output
    std::cout << "Please enter 1 integer at a time. Enter -1 to end."
    << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "How many number do you rotate?: ";
    std::cin >> userKString;

    try {
        userKNumber = std::stoi(userKString);
        while (userRotatesNumber != -1) {
            // input
            std::cout << "What is your integer?: ";
            std::cin >> userRotatesString;
            try {
                userRotatesNumber = std::stoi(userRotatesString);
                rotatesList.push_back(userRotatesNumber);
            } catch (std::invalid_argument) {
                // output
                std::cout << "You didn't enter an integer." << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
    }

    // check k length
    if (userKNumber >= 0 && userKNumber <= rotatesList.size() - 1) {
        // remove -1
        rotatesList.pop_back();
        // call functions
        rotatesNumber = calculatedRotates(rotatesList, userKNumber);

        // output
        std::cout << "" << std::endl;
        std::cout << rotatesNumber << std::endl;
    } else {
        // output
        std::cout << "" << std::endl;
        std::cout << "You have a error about rotates number." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
