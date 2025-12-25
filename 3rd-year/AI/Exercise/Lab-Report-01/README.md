# IDDFS Pathfinding Algorithm

A Python implementation of Iterative Deepening Depth-First Search (IDDFS) for finding paths in a grid-based environment with obstacles.

## Overview

This program uses the IDDFS algorithm to find a path from a starting point to a target point in a grid. IDDFS combines the space efficiency of Depth-First Search with the completeness of Breadth-First Search by performing DFS with increasing depth limits.

## Features

- **Iterative Deepening DFS**: Efficiently explores paths with incremental depth limits
- **Obstacle avoidance**: Navigates around blocked cells in the grid
- **Path tracking**: Records and displays the complete traversal path
- **Multiple test cases**: Comes with pre-configured examples

## Requirements

- Python 3.x
- No external dependencies required

## Code Structure

### Main Classes

#### `Node`
Represents a position in the grid with coordinates and depth level.

#### `IDDFS`
Main algorithm class containing:
- Depth-limited DFS implementation
- Pathfinding logic with backtracking
- Grid validation methods

### Key Methods

- `is_valid()`: Checks if a cell is within bounds, traversable, and unvisited
- `dfs_limited()`: Recursive depth-limited DFS with backtracking
- `run_iddfs()`: Main iterative deepening controller

## Usage

### Basic Example

```python
from iddfs import IDDFS

# Define a grid (0 = traversable, 1 = obstacle)
grid = [
    [0, 0, 1, 0],
    [1, 0, 1, 0],
    [0, 0, 0, 0],
    [1, 1, 0, 1]
]

# Create IDDFS instance
algo = IDDFS()

# Find path from (0,0) to (2,3)
found = algo.run_iddfs(grid, 0, 0, 2, 3)

if found:
    print(f"Path found at depth: {algo.goal_level}")
    print(f"Traversal order: {algo.path}")
else:
    print("Path not found")
```

### Running the Examples

The script includes two test cases:

1. **Case 1**: 4x4 grid with a valid path
2. **Case 2**: 3x3 grid where the target is unreachable

Run the script directly to see both examples:

```bash
python iddfs.py
```

## Grid Representation

- `0`: Open cell (traversable)
- `1`: Obstacle (blocked)
- Coordinates are zero-indexed: `(row, column)`

## Algorithm Details

1. **Iterative Deepening**: The algorithm starts with depth limit 0 and gradually increases it
2. **Depth-Limited DFS**: At each iteration, performs DFS up to the current depth limit
3. **Backtracking**: Maintains a path stack and backtracks when dead ends are reached
4. **Termination**: Stops when the target is found or maximum depth is reached

The maximum search depth is set to `rows + columns` as a heuristic for the worst-case path length.

## Output Format

When a path is found:
```
Path found at depth: 5
Traversal Order: [(0,0), (0,1), (1,1), (2,1), (2,2), (2,3)]
```

When no path exists:
```
Path not found at max depth 6
```

## Customization

You can modify:
- Grid configuration by changing the 0/1 values
- Starting and target coordinates
- Movement patterns by adjusting `x_move` and `y_move` arrays
- Maximum depth heuristic

## Limitations

- Grid size affects performance (exponential time complexity in worst case)
- No diagonal movement (only 4-directional)
- Assumes a static grid without dynamic obstacles

## License

This code is provided as-is for educational purposes. Feel free to modify and distribute.
