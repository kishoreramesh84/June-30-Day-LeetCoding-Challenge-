

''' Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3362/ ''' 

class Solution:
    def validIPAddress(self, IP: str) -> str:
        if '.' in IP and ':' not in IP:
            arr=list(IP.split('.'))
            #print(arr)
            if len(arr)==4:
                for i in arr:
                    if len(i)==0 or len(i)>3:
                        return "Neither"
                    for a in i:
                        if('0' <= a and a <= '9'):
                            continue
                        else:
                            return "Neither"
                    val=int(i)
                    if val == 0 and len(i)>1:
                        return "Neither"
                    elif val > 0 and i[0]=='0':
                        return "Neither"
                    elif(val < 0 or val > 255):
                        return "Neither"
                return "IPv4"
            else:
                return "Neither"
        elif ':' in IP and '.' not in IP:
            arr=list(IP.split(':'))
            #print(arr)
            if len(arr)==8:
                for i in arr:
                    if len(i)==0 or len(i) > 4:
                        return "Neither"
                    i=i.lower()
                    for a in i:
                        if(('0' <= a and a <= '9') or ('a' <= a and a <= 'f')):
                            continue
                        else:
                            return "Neither"
                return "IPv6"
            else:
                return "Neither"
        return "Neither"

        