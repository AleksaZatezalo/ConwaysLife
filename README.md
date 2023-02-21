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
