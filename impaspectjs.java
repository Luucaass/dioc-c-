// VerificadorSaldoAspect.aj
public aspect VerificadorSaldoAspect {
    pointcut realizarSaquePointcut(double valor) :
        execution(void ContaBancaria.realizarSaque(double)) && args(valor);

    before(double valor) : realizarSaquePointcut(valor) {
        verificarSaldo(valor);
    }

    private void verificarSaldo(double valor) {
        if (!saldoSuficiente(valor)) {
            System.out.println("Saldo insuficiente em pelo menos uma conta. Operação cancelada.");
        }
    }

    private boolean saldoSuficiente(double valor) {
        // Adicione a lógica de verificação de saldo para todas as contas aqui
        // Retorne true se todas as contas têm saldo suficiente, caso contrário, retorne false

        // Exemplo simples: retorna false se pelo menos uma conta não tiver saldo suficiente
        return contaCorrenteSaldoSuficiente(valor) &&
               contaSalarioSaldoSuficiente(valor) &&
               contaPoupancaSaldoSuficiente(valor);
    }

    private boolean contaCorrenteSaldoSuficiente(double valor) {
        // Adicione a lógica específica da conta corrente aqui
        return true; // Implementação de exemplo
    }

    private boolean contaSalarioSaldoSuficiente(double valor) {
        // Adicione a lógica específica da conta salário aqui
        return true; // Implementação de exemplo
    }

    private boolean contaPoupancaSaldoSuficiente(double valor) {
        // Adicione a lógica específica da conta poupança aqui
        return true; // Implementação de exemplo
    }
}
