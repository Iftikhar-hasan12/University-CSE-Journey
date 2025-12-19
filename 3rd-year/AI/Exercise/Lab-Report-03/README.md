

## 📌 Overview
A Python implementation of the Graph Coloring Problem using Backtracking Algorithm. This program determines whether a graph can be colored using K colors such that no two adjacent vertices share the same color.

## 🎯 Problem Statement
Given an undirected graph with N vertices and M edges, the program checks if the graph can be colored using K colors with the constraint that adjacent vertices cannot have the same color.

## 📁 Files
- `graph_coloring.py` - Main implementation file
- `input.txt` - Input file containing graph data

## 🛠️ Implementation Details
This implementation uses an **Object-Oriented Approach** with the following key components:

### Class Structure
- `GraphColoring` - Main class encapsulating all functionality
- Methods:
  - `__init__()` - Initialize graph, vertices, colors, and color assignments
  - `load_input()` - Read graph data from file
  - `is_safe()` - Check if color assignment is valid
  - `color_graph_util()` - Recursive backtracking function
  - `solve()` - Main driver function

### Algorithm Flow
1. **Read Input**: Parse N (vertices), M (edges), and K (colors) from file
2. **Build Graph**: Create adjacency list representation
3. **Initialize**: Set up color assignment array
4. **Backtracking**: Recursively assign colors with constraint checking
5. **Output**: Print result with color assignment or failure message

## 📝 Input Format
The input file should follow this format:
```
N M K
u1 v1
u2 v2
...
uM vM
```

Where:
- `N` = Number of vertices (0 to N-1)
- `M` = Number of edges
- `K` = Number of available colors
- Each line `u v` represents an undirected edge between vertex u and v

## 📤 Output
### Success Case:
```
Coloring Possible with K Colors
Color Assignment: [c1, c2, ..., cN]
```

### Failure Case:
```
Coloring Not Possible with K Colors
```

## 🧪 Test Cases

### Test Case 1 (K=3)
**Input:**
```
4 5 3
0 1
0 2
1 2
1 3
2 3
```

**Expected Output:**
```
Coloring Possible with 3 Colors
Color Assignment: [1, 2, 3, 1]
```

### Test Case 2 (K=2)
**Input:**
```
4 5 2
0 1
0 2
1 2
1 3
2 3
```

**Expected Output:**
```
Coloring Not Possible with 2 Colors
```

## 🚀 How to Run

### Method 1: Direct Execution
```bash
# Create input.txt with your graph data
python graph_coloring.py
```

### Method 2: Google Colab
1. Upload `input.txt` with your graph data
2. Copy and paste the code into a Colab cell
3. Run the cell

### Method 3: Change Input File
```python
# In the code, change filename parameter:
solver = GraphColoring()
solver.solve("your_input_file.txt")
```

## ⚙️ Customization
You can modify:
- Input filename in `solve()` method
- Color range (currently 1 to K)
- Adjacency data structure (currently using list of lists)

## 🔍 Algorithm Complexity
- **Time Complexity**: O(K^N) in worst case (exponential)
- **Space Complexity**: O(N + M) for graph storage

## 📚 Concepts Used
- Backtracking Algorithm
- Graph Theory
- Constraint Satisfaction
- Adjacency List Representation
- Recursion with Pruning

## 🐛 Troubleshooting
1. **File not found error**: Ensure `input.txt` is in the same directory
2. **Invalid input format**: Check if first line has exactly 3 numbers
3. **Vertex out of range**: Ensure vertex indices are between 0 and N-1
4. **Recursion depth error**: For large graphs, consider iterative approach

## 📈 Extensions
Potential improvements:
1. Add vertex ordering by degree
2. Implement forward checking
3. Add MRV (Minimum Remaining Values) heuristic
4. Support for weighted graphs
5. Visualization of colored graph

---
*Note: This implementation is for educational purposes as part of AI Lab coursework.*
