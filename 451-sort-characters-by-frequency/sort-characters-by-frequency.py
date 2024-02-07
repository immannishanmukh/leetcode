
class Solution(object):
    def frequencySort(self, s):
        char_freq = Counter(s)
        print(char_freq)
        max_heap = [(-freq, char) for char, freq in char_freq.items()]
        print (max_heap)
        heapq.heapify(max_heap)
        result = ""
        while max_heap:
            freq, char = heapq.heappop(max_heap)
            result += char * (-freq)
            print (result)
        return result