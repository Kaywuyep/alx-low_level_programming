#!/usr/bin/python3
"""a simple island periter module"""


def island_perimeter(grid):
    """
    a function that calculates the perimeter of an
    island described in grid

    args: grid

    Return: int
    """
    perimeter = 0
    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Count the perimeter for each side of the land cell
                perimeter += 4

                # Check adjacent cells and minus 1 for each connected land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
