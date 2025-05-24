# Cosine Calculator in C

A C program that computes the cosine of an angle using both:
- The built-in `cos()` function from `math.h`
- A custom Taylor Series implementation

## Features
- Converts input from degrees to radians
- Calculates cosine using user-defined precision
- Compares result with math library

## File Structure
- `main.c`: User interface and flow
- `My_cos.c`: Taylor series approximation
- `Factorial.c`: Factorial computation
- `cos_function.c`: Uses `math.h::cos`

## Build
```bash
make
./cosine_calculator
```

## Sample Output
```
Enter the angle in degrees to calculate its cosine:
60
Taylor series approximation of cos(60.000000° / 1.047198 rad) with threshold 0.000001: 0.500000
cos() from math.h: 0.500000
```
