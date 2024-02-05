Identify as many "code smell" as you can in this python code:
```
inventory = {"Book A": 10, "Book B": 5, "Book C": 15}
sales = 0

def add_books(book, quantity):
    if book in inventory:
        inventory[book] += quantity
    else:
        inventory[book] = quantity

def sell_books(book, quantity):
    global sales
    if book in inventory and inventory[book] >= quantity:
        inventory[book] -= quantity
        sales += quantity * 20  # 20 is a magic number representing the price per book
    else:
        print("Book is not available in sufficient quantity.")

def print_inventory():
    print("Current Inventory:")
    for book, quantity in inventory.items():
        print(f"{book}: {quantity}")

def process_user_action(a, b, c):
    if a == "add":
        add_books(b, c)
    elif a == "sell":
        sell_books(b, c)
    elif a == "print":
        print_inventory()
    else:
        print("Invalid action")

while True:
    action = input("Enter action (add, sell, print, exit): ")
    if action == "exit":
        break
    elif action in ["add", "sell"]:
        book_name = input("Enter the book name: ")
        quantity = int(input("Enter quantity: "))
        process_user_action(action, book_name, quantity)
    elif action == "print":
        process_user_action(action, None, None)
    else:
        print("Invalid action entered.")
```