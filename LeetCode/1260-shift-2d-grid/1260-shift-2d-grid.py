class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m, n = len(grid), len(grid[0])
        res = [[0] * n for _ in range(m)]

        for i in range(m):
            for j in range(n):
                idx = (i * n + j + k) % (n * m)
                r, c = idx // n, idx % n
                res[r][c] = grid[i][j]
        return res