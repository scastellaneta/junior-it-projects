Python

import random
import string 

lunghezza = int(input("Lunghezza password: "))

caratteri = string.ascii_letters + string.digits

password = ""

for i in range(lunghezza):
    password += random.choice(caratteri)
    
print("Password generata:", password)
