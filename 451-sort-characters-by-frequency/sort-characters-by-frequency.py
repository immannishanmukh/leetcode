class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        checked=set()
        letters=[]
        count=[]
        for letter in s:
            if letter not in checked:
                letters.append(letter)
                count+=[s.count(letter)]
                checked.add(letter)
        word=''
        length=len(count)
        for i in range(length):
            longest=max(count)
            index=count.index(longest)
            word=word+letters[index]*longest
            count[index]=0
        return word