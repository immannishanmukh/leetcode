class Solution(object):
    def reverseParentheses(self, s):
        """
        :type s: str
        :rtype: str
        """
        
        st = []
        for i in s :
            if i == ')':
                ss = ""
                while st[-1] != '(':
                    ss= ss + st[-1]
                    st.pop()
                st.pop()
                for j in ss :
                    st.append(j)
            else :
                st.append(i)
        s = "".join(st)
        return s