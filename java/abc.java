public class abc {
    public static void main(String[] args) {
        System.out.println("Olá, mundo!");
        String nome = "Nome";
        int idade = 25;
        System.out.println("O meu nome é " + nome + " e tenho " + idade + " anos.");
        nome = "Dev Java";
        String cidade = "Seia";
        int anoNascimento = 1995;
        int anoAtual = 2024;
        idade = anoAtual - anoNascimento;

        int n1 = 15;
        int n2 = 25;
        int soma = n1 + n2;

        System.out.println("--- RELATÓRIO DO USUÁRIO ---");
        System.out.println("Nome: " + nome);
        System.out.println("Cidade: " + cidade);
        System.out.println("Idade calculada: " + idade + " anos");
        System.out.println("----------------------------");
        System.out.println("O resultado da soma de " + n1 + " + " + n2 + " é: " + soma);
    }
}
