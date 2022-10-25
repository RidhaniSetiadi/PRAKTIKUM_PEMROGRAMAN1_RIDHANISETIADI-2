A=int(input("Masukkan bilangan cacah : "))
if (A>0 and A<10) :
    print("Satuan")
elif A==0:
    print("Nol")
elif A > 99 :
    print("input melebihi limit bilangan")
elif A>=20 and A<99:
    print("Puluhan")
elif A>=10 and A<=19:
    print("Belasan")