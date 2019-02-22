try:
    T=int(input())
    while T!=0:
        flag=False
        S=input()
        l=list(S.split()) 
        for i in l:
            if i=='not':
                flag=True
                break
        if flag==True:
            print('Real Fancy')
        else:
            print('regularly fancy')
        T=T-1
except :
    pass