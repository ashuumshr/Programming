class Solution:
    def maximizeSum(self, n, arr):
        # code here
        self.n=n
        self.arr=arr
        s=[]
        for i in range(len(arr)):
            if i==0:
                s.append(sum(arr))
            for j in range(i):
                arr[j]=arr[i]
            s.append(sum(arr))
                
        return max(s)