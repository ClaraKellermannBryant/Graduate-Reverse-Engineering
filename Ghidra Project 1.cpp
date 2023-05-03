// Ghidra Project 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This implementation will be used to conduct dynamic analysis of reverse engineering in Ghidra.
// The example uses a simple dragon text game to show Ghidra decompilation.

#include <iostream>
using namespace std;

int main()
{
    int playerUser = 1;
    int purpleDragon = 2;
    int x;
    string player = " ";

    if (playerUser != 1) {
        cout << "Choose Player\n";
        cin >> player;
    }
    else {
        cout << "Welcome Player! This is the game of Reverse Engineering.";
    }

    cout << "Please choose a number from 1 to 15: ";

    cin >> x;

    if (x == 10 || x == 5) {
        cout << "Continue on your journey. But beware, there are disassembly dragons amongst us.";
    }
    else if (x == 15 || x == 1) {
        cout << "You are approaching a dark cave. You wonder what could be inside....";
    }
    else {
        cout << "Oh no! The Purple Dragon has spotted you. It's time to fight!";
    }

    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
