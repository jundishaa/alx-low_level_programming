#!/usr/bin/python3
"""
Module 5-island_perimeter
Contains a function that calculates the perimeter of an island.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
        grid (list of list of int): A 2D grid representing the map,
                                    where 0 is water and 1 is land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Add 4 for each land cell
                perimeter += 4
                
                # Subtract 2 for each adjacent land cell
                if i > 0 and grid[i-1][j] == 1:  # Check the cell above
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:  # Check the cell to the left
                    perimeter -= 2
    
    return perimeter

