def calculate_sum_and_difference(num1, num2):
    # Calculate sum of the two numbers
    sum_result = num1 + num2
    
    # Calculate difference of the two numbers
    difference_result = num1 - num2
    
    return sum_result, difference_result

def main():
    # Get input from the user for two numbers
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    
    # Calculate sum and difference using the function
    sum_result, difference_result = calculate_sum_and_difference(num1, num2)
    
    # Display the results
    print(f"The sum of {num1} and {num2} is: {sum_result}")
    print(f"The difference of {num1} and {num2} is: {difference_result}")

if __name__ == "__main__":
    main()
