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
    for row in range(len(grid)):
        if len(grid[row]) != lrow or row > 99:
            return 0
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                perimeter = 4
                if grid[row][column - 1] == 1:
                    perimeter -= 1
                if grid[row][column + 1] == 1:
                    perimeter -= 1
                if grid[row - 1][column] == 1:
                    perimeter -= 1
                if grid[row + 1][column] == 1:
                    perimeter -= 1
                total += perimeter
    return total
