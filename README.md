# 🎮 Jogo da Forca em C++

Um jogo da forca clássico desenvolvido em C++ para rodar diretamente no terminal do Windows. Este projeto foi criado como parte dos estudos de lógica de programação e estruturas de repetição.

---

## 🚀 Funcionalidades

* **Palavras Aleatórias:** O jogo sorteia uma palavra diferente a cada execução a partir de um banco de palavras integrado.
* **Exibição Dinâmica:** A palavra secreta oculta exibe os caracteres `_` perfeitamente alinhados e revela as letras acertadas sem quebras de layout.
* **Histórico de Erros:** Exibe na tela todas as letras incorretas já digitadas para que você não se perca.
* **Controle de Tentativas:** O jogador inicia com 6 vidas (tentativas), perdendo uma a cada letra incorreta.
* **Suporte a Acentos:** Configurado para exibir caracteres e acentos da língua portuguesa corretamente no terminal do Windows.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Bibliotecas Nativas:** 
  * `<iostream>`: Entrada e saída de dados.
  * `<string>`: Manipulação dinâmica de textos.
  * `<cstdlib>` e `<ctime>`: Geração de números aleatórios com base no relógio do sistema.
  * `<windows.h>`: Configuração da tabela de caracteres do terminal (`SetConsoleOutputCP`).

---

## 🎮 Como Jogar

1. O jogo escolherá uma palavra secreta aleatória (ex: *banana, computador, teclado, programa ou senai*).
2. Você verá os traços correspondentes ao tamanho da palavra.
3. Digite uma letra por vez e pressione `Enter`.
4. Se você acertar, a letra será revelada na posição correta.
5. Se errar, a letra irá para a lista de **Letras erradas** e você perderá uma tentativa.
6. O jogo termina quando você descobrir a palavra inteira (**Vitória**) ou quando suas tentativas chegarem a zero (**Game Over**).

---

## 📦 Como Executar o Projeto

### Pré-requisitos
* Um sistema operacional **Windows** (devido à biblioteca `windows.h`).
* Um compilador C++ instalado (como GCC/MinGW) ou uma IDE como **Dev-C++**, **Code::Blocks** ou **VS Code**.

### Passo a Passo
1. Baixe ou copie o código fonte do arquivo principal.
2. Abra o terminal na pasta do arquivo ou importe-o na sua IDE.
3. Compile o código usando o comando:
   ```bash
   g++ -o forca main.cpp
   ```
4. Execute o programa:
   ```bash
   ./forca
   ```

---

## 📝 Banco de Palavras Atual
Atualmente o jogo conta com as seguintes palavras pré-definidas:
* `banana`
* `computador`
* `teclado`
* `programa`
* `senai`
