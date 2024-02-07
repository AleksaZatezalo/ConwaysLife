# Conway's Game of Life Coded in C++
Conway’s game of life is a cellular automation game simply known as Life. It was designed by Mathematician John Horton Conway in 1970 and is a Zero Player Game, meaning it’s outcome is dependent on it’s initial state. It has 4 basic rules which are as follows:

    1. Any live cell with fewer than two live neighbors dies, as if by under population.
    2. Any live cell with two or three live neighbors lives on to the next generation.
    3. Any live cell with more than three live neighbors dies, as if by overpopulation.
    4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
    
## The Glider
The glider with is defined by five cells located at (x, y), (x+1, y), (x+2, y), (x+2, y+1) and (x+1, y+2) coordinates respectively. It glides across the screen diagonally and can collide with other gliders to produce more complex patterns. If gliders collide correctly they can be used to create And, Or, and Not Gates making for a Turing Complete Computer with theoretically infinite memory and computing power. Because of this it is considered emblematic of the hacker community

## This Version
This version of Life is coded in C++. It randomly populates the board with living cells and allows you to watch the development of the board in real time. This version was created with the intent of being as memory efficient as possible. 

## Contribution Guidelines
When contributing to this repository, please first discuss the change you wish to make via issue here on GitHub. Make sure all pull requests are tagged with a specific ticket number found in the repositories issues section.Before making any changes please create your own branch. Follow all three points below before opening a PR:
1. Any changes you want to create must be tagged to an issue opened on this repo. If an issue you've found does not yet exit, please open it.
2. Ensure any install or build dependencies are removed before the end of the layer when doing a build.
3. Make sure all corresponding test cases pass.
4. Update the README.md with details of changes to the interface, this includes new environment variables, exposed ports, useful file locations and container parameters.

## Known Issues
A list of known issues and features that are currently being addressed are maintained on the github issues tab. Please look at the list of known issues before raising a new issue.

## Donation Link
If you have benefited from this project and use Monero please consider donanting to the following address:
47RoH3K4j8STLSh8ZQ2vUXZdh7GTK6dBy7uEBopegzkp6kK4fBrznkKjE3doTamn3W7A5DHbWXNdjaz2nbZmSmAk8X19ezQ
