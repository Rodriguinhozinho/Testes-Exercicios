import sys

def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, a + b
    return a

def main():
    try:
        if len(sys.argv) > 1:
            num = int(sys.argv[1])
        else:
            num = 10
    except ValueError:
        sys.exit(1)

    print(f"O número de Fibonacci para {num} é: {fibonacci(num)}")
