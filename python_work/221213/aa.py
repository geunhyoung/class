class AA:

    def __init__(self):
        a=10
        print("클래스 생성시 호출")
        self.doA()

    def doA(self):
        a=10
        print("DoA")

a = AA()