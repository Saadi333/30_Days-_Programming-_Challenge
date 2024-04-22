import math

def calculate_circumference(radius):
    # Define PI as a constant
    PI = math.pi
    
    # Calculate circumference using the formula: circumference = 2 * PI * radius
    circumference = 2 * PI * radius
    
    return circumference

def main():
    # Get radius input from the user
    radius = float(input("Enter the radius of the circle: "))
    
    # Calculate the circumference
    circumference = calculate_circumference(radius)
    
    # Display the result
    print(f"The circumference of a circle with radius {radius} is {circumference:.2f} units.")

if __name__ == "__main__":
    main()
