detik=int(input("Masukkan jumlah detik :"))
hari=int(detik // 86400)
jam=int(detik/3600)% 24
menit=int(detik/60)%60
d=int(detik%60)
if detik <= 3600 :
    print("%.2d:%.2d:%.2d"%(jam,menit,d))
elif(detik>3600 and detik<86400):
    print("%.2d:%.2d:%.2d\n"%(jam,menit,d))
elif(detik>=86400):
    print("%d hari %.2d:%.2d:%.2d\n"%(hari,jam,menit,d))
    




