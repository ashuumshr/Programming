class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class Linkedlist:
    def __init__(self):
        self.head=None
    def append(self,data):
        new_node=node(data)
        if not self.head:
            self.head=new_node
            return
        else:
            last_node=self.head
            while last_node.next:
                last_node=last_node.next
            last_node.next=new_node
    def prepend(self,data):
        new_node=node(data)
        new_node.next=self.head
        self.head=new_node
    def delete(self,key):
        cur_node=self.head
        if cur_node and cur_node.data==key:
            self.head=cur_node.next
            cur_node=None
            return
        prev_node=None
        while cur_node and cur_node.data!=key:
            prev_node=cur_node
            cur_node=cur_node.next
        if cur_node is None:
            return
        prev_node.next=cur_node.next
        cur_node=None
    def printList(self):
        cur_node=self.head
        print("\nLinked list: ")
        while cur_node:
            print(cur_node.data,end="->")
            cur_node=cur_node.next
        print("None")
l1=Linkedlist()
l1.append(1)
l1.printList()
l1.append(2)
l1.printList()
l1.prepend(3)
l1.printList()
l1.prepend(4)
l1.printList()
l1.append(5)
l1.printList()
l1.delete(3)
l1.printList()