class Solution(object):
    def merge(self, a, m, b, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        s=[]
        j=0
        k=0
        x = m+n;
        while (j<m and k<n):
            if (a[j] <= b[k]) :
                s.append(a[j])
                j+=1
            else:
                s.append(b[k])
                k+=1
        while (j<m):
            s.append(a[j]);
            j+=1
        while (k<n):
            s.append(b[k])
            k+=1
        for i in range(len(a)):
            a[i]=s[i]