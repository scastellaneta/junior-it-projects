Python 

todo_list.py

import json

FILE = "tasks.json"

def carica_task():
    try:
        with open(FILE, "r") as f:
            return json.load(f)
    except:
        return []
            
def salva_task(tasks):
    with open(FILE, "w") as f:
        json.dump(tasks, f, indent=4)
        
def aggiungi_task(tasks):
    titolo = input("Nuova task: ")
    tasks.append({"titolo":titolo, "completata":False})
    salva_task(tasks)
    
def mostra_task(tasks):    
    if not tasks:
        print("Nessuna task.")
        return
        
    for i, t in enumerate(tasks):
        stato = "✔" if t["completata"] else "✘"
        print(f"{i+1}. {t['titolo']} [{stato}]")
        
def menu():
    tasks = carica_task()
    
    while True:
        print("\n1. Aggiungi task")
        print("2. Mostra task")
        print("3. Esci")
        
        scelta = input("Scelta:")
        
        if scelta == "1":
            aggiungi_task(tasks)
        elif scelta == "2":
            mostra_task(tasks)
        elif scelta == "3":
            break
        else:
            print("Scelta non valida.")
        
menu()        
