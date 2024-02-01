class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        st = []
        i=0;
        if (len(s)%2!=0 or s[i] == ')' or s[i]=='}' or s[i]==']'): return False
        n = len(s)
        while (i<n):
            if (s[i] == '(' or s[i]=='{' or s[i]=='['):
                st.append(s[i])
            else:
                if (st):
                    if (s[i] == ')' and st[-1]=='('): st.pop()
                    elif (s[i] == ']' and st[-1]=='['): st.pop() 
                    elif (s[i] == '}' and st[-1]=='{'): st.pop() 
                    else: return False
                else:
                    return False
            i+=1
        if (st): return False
        
        return True
        