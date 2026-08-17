class Solution:
    def calPoints(self, operations: List[str]) -> int:

        answer = []
        solution =0

        for i in range(len(operations)):
            if(operations[i] == 'D'):
                n = int(answer[-1])
                answer.append(n*2) 

            elif(operations[i] == 'C'):
                answer.pop()

            elif(operations[i] == '+'):
                answer.append(int(answer[-1]) + int(answer[-2]))

            else: answer.append(int(operations[i]))
            
            print(operations[i])
            print(answer)

        
        for i in range(len(answer)):
            solution = solution + int(answer[i])

        return solution