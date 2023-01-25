class student:
    def __init__(self,name,age,grade) -> None:
        self.name = name
        self.age = age
        self.grade= grade

    def __str__(self):
        return f"""
                self.name = {self.name}
                self.age = {self.age}
                self.grade= {self.grade}
                """
