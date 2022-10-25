p=int(input("bilangan pertama = "))
q=int(input("bilangan kedua ="))
r=int(input("bilangan ketiga ="))
if p<q and p<r:
    if q<r:
        print(p,q,r)
    else:
        print(p,q,r)
elif q<p and q<r:
    if q<r:
        print(q,p,r)
    else:
        print(q,r,p)
else:
    if p<q:
        print(r,p,q)
    else:
        print(r,q,p)

        


