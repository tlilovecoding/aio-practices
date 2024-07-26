with open("cookiesin.txt", "r") as input_file:
    d,c = map(int, input_file.readline().split())
    p1,c1 = map(int, input_file.readline().split())
    p2,c2 = map(int, input_file.readline().split())
def cookies():
    p1Bought = False
    p2Bought = False
    productionRate = c
    currCookies = 0
    for i in range(1,d+1):
        currCookies+=productionRate
        if p1Bought == False:
            if (d-i)*(c1)>=p1 and currCookies>=p1:
                p1Bought = True
                productionRate+=c1
                currCookies-=p1
        if p2Bought == False and p1Bought == True:
            if (d-i)*(c2)>=p2 and currCookies>=p2:
                p2Bought = True
                productionRate+=c2
                currCookies-=p2
    cookies1 = currCookies
    currCookies = 0
    productionRate = c
    p1Bought = False
    p2Bought = False
    for i in range(1,d+1):
        currCookies+=productionRate
        
        if p2Bought == False:
            if (d-i)*(c2)>=p2 and currCookies>=p2:
                p2Bought = True
                productionRate+=c2
                currCookies-=p2
        if p1Bought == False and p2Bought == True:
            if (d-i)*(c1)>=p1 and currCookies>=p1:
                p1Bought = True
                productionRate+=c1
                currCookies-=p1
    cookies2=currCookies
    currCookies = 0
    productionRate = c
    p1Bought = False
    p2Bought = False
    for i in range(1,d+1):
        currCookies+=productionRate
        if p1Bought == False:
            if (d-i)*(c1)>=p1 and currCookies>=p1:
                p1Bought = True
                productionRate+=c1
                currCookies-=p1
    cookies3 = currCookies
    currCookies = 0
    productionRate = c
    p1Bought = False
    p2Bought = False
    for i in range(1,d+1):
        currCookies+=productionRate
        if p2Bought == False:
            if (d-i)*(c2)>=p2 and currCookies>=p2:
                p2Bought = True
                productionRate+=c2
                currCookies-=p2
    cookies4 = currCookies
    currCookies = 0
    p1Bought = False
    p2Bought = False
    productionRate = c
    return max(productionRate*d,max(cookies1,max(cookies2,max(cookies3,cookies4))))  
with open("cookiesout.txt", "w") as output_file:
    output_file.write(str(cookies()))