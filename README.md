# Game_of_Life

README for Game of Life Simulation
Overview
This project is a simple C++ implementation of the "Game of Life," a cellular automaton devised by the British mathematician John Horton Conway in 1970. The Game of Life is not a game in the conventional sense but an example of a zero-player game, meaning its evolution is determined by its initial state, with no further input. It has been widely popular in computer science and mathematics for studying complex systems, emergent behaviors, and for entertainment purposes.

Our implementation of the Game of Life runs in a terminal environment and offers four hardcoded initial states: "glider," "frog," "gun," and "five." It is a basic, rudimentary version without a graphical interface.

Features
Terminal-based Simulation: Runs in any standard terminal.
Four Initial Configurations: Choose from "glider," "frog," "gun," and "five" to start the simulation.
Customizable Generations: Users can specify the number of generations for which the simulation will run.
Requirements
C++ Compiler (GCC or Clang)
Standard C++ Libraries
Installation
Clone the repository to your local machine.
Compile the code using a C++ compiler. For example:
css
Copy code
g++ -o game_of_life main.cpp
Usage
To run the simulation, use the following command format in the terminal:

php
Copy code
./game_of_life <configuration> <generations>
<configuration>: One of the four initial states ("glider", "frog", "gun", "five").
<generations>: Number of generations for the simulation.
Example:

bash
Copy code
./game_of_life glider 50
Contributions
Contributions to this project are welcome. Please ensure to follow best coding practices and provide adequate documentation for your changes.

License
This project is open-source and available under MIT License.

Contact
For any queries or contributions, please contact Stepan Benes at stepan.benes@gmail.com.
