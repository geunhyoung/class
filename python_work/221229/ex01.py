import requests
from bs4 import BeautifulSoup
from openpyxl import Workbook

ur1 = "https://dhlottery.co.kr/gameResult.do?method=byWin"

req = requests.get(ur1)
req.encoding = "utf-8"
# print(req.content)

html = BeautifulSoup(req.content,"html.parser")

num1 = html.find('span',{'class','ball_645 lrg ball1'}).text
num2 = html.find('span',{'class','ball_645 lrg ball2'}).text
num3 = html.find_all('span',{'class','ball_645 lrg ball4'})[0].text
num4 = html.find_all('span',{'class','ball_645 lrg ball4'})[1].text
num5 = html.find_all('span',{'class','ball_645 lrg ball5'})[0].text
num6 = html.find_all('span',{'class','ball_645 lrg ball4'})[1].text

wb= Workbook()
ws= wb.active

ws.append(["로또번호"])
ws.append(["번호1","번호2","번호3","번호4","번호5","번호6"])
ws.append([num1,num2,num3,num4,num5,num6])

wb.save('lotto.xlsx')
wb.close()