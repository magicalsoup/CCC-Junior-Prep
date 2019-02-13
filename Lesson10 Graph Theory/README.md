# Welcome To lesson # 10
> Today I will be focusing On 3 Topics
> 1. Type of Graphs
> 2. DFS
> 3. BFS

# 1 Type of Graphs
> ## Terms
> - ```Vertices``` or ```nodes```: are basically the dotes or points on the graph
> - ```Edges```: are the lines connecting the ```Vertices```
> - ```Forest```: is a bunch of ```trees``` (not literally)
> 1. Trees
>   - Trees have a special property that every ```node``` is ```connected``` and there are exactly ```n - 1 edges```
> 2. Cyclic Graphs
>   - These graphs form a cycle, or loop (you end up where you started)
> 3. Disconnected Graphs
>   - That means there are componenets of the graph that are not connected, meaning there could be multiple trees, or a ```forest```

> ## Ways to store graphs
>

# DFS
> it means ```depth first search```

> it searches through the graph by going as deep as possible, then go back up and repeat the process
> it does this with the help of recursion


> ```
> start from the first node
> mark it as visited
> if the node is visited, then return
> for every node the first node is connected:
>     dfs the node that is connected to the first node
> ```

> ## Python
>> ```py
>> def dfs(graph, start):
>>    visited, stack = set(), [start]
>>    while stack:
>>        vertex = stack.pop()
>>        if vertex not in visited:
>>            visited.add(vertex)
>>            stack.extend(graph[vertex] - visited)
>>    return visited
>> ```

> ## Java
>> ```java
>> public static void dfs(ArrayList<ArrayList<Integer>> graph, boolean[] visited, int start) {
>>    if(visited[start]) 
>>      return;
>>    visited[start] = true;
>>    for(int node: graph.get(start)){
>>        if(!visited[node])
>>           dfs(graph, visited, node);  
>>    }
>> }
>> ```
  
> ## C++
>> ```cpp
>> void dfs(vector<int> graph[], bool visited[], int start){
>>    if(visited[start]) 
>>        return;
>>    visited[start] = true;
>>    for(auto node: graph[start]){
>>        if(!visited[node])
>>            dfs(graph, visited, node);  
>>    }
>> }
>> ```
  
# BFS
> means Breadth-First-Search

> searches wide and broadly
> does this with the help of the data structure queue

> queue --> first in last out

> ```
> mark the starting node as visited
> add the starting node to the queue
> run a while loop as long as there is nodes in the queue
>   pop a node from the top of the queue
>   for everynode that is connected to the popped node:
>     if this node is not yet visited:
>        mark it as visited
>        add the node to the queue
> ```

> ## Python

>> ```py
>> def bfs(graph, start):
>>     visited, queue = set(), [start]
>>     while queue:
>>         vertex = queue.pop(0)
>>         if vertex not in visited:
>>             visited.add(vertex)
>>             queue.extend(graph[vertex] - visited)
>>     return visited
>> ```

> ## Java

>> ```java
>> public static void bfs(ArrayList<ArrayList<Integer>> graph, boolean[] visited, int start){
>>    LinkedList<Integer> queue = new LinkedList<Integer>();
>>    visited[start] = true;
>>    queue.add(start);
>>    while(!q.isEmpty()) {
>>       int curNode = q.pop();
>>       for(int node: adj.get(curNode)){
>>           if(!visited[node]) {
>>               visited[node] = true;
>>               q.add(node);  
>>           }  
>>       }  
>>    }
>> }
>> ```
  
> ## C++

>> ```cpp
>> void bfs(vector<int> graph[], bool visited[], int start){
>>    int length = sizeof(visited) / sizeof(visited[0]);  
>>    queue<int> q[length];
>>    q.push_back(start);
>>    while(q.empty()) {
>>      int curNode = q.top(); q.pop();
>>      for(auto node: graph[curNode]) {
>>          if(!visited[node]) {
>>             visited[node] = true;
>>             q.push_back(node);  
>>          }  
>>      }
>>    }  
>> }
>> ```
  
 
 
# Shortest Path With BFS

> normally, another advanced algorithm like ```dijkstras``` is required, but you can actually do this with BFS!

> But there are some constraints when using
> 1. The distance must be the same between everynode
> 2. No negative weights/distances

> The idea is quite simple, when we perform normal bfs, when we mark the node as visited, we also set the node we are going to mark's distance to the distance of the current node plus 1

> ```dist[nextNode] = dist[curNode] + 1```
> The implementation is up to the reader

# Cyclic / Tree Graphs

> To check for cyclic, just see if you comeback to the node you that you started with, this can be done with a simple DFS

> To check if its a tree, just check if the entire graph is connected, this can be done with a simple BFS 

  
