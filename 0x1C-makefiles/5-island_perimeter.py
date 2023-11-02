#!/usr/bin/python3
"""This defines island perimeter measuring function."""


def island_perimeter(grid):
    """Return Island's perimmeter

    The grid shows water - 0 and land - 1.

    Args:
        grid (list): Represents list of list of integers for the island
    Returns:
        Island's calculated perimeter
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for e in range(height):
        for l in range(width):
            if grid[e][l] == 1:
                size += 1
                if (l > 0 and grid[e][l - 1] == 1):
                    edges += 1
                if (e > 0 and grid[e - 1][l] == 1):
                    edges += 1
    return size * 4 - edges * 2