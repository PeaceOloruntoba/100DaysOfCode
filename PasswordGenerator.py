import random
import string

def generate_password(length=8):
    characters = string.ascii_letters + string.digits + string.punctuation
    password = ''.join(random.choice(characters) for _ in range(length))
    return password
    
password = generate_password(12)
print("The password generated is: ",password)
print("Copyright 2023, Peace Oloruntoba.")
