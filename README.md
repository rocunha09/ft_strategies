
# ft_techniques_and_strategies

## Joke_Schrodinger

### A implementação apresentada se assemelha com alguns padrões e sua origem se dá a restrição de ambiente causada pela Norma de codificação.

Embora a técnica não seja um Singleton estrito, a ideia de armazenar um único estado de dados acessível de várias partes do código pode lembrar o padrão Singleton, que garante que uma única instância de uma classe seja criada e compartilhada em todo o sistema.

O padrão Memento é usado para capturar e externalizar o estado interno de um objeto, permitindo que ele seja restaurado posteriormente. Sua técnica não é exatamente um Memento, mas compartilha a ideia de manter e gerenciar o estado de dados de forma separada e fornecer métodos para recuperá-lo ou modificá-lo.

O padrão Adapter, é um padrão de projeto estrutural que permite que objetos com interfaces incompatíveis possam trabalhar juntos. Ele atua como um intermediário entre duas classes que não podem se comunicar diretamente devido a diferenças em suas interfaces. 

*Joke_Schrodinger: global? ou não global? eis a questão...

Precisa usar uma variável global? e só é permitido ter uma (ou nenhuma)? e ela não pode ser uma struct? faça um bom uso desta técnica...

## Strategy

### A implementação apresentada se assemelha ao strategy ou no mínimo busca usá-lo como inspiração.

O Strategy Pattern é um padrão comportamental que permite definir uma família de algoritmos, encapsulá-los e torná-los intercambiáveis. Cada algoritmo é encapsulado em um objeto separado (a estratégia), e o contexto que usa essas estratégias pode escolher qual estratégia usar em tempo de execução. Essencialmente, o Strategy Pattern permite que você altere o comportamento de um objeto sem alterar sua estrutura.


## Generic

### A implementação apreentada tem o objetivo de dar flexibilidade e reúso para as funcionalidades construídas mais comuns em uma aplicação.

A utilização de void * em C para simular um tipo genérico visa criar componentes e algoritmos que funcionem com diversos tipos de dados, promovendo a reutilização do código e flexibilidade. No entanto, é importante observar que essa abordagem em C carece das verificações de tipo em tempo de compilação e da segurança que as linguagens com suporte nativo a tipos genéricos proporcionam.

## Test, A LOT! 

### Uma boa prática para seus estudos, projetos, e preparo para se tornar um codificador profissional.

A utilização de testes unitários pode trazer ótimos resultados em seus projetos e ajudá-lo a estabelecer objetivos claros a serem alcançados. A cada funcionalidade a ser desenvolvida, você poderá testá-la e retestá-la. Para isso, construirá os testes apenas uma vez, tornando o processo de construção e depuração do seu projeto menos enfadonho e cansativo.

**Nesta sessão encontrará ideias diversas, desde exemplos de testes de unidade, cores, lista de casos de teste, entre outras coisas, aproveite e tenha novas ideias!**

Obs.: Fiquei com preguiça de criar um Makefile...

comando para compilar os testes do pwd:
```shell
gcc -o run_pwd_test example_functions/pwd.c test_cases/pwd/teste_pwd.c test_cases/pwd/main.c
```


## Why Not?!

### um exemplo de Overengineering em caso de uso manual, maass uma boa combinação de um possível package manager poderia potencializar a construção de  projetos e isso seria divertido.

Um misto de Singleton-Like Pattern com Encapsulamento, padrões de nomeclatura, identidade de domínios bem definida, Rich Data Types "Tipos de dados que ricos em informação, ou que se autodescrevem", seja por qual ponto de vista você olhar haverá uma pequena referência de padrões de projetos, orientação a objetos, controle de memória, um verdeiro "Frankenstein Monster" com tantas referências que o constróem.

### O PORÉM!

Imagine que ao iniciar seu projeto possa utilizar-se de um possível "packege manager" para criação do template base, importação de bibliotecas ou até mesmo criação de tipos (como o o exemplificado aqui), de forma a não se preocupar com gerenciamento de memória ou declaração de variáveis ligadas ao contexto geral da aplicação, apenas utilizá-las com seus getters e setters, why not?

First:
```shell
gcc -g -o test_age c_cleaner.c age.c main.c 
``````

and run:
```shell
valgrind ./test_age 
``````

 - What is "Valgrind"?
    R: Your best Friend!

