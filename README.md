# semaforo-arduino

Semáforo com Arduino Uno simulado no Tinkercad Circuits. Atividade da Semana 2 do *Curso de Especialização em Tecnologia, Robótica e Programação: Cultura Maker e Ensino 5.0*.

## Descrição do projeto

O código está em [`semaforo-arduino.ino`](semaforo-arduino.ino) e foi versionado em etapas (veja o histórico de commits):

- **Versão 1 – "Adiciona semáforo básico":** ciclo verde 4 s → amarelo 2 s → vermelho 5 s, repetindo sem parar.
- **Versão 2 – semáforo de pedestres:** dois LEDs extras para a travessia; o verde dos pedestres só acende quando o semáforo dos carros está vermelho. Os tempos de cada fase passaram a ficar em constantes (`TEMPO_VERDE`, `TEMPO_AMARELO`, `TEMPO_VERMELHO`), fáceis de ajustar.

### Montagem

| LED | Pino do Arduino | Ligação ao GND |
|---|---|---|
| Vermelho (carros) | 12 | resistor de 220 Ω |
| Amarelo (carros) | 11 | resistor de 220 Ω |
| Verde (carros) | 10 | resistor de 220 Ω |
| Vermelho (pedestres) | 9 | resistor de 220 Ω |
| Verde (pedestres) | 8 | resistor de 220 Ω |

## Circuito no Tinkercad

Simulação: https://www.tinkercad.com/things/ifoWG3IAEWD/editel?sharecode=6elkasGFMH3rCHnR-uDnm0jTN1TnfckIKJRiSNWwGig

![Circuito do semáforo no Tinkercad: verde dos carros aceso e vermelho dos pedestres aceso](circuito-semaforo.jpg)

## Como usar

1. Abra o link do Tinkercad e clique em **Iniciar simulação**.
2. Para uma placa real, monte o circuito conforme a tabela, abra `semaforo-arduino.ino` na Arduino IDE e envie para o Arduino Uno.
3. Para mudar a duração de uma fase, altere apenas a constante correspondente no início do código.

## Uso na escola

**Série e componente.** 1ª série do Ensino Médio, em Física (circuitos elétricos e tempo), em diálogo com Matemática.

**Problema do cotidiano escolar.** A travessia em frente à escola nos horários de entrada e saída, quando muitos estudantes atravessam ao mesmo tempo. A pergunta que move o desafio é: o tempo de verde para pedestres é suficiente para todos atravessarem com segurança? Assim como na proposta da Semana 1, em que transformaríamos a queixa sobre o calor nas salas em medições com sensores, aqui o ponto de partida é medir antes de propor.

**Como eu conduziria.**
1. *Observação:* em grupos, os estudantes cronometram travessias no horário de saída, medem (ou estimam) a largura da via e registram os dados em uma tabela.
2. *Cálculo:* com velocidade = distância ÷ tempo, estimam a velocidade média de caminhada da turma e calculam o tempo mínimo de travessia, com margem para quem anda mais devagar.
3. *Montagem:* em duplas, montam o semáforo no Tinkercad a partir do código-base e acrescentam o semáforo de pedestres.
4. *Confronto:* comparam o tempo do código com o tempo calculado. Os 5 s da versão inicial costumam ser curtos demais, e eles ajustam a constante com base nos próprios dados.
5. *Registro:* cada mudança vira um commit no GitHub com mensagem explicando o motivo, o que torna visível o caminho das decisões.
6. *Socialização:* os grupos apresentam as conclusões à gestão e ao grêmio. Como extensão, podem pensar em um semáforo sonoro (com buzzer) para pessoas com deficiência visual.

**O que os estudantes aprenderiam.** Na Física, circuito em série, função do resistor e relação entre tensão e corrente. Na Matemática, razão, proporção e unidades de tempo e velocidade. Em programação, sequência, repetição e uso de constantes. Mais do que isso, aprenderiam a usar dados reais para argumentar sobre um problema da própria comunidade, articulando tecnologia, segurança no trânsito e cidadania.

## Licença

Distribuído sob a licença MIT. Veja o arquivo [LICENSE](LICENSE).

Autor: Vinicius Bertuzzo Lima
