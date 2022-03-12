class OrderedStream:
    def __init__(self, n: int):
        self.lookupTable = dict()
        self.values = set()

    def insert(self, idKey: int, value: str) -> List[str]:
        


# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)