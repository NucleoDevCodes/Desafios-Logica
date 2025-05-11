Imagine que você está criando uma função que simula o processamento de um pedido em um site. Após o processamento, você quer que uma mensagem personalizada seja exibida — mas essa mensagem pode variar dependendo do tipo de cliente: comum, vip ou novo usuário.

Sua tarefa é criar uma função chamada processarPedido, que receba dois parâmetros:

● o nome do cliente, e
●uma função de callback responsável por exibir uma mensagem após o pedido ser processado.

**Exemplo de entrada:**

```js
processarPedido("Lucas", "vip", mensagemPersonalizada);
```

```js
processarPedido("Fernanda", "novo", mensagemPersonalizada);
```
```js
processarPedido("João", "comum", mensagemPersonalizada);
```

**Saída esperada:**

```js
Processando pedido de Lucas...
Obrigado pela preferência, Lucas! Você ganhou frete grátis.
```
```js
Processando pedido de Fernanda...
Bem-vindo(a), Fernanda! Aproveite um cupom de boas-vindas.
```
```js
Processando pedido de João...
Obrigado pela sua compra, João!
```