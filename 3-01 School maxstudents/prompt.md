Considering the function below, write a set of unit tests to ensure at least 90% coverage.
```
import sqlite3

def check_classroom_capacity(db_path):
db = sqlite3.connect(db_path)
cursor = db.cursor()

cursor.execute("""
SELECT c.CourseID, c.Subject, l.ClassroomID, cl.RoomNumber, cl.Building, cl.Capacity, COUNT(e.StudentID) as StudentCount
FROM COURSE c
JOIN ENROLLMENT e ON c.CourseID = e.CourseID
JOIN LESSON l ON c.CourseID = l.CourseID
JOIN CLASSROOM cl ON l.ClassroomID = cl.ClassroomID
GROUP BY c.CourseID, cl.ClassroomID
HAVING StudentCount > cl.Capacity
""")

results = cursor.fetchall()
db.close()
return results
```
and write pydoc comment to be added to the function.
