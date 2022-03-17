#!/usr/bin/python3
"""
    comment
"""


def island_perimeter(grid):
    """
        comment
    """
    m, n = len(grid), len(grid[0])
    land, neighbor = 0, 0
    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                land += 1
                if i < m - 1 and grid[i + 1][j] == 1:
                    neighbor += 1
                if j < n - 1 and grid[i][j + 1] == 1:
                    neighbor += 1
    return land*4-2*neighbor
