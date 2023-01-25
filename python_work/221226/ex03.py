txt=input("파일의 내용을 쓰세요.")

f=open("221226/txt.txt","w",encoding="UTF-8")
f.write(txt)
f.close()
