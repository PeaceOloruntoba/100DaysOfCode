class Student:
    def __init__(self, name, matric_no, program):
        self.name = name
        self.matric_no = matric_no
        self.program = program
        self.ca = 0
        self.exam = 0

    def calculate_total(self):
        return self.ca + self.exam


# Create instances of the Student class
student1 = Student("John Doe", "123456", "Computer Science")
student2 = Student("Jane Smith", "789012", "Electrical Engineering")

# Access and modify attributes
student1.ca = 80
student1.exam = 90

student2.ca = 75
student2.exam = 85

# Call methods
student1_total = student1.calculate_total()
student2_total = student2.calculate_total()

# Print student details and totals
print("Student 1 Details:")
print("Name:", student1.name)
print("Matriculation Number:", student1.matric_no)
print("Program:", student1.program)
print("Total Score:", student1_total)

print("\nStudent 2 Details:")
print("Name:", student2.name)
print("Matriculation Number:", student2.matric_no)
print("Program:", student2.program)
print("Total Score:", student2_total)


# Copyright 2023, Peace Oloruntoba
