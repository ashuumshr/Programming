class Graph:
    def __init__(self):
        self.graph = {}

    def add_vertex(self, vertex):
        if vertex not in self.graph:
            self.graph[vertex] = []

    def add_edge(self, vertex1, vertex2):
        if vertex1 in self.graph and vertex2 in self.graph:
            self.graph[vertex1].append(vertex2)
            self.graph[vertex2].append(vertex1)
        else:
            print("One or both vertices not found in graph")

    def remove_edge(self, vertex1, vertex2):
        if vertex1 in self.graph and vertex2 in self.graph:
            if vertex2 in self.graph[vertex1]:
                self.graph[vertex1].remove(vertex2)
            if vertex1 in self.graph[vertex2]:
                self.graph[vertex2].remove(vertex1)

    def remove_vertex(self, vertex):
        if vertex in self.graph:
            for other in self.graph[vertex]:
                self.graph[other].remove(vertex)
            del self.graph[vertex]

    def __str__(self):
        result = ""
        for vertex in self.graph:
            result += f"{vertex}: {self.graph[vertex]}\n"
        return result

# Example usage
if __name__ == "__main__":
    g = Graph()
    g.add_vertex(1)
    g.add_vertex(2)
    g.add_vertex(3)
    g.add_edge(1, 2)
    g.add_edge(1, 3)
    g.add_edge(2, 3)
    print(g)

    g.remove_edge(1, 3)
    print(g)

    g.remove_vertex(2)
    print(g)
