#!/usr/bin/python3
"""
Module containing island_perimeter function
"""


def island_perimeter(grid):
    """ calculates the island perimeter from a grid """
    total = 0
    if not isinstance(grid, list):
        return total
    if len(grid) == 0 or len(grid) > 100:
        return total
    lrow = len(grid[0])
    for i in range(0, len(grid)):
        if len(grid[i]) != lrow or i > 99:
            return 0
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter = 4
                if grid[i][j - 1] == 1:
                    perimeter -= 1
                if grid[i][j + 1] == 1:
                    perimeter -= 1
                if grid[i - 1][j] == 1:
                    perimeter -= 1
                if grid[i + 1][j] == 1:
                    perimeter -= 1
                total += perimeter
    return total
