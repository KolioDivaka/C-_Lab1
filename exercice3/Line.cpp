//
// Created by Kolio on 10/3/2026.
//

#include "Line.h"

#include <iostream>

Line::Line(int len) {
    this->len = len;
    this->content = new char[len + 1]; // +1 for the null terminator '\0'

    for (int i = 0; i < len; i++) {
        content[i] = '*';
    }
    content[len] = '\0'; // Properly terminates the C-string

    std::cout << content << std::endl;
}

Line::~Line() {
    std::cout << "Deleting the line!"<<this->len << std::endl;
    delete []content;
}

