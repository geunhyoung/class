from openpyxl import Workbook
#from aa inport AA

'''
    pip install openpyxl
'''

wb= Workbook()
ws = wb.active

ws.title = "내시트"
wb.save("sample.xlxs")
wb.close()