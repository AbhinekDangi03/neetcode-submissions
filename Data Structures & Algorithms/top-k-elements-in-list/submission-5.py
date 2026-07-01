class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        final = []
        mapper = Counter(nums)
        return [item for item, count in mapper.most_common(k)]
