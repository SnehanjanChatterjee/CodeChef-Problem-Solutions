# cook your dish here
tc=int(input())
while tc!=0:
    flag=False
    try:
        s1=list(input().split())
        s2=list(input().split())
        for i in s1:
            for j in s2:
                if(i==j):
                    flag=True
                    break;
            if(flag==True):
                break
    except EOFError:
        break
    if(flag==True):
        print("Yes")
    else:
        print("No")
