class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        result = []
        for point in points:
            x, y = point
            result.append(
                ([x, y], (x**2 + y**2))
            )
        return [e[0] for e in sorted(result, key=lambda e: e[1])][:k]


class Solution2:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        return sorted(points, key=lambda p: p[0]**2 + p[1]**2)[:k]
