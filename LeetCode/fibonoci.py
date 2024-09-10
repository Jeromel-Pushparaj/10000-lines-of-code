def fibonacci(n):
    # Base case: Return n if n is 0 or 1
    if n <= 1:
        return n
    else:
        # Recursive case: return sum of the previous two numbers
        return fibonacci(n-1) + fibonacci(n-2)

# Function to print the Fibonacci series
def print_fibonacci_series(n_terms):
    print("Fibonacci series:")
    for i in range(n_terms):
        print(fibonacci(i), end=" ")

# Number of terms in the Fibonacci series
n_terms = int(input("Enter the number of terms: "))

if n_terms <= 0:
    print("Please enter a positive integer.")
else:
    print_fibonacci_series(n_terms)
