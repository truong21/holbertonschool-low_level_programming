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
                if column == 0:
                    pass
                elif column != 0 and grid[row][column - 1] == 1:
                    perimeter -= 1
                if column == len(grid[row]) - 1:
                    pass
                elif (column != len(grid[row]) - 1 and
                        grid[row][column + 1] == 1):
                    perimeter -= 1
                if row == 0:
                    pass
                elif row != 0 and grid[row - 1][column] == 1:
                    perimeter -= 1
                if row == len(grid) - 1:
                    pass
                elif row != len(grid) - 1 and grid[row + 1][column] == 1:
                    perimeter -= 1
                total += perimeter
    return total
