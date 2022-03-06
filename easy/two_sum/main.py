class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        findDict = dict()
        for i in range(len(nums)):
            findDict[nums[i]] = findDict.get(nums[i], []) + [i]

        for i in range(len(nums)):
            a = nums[i]
            b = target - a

            if b in findDict:
                for index in findDict[b]:
                    if i != index:
                        return [i, index]
