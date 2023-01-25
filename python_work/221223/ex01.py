from mywork import MyWorkBook

mwb= MyWorkBook()
cnt = input("몇개출력할래?")
cnt = int (cnt)+1


mwb.setCnt(cnt)

print(cnt)
print(mwb.cnt)
mwb.doSave()
mwb.doLoad()





