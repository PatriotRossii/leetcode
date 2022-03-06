class Solution:
    def nearestValidPoint(self, x0: int, y0: int, points: List[List[int]]) -> int:
        nearest_idx = -1
        distance = 10**16

        for (idx, (x, y)) in enumerate(points):
            local_distance = (x - x0)**2 + (y - y0)**2
            if (local_distance < distance) and (x == x0 or y == y0):
                distance = local_distance
                nearest_idx = idx

        return nearest_idx