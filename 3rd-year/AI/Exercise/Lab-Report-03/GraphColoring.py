class GraphColoring:
    def __init__(self):
        self.graph = []
        self.vertices = 0
        self.colors = 0
        self.color_assignment = []
    
    def load_input(self, filename="input.txt"):
        with open(filename, 'r') as file:
            self.vertices, edges, self.colors = map(int, file.readline().split())
            
            
            self.graph = [[] for _ in range(self.vertices)]
            self.color_assignment = [-1] * self.vertices
            
            
            for _ in range(edges):
                u, v = map(int, file.readline().split())
                self.graph[u].append(v)
                self.graph[v].append(u)
    
    def is_safe(self, vertex, color):
        
        for neighbor in self.graph[vertex]:
            if self.color_assignment[neighbor] == color:
                return False
        return True
    
    def color_graph_util(self, vertex):
        
       
        if vertex == self.vertices:
            return True
        
        
        for color in range(1, self.colors + 1):
            if self.is_safe(vertex, color):
               
                self.color_assignment[vertex] = color
                
                
                if self.color_graph_util(vertex + 1):
                    return True
                
               
                self.color_assignment[vertex] = -1
        
        return False
    
    def solve(self, filename="input_case2.txt"):
        
        self.load_input(filename)
        
        if self.color_graph_util(0):
            print(f"Coloring Possible with {self.colors} Colors")
            print(f"Color Assignment: {self.color_assignment}")
        else:
            print(f"Coloring Not Possible with {self.colors} Colors")


if __name__ == "__main__":
    solver = GraphColoring()
    solver.solve()
