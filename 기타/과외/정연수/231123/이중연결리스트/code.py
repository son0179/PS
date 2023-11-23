import os


class ListNode:
    def __init__(self, string):
        self.value = string
        self.length = len(string)
        self.uppercount = sum( list(map( lambda x : int( x.isupper() ) , string  )))
        self.signcount = sum( list(map( lambda x :  1 - int(x.isalpha() or x.isdigit() ) , string ) )) 
        self.previous = None
        self.next = None

#파일 열기

head = None

before = None
with open(os.path.dirname(__file__)+"/input.txt", mode = 'r') as file :
    
    for newnode in file.readlines():
        temp = ListNode(newnode) 
        temp.previous = before
        if before:
            before.next = temp
        else:
            head = temp
        before = temp
    """
    for newnode in file.readlines():
        temp = node(newnode) 
        
        if not(head) :
            head = temp
            continue
        
        search = head
        while search != None :
            if search.value > temp.value:
                temp.previous = search.previous
                temp.next = search
                search.previous.next = temp
                search.previous = temp
                break
            
            if search.next == None:
                search.next = temp
                temp.previous = search
                break
            
            search = search.next
    """

def sortList(head):
    
    # list 길이가 0 or 1
    if not(head) or not(head.next):
        return head
    
    p, slow, fast = None, head, head
    # fast가 리스트 끝까지 탐색 
    while fast and fast.next:
        p = slow
        slow = slow.next
        fast = fast.next.next
    #연결 끊어줌
    p.next = None
    slow.previous = None
    
    # 분할
    return merge(sortList(head), sortList(slow))

def merge( l1, l2):
    dummy = ListNode("")
    curr = dummy
    
    while l1 and l2:
        if l1.value > l2.value:
            ## 양방향 연결 신경쓰기
            curr.next = l2
            l2 = l2.next
        else:
            curr.next =  l1
            l1 = l1.next
        curr = curr.next
    
    if l1:
        curr.next = l1
    elif l2:
        curr.next = l2
    
    return dummy.next

temp = head
while temp:
    print("%d,%d,%d %s"%(temp.length, temp.uppercount , temp.signcount , temp.value))
    temp = temp.next
sortList(head)
print("===========================")

temp = head
while temp:
    print("%d,%d,%d %s"%(temp.length, temp.uppercount , temp.signcount , temp.value))
    temp = temp.next