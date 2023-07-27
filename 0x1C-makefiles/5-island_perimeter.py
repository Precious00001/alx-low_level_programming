#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    b = 0
    for q in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[q][j] == 1:
                b = b + 4
                if j - 1 >= 0 and grid[q][j - 1] == 1:
                    b -= 2
                if q - 1 >= 0 and grid[q - 1][j] == 1:
                    b -= 2
    return (b)
