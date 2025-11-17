# CSE310 C++ Hangman

A simple command-line Hangman game implemented in C++ for my Sprint 1 module.

## Instructions for Build and Use

Prerequisites
* A C++17-capable compiler (MSVC, clang, or gcc).
* Source file: `program.cpp` (project root)
* Optional: a plaintext word list (one word per line) if the program supports external word lists.

Build (Visual Studio 2022)
1. Open the solution or project in Visual Studio 2022.
2. Select the desired configuration (Debug/Release) and platform (x86/x64).
3. Build the project via __Build > Build Solution__ or press __Ctrl+Shift+B__.
4. The executable will be placed in the project's output folder (e.g. `.\Debug\` or `.\Release\`).

Build (command line using MSVC)
1. Open the __Developer Command Prompt for VS 2022__.
2. From the project folder run:
   - `cl /EHsc program.cpp /Fe:hangman.exe`
3. Run the produced `hangman.exe`.

Build (g++ on Windows / Linux / macOS)
1. From a terminal in the project folder run:
   - `g++ -std=c++17 program.cpp -o hangman`
2. Run `./hangman` (or `hangman.exe` on Windows).

Run
* From the build output directory run the executable:
  - Windows: `hangman.exe`
  - Linux/macOS: `./hangman`
* If the program accepts a path to a word list, run:
  - `hangman path/to/words.txt`
* Follow on-screen instructions to play (guess letters until the word is revealed or attempts are exhausted).

Notes
* If input handling or file I/O fails, run the program from a terminal (not from within Visual Studio's debugger) so you can see console output and provide input.
* For iterative changes, rebuild after edits and rerun the executable.

## Development Environment

To recreate the development environment used during authoring:

* Visual Studio 2022 (Community or higher)
* Microsoft C++ (MSVC) toolset (MSVC version ~14.44)
* Windows 10 SDK (e.g. 10.0.26100.0)
* C++ language standard: C++17 or later

Alternative toolchain:
* g++ 9.0+ or clang with C++17 support

## Useful Websites to Learn More

I found these websites useful in developing this software:

* [W3 Schools](https://www.w3schools.com/cpp/default.asp)
* [CPP Reference](https://en.cppreference.com/index.html)
* [Learn C++](https://www.learncpp.com/)

## Future Work

The following items I plan to fix, improve, and/or add to this project in the future:

* [ ] Add a configurable external word list and specify its path in arguments
* [ ] Implement difficulty levels and a scoring system
* [ ] Add a README section for common troubleshooting and examples