def threexp1(x:int):
    while x!=1:
        if x%2==0:     
            x=x/2             
            print(x)
        else:
            x=3*x+1
            print(x)
        if x==1:
            print('OK')
            break