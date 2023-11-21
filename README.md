# Game of Life Simulation

## Overview

This project is a simple C++ implementation of the "Game of Life," a cellular automaton devised by the British mathematician John Horton Conway in 1970. The Game of Life is not a conventional game, but a zero-player game, where its evolution is determined by its initial state, requiring no further input. It's widely used in computer science and mathematics to study complex systems, emergent behaviors, and for entertainment.

The implementation runs in a terminal environment and offers four hardcoded initial states: "glider," "frog," "gun," and "five." It is a basic, rudimentary version without a graphical interface.

## Features

- **Terminal-based Simulation:** Runs in any standard terminal.
- **Four Initial Configurations:** Choose from "glider," "frog," "gun," and "five" to start the simulation.
- **Customizable Generations:** Users can specify the number of generations for the simulation to run.

## Requirements

- C++ Compiler (GCC or Clang)
- Standard C++ Libraries

## Installation

1. Clone the repository to your local machine.
2. Compile the code using a C++ compiler. For example:
   ```bash
   g++ -o game_of_life main.cpp

## Usage

Run the simulation with the following command format in the terminal:
```bash
./game_of_life <configuration> <generations>

<configuration>: Choose from "glider", "frog", "gun", or "five".
<generations>: Number of generations for the simulation.

## Example

Run the simulation for a "glider" configuration for 50 generations using the command:

```bash
./game_of_life glider 50


