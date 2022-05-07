// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program figures out the area of a triangle

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;

void CalcArea(float base, float height) {
    float area = base * height / 2;
    cout << "the area = " << area;
}


int main() {
    while (true) {
        float baseFromUsr, heightFromUsr;
        string baseStr, heightStr, garbage;
        cout << "Input your base: ";
        cin >> baseStr;
        cout << "Input your height: ";
        cin >> heightStr;
        try {
            baseFromUsr = std::stof(baseStr);
            heightFromUsr = std::stof(heightStr);
            CalcArea(baseFromUsr, heightFromUsr);
        } catch (...) {
            cout << "you have to input an integer";
        }
        cin.get();
        cout << "\nPress the <enter> key to restart the program: ";
        if (cin.get() == '\n') {
            continue;
        } else if (cin.get() != '\n') {
            cin >> garbage;
            continue;
        }
    }
}
