from collections import deque
def bfs():
  graph = [
        [0, 0, 1, 0, 1],
        [0, 1, 1, 1, 1],
        [0, 1, 0, 0, 1],
        [1, 1, 0, 1, 1],
        [1, 0, 0, 0, 1]
    ]

  N = len(graph)
  source_x= 0
  source_y=2
  goal_x = 4
  goal_y = 4
  goal_level = 0
  found = False
  directions = 4
  x_move = [1,-1,0,0]
  y_move = [0,0,1,-1]
  dir_name = ["Down", "Up", "Right", "Left"]
  q = deque()
  graph[source_x][source_y]=0
  q.append((source_x, source_y,goal_level))
  while q and not found:
    current_x, current_y, current_level = q.popleft()



    for i in range(directions):
      v_x = current_x + x_move[i]
      v_y = current_y + y_move[i]


      if (0<= v_x < N) and (0<= v_y < N) and graph[v_x][v_y] == 1 :
        current_level = current_level + 1
        print(f"{dir_name[i]} -> ({v_x}, {v_y})")
        graph[v_x][v_y]=0
        if v_x == goal_x and v_y == goal_y :
          print("goal found")
          print("Level of goal : ",current_level)
          found = True
          break
        q.append((v_x, v_y, current_level))


bfs()
