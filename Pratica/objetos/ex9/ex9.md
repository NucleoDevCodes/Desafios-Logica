Você está desenvolvendo um sistema de manutenção preventiva para uma indústria. Cada máquina registra os meses em que passou por manutenção ao longo do ano, armazenando a quantidade de dias parados em um objeto, onde cada chave representa um mês e o valor representa os dias de inatividade.

Agora, o sistema precisa gerar um relatório que exiba:

● O total de dias parados no ano.
● A quantidade de meses com manutenção (ou seja, com valor maior que zero).
● Um alerta caso o total de dias parados seja maior que 20 dias: Status: Atenção! Acima do limite anual. ou Status: Dentro do limite anual.

**Exemplo de entrada:**

```ts
const manutencao = {
  jan: 2,
  fev: 0,
  mar: 5,
  abr: 4,
  mai: 0,
  jun: 7
};

```



**Saída esperada:**

```ts
Total de dias parados: 18  
Meses com manutenção registrada: 4  
Status: Dentro do limite anual
```