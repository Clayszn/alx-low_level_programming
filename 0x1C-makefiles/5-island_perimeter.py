#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers): Represents the island grid where
      0 represents a water zone and 1 represents a land zone.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100.
    - Grid is completely surrounded by water
    - The island doesn’t have “lakes
    """

    perimeter = 0

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # Check if the cell is part of the island (land)
            if grid[i][j] == 1:
                # Increment perimeter by 4 (sides of the cell)
                perimeter += 4
                # Chck neighbor cells and decrement perimeter for land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Deduct 2 for the shared side
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Deduct 2 for the shared side

    return perimeter
