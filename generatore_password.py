Python

import random
import string 

# scelta unghezza
lunghezza = int(input("Lunghezza password: "))

# caratteri utilizzabili
caratteri = string.ascii_letters + string.digits

# creazione password
password = ""

for i in range(lunghezza):
    password += random.choice(caratteri)

# risultato
print("Password generata:", password)
