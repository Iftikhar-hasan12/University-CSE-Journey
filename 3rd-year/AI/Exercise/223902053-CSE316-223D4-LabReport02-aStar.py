import heapq


def heuristic(a, b, x, y):
    return abs(a - x) + abs(b - y)


def astar(grid, sx, sy, tx, ty):
    r = len(grid)
    c = len(grid[0])

    visited = [[False] * c for _ in range(r)]
    pq = []

    heapq.heappush(pq, (0, 0, sx, sy, [(sx, sy)]))

    while pq:
        f, g, x, y, path = heapq.heappop(pq)

        if visited[x][y]:
            continue

        visited[x][y] = True

       
        if x == tx and y == ty:
            return True, g, path

       
        for dx, dy in [(1,0), (-1,0), (0,1), (0,-1)]:
            nx = x + dx
            ny = y + dy

            if 0 <= nx < r and 0 <= ny < c and grid[nx][ny] == 0:
                if not visited[nx][ny]:
                    new_cost = g + 1
                    h = heuristic(nx, ny, tx, ty)
                    total = new_cost + h
                    heapq.heappush(pq, (total, new_cost, nx, ny, path + [(nx, ny)]))

    return False, -1, []


def load_input():
    with open("/input.txt", "r") as f:
        R, C = map(int, f.readline().split())
        maze = []

        for _ in range(R):
            maze.append(list(map(int, f.readline().split())))

        sx, sy = map(int, f.readline().split())
        tx, ty = map(int, f.readline().split())

    return maze, sx, sy, tx, ty



if __name__ == "__main__":
    maze, sx, sy, tx, ty = load_input()

    ok, cost, shortest_path = astar(maze, sx, sy, tx, ty)

    if ok:
        print(f"Path found with cost {cost} using A*")
        print("Shortest Path:", shortest_path)
    else:
        print("Path not found using A*")
