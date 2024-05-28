# Definition of Infinity
Inf = 9999

# Adjacency matrix of the graph
matrix = [
    [0, 5, 1, 2, Inf, Inf, Inf, Inf, Inf],
    [5, 0, Inf, Inf, Inf, Inf, Inf, Inf, 3],
    [1, Inf, 0, Inf, 1, Inf, Inf, Inf, Inf],
    [2, Inf, Inf, 0, Inf, 1, Inf, Inf, Inf],
    [Inf, Inf, 1, Inf, 0, Inf, Inf, 1, Inf],
    [Inf, Inf, Inf, 1, Inf, 0, 1, Inf, Inf],
    [Inf, Inf, Inf, Inf, Inf, 1, 0, 3, 2],
    [Inf, 1, Inf, Inf, Inf, 1, Inf, 0, 3],
    [Inf, 3, Inf, Inf, Inf, Inf, 2, Inf, 0]
]

def shortpath(matrix, s, t):
    max_nodes = len(matrix)
    distance = [Inf] * max_nodes
    perm = [0] * max_nodes
    precede = [None] * max_nodes

    distance[s] = 0
    perm[s] = 1
    current = s

    while current != t:
        smalldist = Inf
        dc = distance[current]

        for i in range(max_nodes):
            if perm[i] == 0:
                newdist = dc + matrix[current][i]
                if newdist < distance[i]:
                    distance[i] = newdist
                    precede[i] = current

                if distance[i] < smalldist:
                    smalldist = distance[i]
                    k = i

        current = k
        perm[current] = 1

    return distance[t], precede

# Example usage
s = 0  # Source node
t = 8  # Target node

distance, precede = shortpath(matrix, s, t)
print(f"Shortest distance from {s} to {t}: {distance}")

# Reconstruct the path
path = []
current = t
while current is not None:
    path.insert(0, current)
    current = precede[current]

print("Path:", " -> ".join(map(str, path)))
