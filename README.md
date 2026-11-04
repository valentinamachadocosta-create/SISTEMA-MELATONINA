# SISTEMA-MELATONINA
Maquete interativa do sistema endócrino, demonstrando a relação entre o ciclo dia-noite e a produção de melatonina com Arduino, LEDs e servomotor.
# Sistema Interativo de Melatonina

Maquete eletrônica e interativa desenvolvida para demonstrar a relação entre o ciclo claro-escuro e a produção de melatonina no organismo humano.

## Sobre o projeto

Este projeto foi desenvolvido para uma feira de Ciências com o objetivo de representar, de forma visual e interativa, como a alternância entre dia e noite está relacionada à regulação da melatonina, hormônio produzido principalmente pela glândula pineal.

A maquete representa o sistema endócrino humano e utiliza componentes eletrônicos controlados por Arduino para demonstrar a transição entre os períodos de dia e noite.

## Objetivos

- Representar visualmente o sistema endócrino.
- Demonstrar a relação entre a ausência de luz e a produção de melatonina.
- Utilizar eletrônica e programação para criar uma demonstração interativa.
- Integrar LEDs, servomotor e botões em um único sistema.

## Como funciona

O sistema possui dois estados principais:

### ☀️ Dia
- A representação do Sol fica visível.
- Os LEDs permanecem apagados.
- O servomotor fica na posição inicial.

### 🌙 Noite
- Ao pressionar o botão START, o servomotor movimenta o disco ilustrado de Sol e Lua.
- Os LEDs acendem em sequência, representando o aumento da produção de melatonina.
- A iluminação permanece ativa até o botão STOP ser pressionado.

Ao pressionar STOP, os LEDs são apagados e o servomotor retorna à posição inicial.

## Componentes utilizados

- Arduino Uno
- Servomotores
- LEDs de 3 mm e 5 mm
- Resistores de 10 kΩ utilizados nos grupos de LEDs
- Botões tácteis
- Protoboard
- Jumpers
- Power bank para alimentação externa dos servomotores
- Estrutura física da maquete
- Ilustrações de Sol e Lua

## Organização dos LEDs

O projeto foi planejado com 46 LEDs distribuídos pela maquete, incluindo a região da cabeça e diferentes partes do corpo.

Na configuração final demonstrada, 10 LEDs foram utilizados em três grupos de controle:

| Pino Arduino | Quantidade | Função |
|---|---:|---|
| D3 | 3 | Grupo 1 |
| D4 | 3 | Grupo 2 |
| D5 | 4 | Grupo 3 |
| D6 | Grupo não utilizado | Expansão planejada |

Os demais LEDs fazem parte da distribuição visual planejada para a maquete, mas não foram integrados à demonstração eletrônica final.

## Ligações do Arduino

| Componente | Pino |
|---|---|
| Grupo de LEDs 1 | D3 |
| Grupo de LEDs 2 | D4 |
| Grupo de LEDs 3 | D5 |
| Servomotor principal | D10 |
| Botão START | D12 |
| Botão STOP | D13 |

Os servomotores utilizam alimentação externa pelo power bank, com referência de GND compartilhada com o Arduino.

## Programação

A programação foi desenvolvida em C++ utilizando a biblioteca `Servo.h`, na Arduino IDE.

O programa controla:
- A posição do servomotor.
- A leitura dos botões START e STOP.
- O acionamento sequencial dos três grupos de LEDs.
- O retorno do sistema ao estado inicial.

O código está disponível na pasta `codigo`.

## Desenvolvimento

O desenvolvimento envolveu montagem física da maquete, identificação dos componentes, testes individuais dos grupos de LEDs, testes dos servomotores, ajustes de posicionamento e integração do sistema com os botões.

Durante os testes, foram realizados ajustes na distribuição dos pinos e na alimentação dos componentes para obter um funcionamento estável.

## Possibilidades de expansão

- Integrar os grupos de LEDs restantes.
- Melhorar a estrutura de suporte das ilustrações de Sol e Lua.
- Adicionar novos recursos visuais e interativos.
- Aprimorar a organização eletrônica em uma placa dedicada.

## Resultado

O projeto resultou em uma maquete interativa capaz de representar a transição entre dia e noite por meio de um servomotor e de grupos de LEDs controlados por Arduino.

A construção permitiu aplicar conhecimentos de eletrônica, programação, montagem de circuitos e biologia em um projeto prático.

## Autoria

Projeto desenvolvido individualmente por **Valentina Costa** para uma feira de Ciências.

---

**Tecnologias:** Arduino Uno · C++ · Eletrônica · Sistemas embarcados · Educação científica.
