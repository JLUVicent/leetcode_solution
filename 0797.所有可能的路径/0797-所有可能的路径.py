class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        ans = []
        queue = collections.deque([[0]])
        while queue:
            path = queue.popleft()
            if path[-1] == len(graph) - 1:
                ans.append(path[:])
            else:
                for i in graph[path[-1]]:
                    queue.append(path+[i])
        return ans