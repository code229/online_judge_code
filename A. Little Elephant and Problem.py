import queue as Q
class S(object):
    def __init__(self,p,x):
        self.p=p
        self.x=x
        return
    def __cmp__(self, other):
        return self.p>other.p
q = Q.PriorityQueue()

q.put(S(2, 'code'))
q.put(S(1, 'eat'))
q.put(S(3, 'sleep'))
l=q.get()
print(l)
print('f')
while not q.empty():
    next_item = q.get()
    print(next_item)