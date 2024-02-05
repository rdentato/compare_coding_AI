### Exercise: Deriving a Class Diagram from Requirements

#### Background
You are tasked with designing a simplified software system for a library. The system will manage books, members, and the borrowing process. Your goal is to convert the following requirements into a class diagram, incorporating appropriate classes, attributes, methods, and relationships.

#### Requirements

1. **Book Management**
   - The system must keep track of all books in the library.
   - Each book has a title, author, ISBN, publication year, and status (available, borrowed, or reserved).
   - Books can be added, removed, or updated in the system.

2. **Member Management**
   - The library system must manage its members.
   - Each member has a unique ID, name, address, and phone number.
   - Members can register, update their information, or unregister from the system.

3. **Borrowing Process**
   - Members can borrow available books.
   - Each borrowing record should track which member borrowed which book, the borrow date, and the return date.
   - A book can be borrowed for a maximum of two weeks, after which it must be returned or renewed.
   - Members can reserve books that are currently borrowed. Once the book is returned, the next reservation is automatically converted to a borrowing.

4. **Search Functionality**
   - The system should allow searching for books by title, author, or ISBN.
   - It should also support listing all currently available books or all books that are currently borrowed.

#### Instructions for Exercise

Based on the above requirements, create a class diagram that includes:

- **Classes**: Identify the classes from the requirements.
- **Attributes**: Define relevant attributes for each class, considering the details provided in the requirements.
- **Methods**: Specify the operations that each class should be able to perform.
- **Relationships**: Determine the relationships between classes, such as associations, aggregations, and compositions. Include multiplicity to illustrate the nature of relationships (one-to-one, one-to-many, many-to-many).

Use Mermaid.js notation for your class diagram. Pay attention to the details in the requirements to ensure that your diagram is comprehensive and reflects all the necessary components of the system.

