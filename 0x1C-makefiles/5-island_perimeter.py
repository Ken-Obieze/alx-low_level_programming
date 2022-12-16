#!/usr/bin/python3
"""Module for calculation of perimete of Island in a Grid"""


def island_perimeter(grid):
    """ 
        Returns the perimeter of Island in a grid
        Args:
                grid (list): List of integer representation of island.
        Returns:
            The perimeter of Island in a grid.
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    perimeter = size * 4 - edges * 2

    return (perimeter)
