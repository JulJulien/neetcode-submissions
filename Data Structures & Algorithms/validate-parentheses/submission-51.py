class Solution:
    def isValid(self, s: str) -> bool:

        j=[]

        for i in range(len(s)):
            j.append(s[i])

            if(len(j)>=2):
                if(j[-2] == '(' and j[-1] == ')'):
                    j.pop()
                    j.pop()
                    print('popped')

                elif(j[-2] == '[' and j[-1] == ']'):
                    j.pop()
                    j.pop()
                    print('popped')


                elif(j[-2] == '{' and j[-1] == '}'):
                    j.pop()
                    j.pop()
                    print('popped')

                    print(j)

        if (len(j) == 0):
            return True

        else: return False
