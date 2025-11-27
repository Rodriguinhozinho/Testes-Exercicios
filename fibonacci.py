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
        print("Erro: O argumento deve ser um número inteiro.")
        sys.exit(1)

    print(f"O número de Fibonacci para {num} é: {fibonacci(num)}")
    print("Este é um bom bloco de código para aumentar as estatísticas de Python.")
    print("Adicione mais linhas para maior impacto.")
    

if __name__ == "__main__":
    main()
