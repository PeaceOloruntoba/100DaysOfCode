class Student:
    def __init__(self, name, matric_no, program, ca, exam):
        self.name = name
        self.matric_no = matric_no
        self.program = program
        self.ca = ca
        self.exam = exam

students = []

# Input details for each student
for i in range(3):
    print(f"Enter details for Student {i+1}:")
    name = input("Enter Name: ")
    matric_no = input("Enter Matriculation Number: ")
    program = input("Enter Program: ")
    ca = int(input("Enter CA Score: "))
    exam = int(input("Enter Exam Score: "))

    student = Student(name, matric_no, program, ca, exam)
    students.append(student)
    print()

# Print student details
for i, student in enumerate(students):
    print(f"Student {i+1} Details:")
    print("Name:", student.name)
    print("Matriculation Number:", student.matric_no)
    print("Program:", student.program)
    print("CA Score:", student.ca)
    print("Exam Score:", student.exam)
    print()


# Copyright 2023, Peace Oloruntoba
