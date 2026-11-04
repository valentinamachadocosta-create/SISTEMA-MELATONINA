# Funcionamento do Sistema Interativo de Melatonina

## 1. Objetivo

O projeto foi desenvolvido para representar, de maneira visual e interativa, a relação entre a iluminação ambiental, o ciclo de sono e vigília e a produção de melatonina no organismo humano.

## 2. O que é a melatonina?

A melatonina é um hormônio produzido principalmente pela glândula pineal, localizada no cérebro.

Sua produção é influenciada pelo ciclo claro-escuro:

- **Durante o dia:** a presença de luz tende a reduzir a produção de melatonina.
- **Durante a noite:** a redução da luminosidade favorece o aumento da produção de melatonina.

Esse processo participa da regulação do ritmo circadiano, o relógio biológico do organismo.

## 3. Representação na maquete

A maquete utilizava um modelo do corpo humano para representar visualmente estruturas relacionadas ao funcionamento do organismo.

O sistema de iluminação foi planejado com 46 LEDs, distribuídos pelo modelo.

As luzes tinham função ilustrativa e não representavam literalmente a produção ou a circulação do hormônio.

## 4. Funcionamento eletrônico

O Arduino Uno era responsável pelo controle da demonstração.

O sistema possuía:

- Um botão START para iniciar;
- Um botão STOP para encerrar;
- Um servo motor para movimentar o disco representando Sol e Lua;
- Três grupos de LEDs controlados pelos pinos digitais 3, 4 e 5.

### Sequência de funcionamento

1. O sistema permanece em sua posição inicial, com os LEDs apagados.
2. O botão START inicia a demonstração.
3. O servo motor movimenta o disco Sol/Lua.
4. Os três grupos de LEDs acendem em sequência.
5. O sistema permanece ligado até o acionamento do botão STOP.
6. Os LEDs são apagados e o servo retorna à posição inicial.

## 5. Relação entre ciência e tecnologia

O projeto une conhecimentos de biologia e eletrônica.

A biologia explica a influência da luz sobre a produção de melatonina e o ritmo circadiano.

A eletrônica permite transformar essa explicação em uma demonstração visual por meio de sensores de controle manual, LEDs, servo motor e programação em Arduino.

## 6. Limitações

A maquete é uma representação didática simplificada. Ela não mede a concentração real de melatonina e não reproduz todos os processos fisiológicos envolvidos na regulação do sono.

A versão final apresentada na
