from itertools import count


def permute(s,i,n):
       
    if i==n:
        
        print(''.join(s))
        
    else:
        for j in range(i,n):
            s[i], s[j]=s[j], s[i]
            permute(s,i+1,n)
            s[i], s[j]=s[j],s[i]
        
srt = 'ABCD'
s = list(srt)
permute(s,0,len(s))