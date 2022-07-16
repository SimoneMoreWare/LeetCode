class Solution:
    def interpret(self, command: str) -> str:
        output=""
        for i in range(len(command)):
            if command[i]=="(" and command[i+1]=="a":
                output=output+"al"
                i=i+4
            elif command[i]=="(" and command[i+1]==")":
                output=output+"o"
                i=i+2
            elif command[i]=="G":
                output=output+"G"
            
        return output
        
        
