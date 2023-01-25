import pyautogui

# shift+ f10 은 현재 설정된 파일 실행
#ctrl + f10은 현재 열린 파일 실행

pyautogui.sleep(1)
print('win +r 키 누릅니다...')
pyautogui.hotkey('win','r')
pyautogui.keyDown('c')
pyautogui.keyDown('m')
pyautogui.keyDown('d')
pyautogui.keyDown('enter')

fw= pyautogui.getActiveWindow()
fw.maximize()

pyautogui.sleep(2)
fw.restore()

pyautogui.keyDown('e')
pyautogui.keyDown('x')
pyautogui.keyDown('i')
pyautogui.keyDown('t')
pyautogui.sleep(2)
pyautogui.keyDown('enter')

import pyperclip

pyperclip.copy('한글카피')
pyautogui.hotkey('ctrl','v')


