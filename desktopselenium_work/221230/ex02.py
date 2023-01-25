import pyautogui

img = pyautogui.screenshot()
img.save('a.png')

pi = pyautogui.pixel(10,10)
print(pi)

print(pyautogui.pixelMatchescolor(10,10,(221,221,221)))

if pyautogui.pixelMatchescolor