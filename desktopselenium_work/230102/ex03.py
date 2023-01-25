from selenium import webdriver
import time
import pyautogui

#requests 화면 크롬 x 없이 실행
#beatifulsoap
inputvalue = pyautogui.prompt('상품이름을 입력하세요')
print(inputvalue)

brow = webdriver.Chrome() #크롬 브라우저 시작
brow.get(f'https://www.coupang.com/np/search?q={inputvalue}&channel=user&component=&eventCategory=SRP&trcid=&traid=&sorter=scoreDesc&minPrice=&maxPrice=&priceRange=&filterType=&listSize=36&filter=&isPriceRange=false&brand=&offerCondition=&rating=0&page=2&rocketAll=false&searchIndexingToken=1=6&backgroundColor=')

# inpu = brow.find_element('id','headerSearchKeyword')
# inpu.send_keys('퓨마 운동화')


# btn = brow.find_element('id','headerSearchKeyword')
# btn.click
brow.find_element('xpath','/html/body/div[3]/section/form/div[2]/div[2]/div[5]/span[1]/a[2]').click()

time.sleep(3) #3초 쉬기
print(brow.current_url)

# brow.close()
# brow.quit()