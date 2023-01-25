import pyautogui

size = pyautogui.size()
print(size)
#절대 좌표 기준으로 이동
pyautogui.moveTo(200,100,duration=1)
#상대좌표기준으로 이동
pyautogui.move(100,100,duration=1)
#클릭
pyautogui.click()

#해당좌표출력
print(pyautogui.position())