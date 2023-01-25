import pyautogui

# file= pyautogui.locateOnScreen('files.png')
# pyautogui.click(file)

pyautogui.hotkey('alt','tab')
pyautogui.sleep(1)
ch1 = checkboxs= pyautogui.locateOnScreen('ckeckbox.png')
for item in ch1:
    pyautogui.click(item)
    pyautogui.sleep(1)
