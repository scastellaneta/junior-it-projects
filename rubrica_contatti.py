
#rubrica_contatti.py
"""
Mini progetto Python - Rubrica contatti
Mostra gestione lista di contatti con aggiunta e visualizzazione.

"""
rubrica = []

while True:
    comando = input("Aggiungi (a), Visualizza(v), Esci(q):").lower()
    if comando == "a":
        nome = input("Nome:")
        telefono = input("Telefono:")
        rubrica.append((nome, telefono))
    elif comando == "v":
        for n, t in rubrica:
            print(f"{n} - {t}")
    elif comando == "q":
        break
    else:
        print("Comando non valido.")


