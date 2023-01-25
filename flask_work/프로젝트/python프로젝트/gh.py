from selenium import webdriver
from bs4 import BeautifulSoup
from products import Product
from openpyxl import Workbook
from openpyxl.drawing.image import Image
import time

inputvalue = '고무밴드'

brow = webdriver.Chrome()   # 크롬브라우저 시작otepad
brow.get(f'https://www.coupang.com/np/search?q={inputvalue}&channel=user&component=&eventCategory=SRP&trcid=&traid=&sorter=scoreDesc&minPrice=&maxPrice=&priceRange=&filterType=&listSize=36&filter=&isPriceRange=false&brand=&offerCondition=&rating=0&page=2&rocketAll=false&searchIndexingToken=1=6&backgroundColor=')

html = brow.page_source # html 소스 가져오기
html = str(html).strip() # 공백제거
html = BeautifulSoup(html,'html.parser') #객체 변환

dl = html.find_all('dl',{'class','search-product-wrap'})
products = []
for idx,tag in enumerate(dl):
    img = tag.find('img')
    price = tag.find('strong',{'class','price-value'})
    name = img.get('alt')
    imgsrc = img.get('src')
    price = price.text
    products.append(Product(name,imgsrc,price,f'a{idx}'))

    time.sleep(0.2)


wb = Workbook()
ws = wb.active

ws.append(['name','price','상품이미지'])
for pro in products:

    ws.append([pro.name,pro.price])

for i in range(36):

  
    img_jpg= Image(f"a{i}.jpg")

    ws.add_image(img_jpg,f"C{i+2}")

    ws.column_dimensions['C'].width = 29
    ws.row_dimensions[i+2].height = 174

wb.save('coupang.xlsx')
wb.close()

import openpyxl

wb = openpyxl.load_workbook('coupang.xlsx')
sheet = wb.get_sheet_by_name('Sheet')


b4 = sheet['B4'].value
b4= b4.replace(",","")
min_value = float(b4)
for i in range(2,38):
    value = sheet[f'B{i}'].value
    value = value.replace(",","")
    value = float(value)
    if value < min_value:
        min_value = value
        j=i

ws=wb.active

ws.column_dimensions['i'].width = 29
sheet['i1'].value= "@@ 최 저 가! @@"

sheet[f'g{2}'].value = sheet[f'A{j}'].value
sheet[f'h{2}'].value= sheet[f'B{j}'].value
img_jpg= Image(f"a{j-2}.jpg")
ws.add_image(img_jpg,f"I{2}")

wb.save('coupang.xlsx')
wb.close()


