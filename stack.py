class stack:
    def __init__(self):
        self.stack=[]

    def push(self,data):
        self.stack.append(data)
        print("{} is added sucessfully \n".format(data))

    def is_empty(self):
        if self.stack==[]:
            print("Stack is empty\n")
        else:
            print("Stack is not empty\n")
    def pop(self):
        self.stack.pop()


s=stack()
s.push(4)
s.push(6)
s.push(7)
s.push(8)
s.pop()