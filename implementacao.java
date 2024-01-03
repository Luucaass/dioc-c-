// ContaBancaria.java
public class ContaBancaria {
    private String tipoConta;
    private double saldo;

    public ContaBancaria(String tipoConta, double saldo) {
        this.tipoConta = tipoConta;
        this.saldo = saldo;
    }

    public void realizarSaque(double valor) {
        if (saldo >= valor) {
            saldo -= valor;
            System.out.println("Saque de " + valor + " realizado com sucesso da conta " + tipoConta);
        } else {
            System.out.println("Saldo insuficiente na conta " + tipoConta + ". Operação cancelada.");
        }
    }

    // Outros métodos e propriedades da conta bancária podem ser adicionados aqui
}

// SistemaBancario.java
public class SistemaBancario {
    public static void main(String[] args) {
        ContaBancaria contaCorrente = new ContaBancaria("Corrente", 1000.0);
        ContaBancaria contaSalario = new ContaBancaria("Salário", 500.0);
        ContaBancaria contaPoupanca = new ContaBancaria("Poupança", 2000.0);

        // Realizando saques
        contaCorrente.realizarSaque(500.0);
        contaSalario.realizarSaque(700.0);
        contaPoupanca.realizarSaque(3000.0);
    }
}
