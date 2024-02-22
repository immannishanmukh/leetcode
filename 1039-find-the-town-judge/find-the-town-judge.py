class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        l = [0] * (N + 1)
        l2 = [0] * (N + 1)
        for i in trust:
            l2[i[0]] += 1
            l[i[1]] += 1
        for j in range(1, N + 1):
            if l[j] == N - 1 and l2[j] == 0:
                return j
        return -1
