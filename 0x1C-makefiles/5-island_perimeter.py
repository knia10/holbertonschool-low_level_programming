#!/usr/bin/python3
'''
function that returns the perimeter of the island described in grid
'''


def island_perimeter(grid):
    '''
    function that returns the perimeter of the island
        '''
    wz = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    wz += 1
                if i == (len(grid) - 1) or grid[i - 1][j] == 0:
                    wz += 1
                if j == 0 or grid[i][j - 1] == 0:
                    wz += 1
                if i == (len(grid[0]) - 1) or grid[i][j - 1] == 0:
                    wz += 1
    return wz
