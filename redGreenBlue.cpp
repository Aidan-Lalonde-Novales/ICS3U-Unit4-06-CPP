// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-28
// This program prints all possible RGB values.

#include <iostream>
#include <string>

int main() {
    // this function prints all possible RGB values.

    // process, output
    for (int red = 255; red < 256; red++) {
        for (int green = 255; green < 256; green++) {
            for (int blue = 0; blue < 256; blue++) {
                std::cout << "RGB (" << red << "," << green << "," <<
                blue << ")" << std::endl;
            }
        }
    }

    std::cout << "\nDone." << std::endl;
}
