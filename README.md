# SISTEMA INTERATIVO DE MELATONINA
### Arduino · Eletrônica · Biologia · Automação

## 1. Sobre o projeto

O Sistema Interativo de Melatonina é uma maquete eletrônica desenvolvida para uma feira de Ciências. Seu objetivo é demonstrar visualmente a relação entre o ciclo claro-escuro e a produção de melatonina no organismo humano.

O projeto combina conhecimentos de biologia, eletrônica, programação e robótica em uma representação interativa do sistema endócrino.

## 2. Objetivo

Demonstrar como a alternância entre dia e noite está relacionada à regulação da melatonina, hormônio produzido principalmente pela glândula pineal.

A proposta é representar essa transição por meio de:
- Uma representação visual do Sol e da Lua.
- Um servomotor responsável pela movimentação da ilustração.
- LEDs distribuídos pelo corpo humano.
- Botões para controlar a demonstração.

## 3. Estrutura planejada

A maquete foi projetada com 46 LEDs:

| Componente | Quantidade |
|---|---:|
| LEDs azuis de 3 mm | 20 |
| LEDs brancos de 3 mm | 20 |
| LEDs amarelos de 5 mm | 3 |
| LEDs brancos de 5 mm | 3 |
| **Total** | **46** |

Os LEDs foram distribuídos visualmente pela estrutura do corpo, incluindo cabeça, tronco e membros superiores e inferiores.

## 4. Funcionamento

### ☀️ Modo Dia
- A representação do Sol fica visível.
- Os LEDs permanecem apagados.
- O servomotor fica na posição inicial.

### 🌙 Modo Noite
- O botão START inicia a transição.
- O servomotor movimenta a representação de Sol e Lua.
- Os grupos de LEDs são acionados sequencialmente.
- A iluminação representa o aumento da produção de melatonina.

### Retorno ao Dia
- O botão STOP encerra a demonstração.
- Os LEDs são apagados.
- O servomotor retorna à posição inicial.

## 5. Componentes eletrônicos

- Arduino Uno
- Servomotores
- 46 LEDs de diferentes cores e tamanhos
- Resistores individuais para os LEDs
- Botões tácteis
- Protoboard
- Jumpers
- Power bank para alimentação externa dos servomotores

## 6. Programação e controle

A programação foi desenvolvida em C++ utilizando a Arduino IDE e a biblioteca Servo.

O sistema utiliza:
- Controle de posição do servomotor.
- Leitura digital dos botões.
- Acionamento sequencial de grupos de LEDs.
- Controle dos estados de dia e noite.

## 7. Desenvolvimento

O desenvolvimento envolveu:

1. Planejamento da estrutura física.
2. Instalação e identificação dos LEDs.
3. Montagem dos circuitos eletrônicos.
4. Testes individuais dos grupos de iluminação.
5. Programação dos servomotores.
6. Integração dos botões START e STOP.
7. Integração do controle de iluminação.

Durante a montagem, foram realizados ajustes de conexões, posicionamento e alimentação para melhorar a estabilidade do sistema.

## 8. Resultado da demonstração

A versão apresentada na feira utilizou:
- Arduino Uno.
- Um servomotor principal.
- Dois botões de controle.
- Três grupos de LEDs, totalizando 10 LEDs funcionais.

A configuração de 46 LEDs corresponde ao escopo completo planejado para a maquete. Nem todos os grupos foram integrados à demonstração final.

## 9. Possíveis melhorias

- Integrar eletronicamente os 46 LEDs.
- Desenvolver uma placa de circuito dedicada.
- Melhorar a organização dos fios.
- Aprimorar o mecanismo de movimentação de Sol e Lua.
- Adicionar novos recursos de interação.

## 10. Tecnologias e conhecimentos aplicados

- Arduino Uno
- C++
- Eletrônica básica
- Sistemas embarcados
- Servomotores
- Circuitos com LEDs
- Prototipagem
- Biologia humana
- Automação

## Autoria

**Desenvolvido por: Valentina Costa**

Projeto autoral desenvolvido para uma feira de Ciências.
