Check the following code to identify any bug:
```
# A program to calculate the average of numbers in a list

numbers = [10, 20, 30, 40, 50]  # Example list of numbers
total = 0  # Variable to store the sum of numbers

# Loop to iterate over the list and sum the elements
for i in range(0, len(numbers) - 1):
    total += numbers[i]

# Calculate the average
average = total / len(numbers)

# Print the average
print("Average:", average)
```