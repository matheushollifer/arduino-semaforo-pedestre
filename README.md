# 🚦 Semáforo com Botão de Pedestre — Arduino

Um projeto simples de semáforo que alterna os LEDs automaticamente ao pressionar um botão, simulando o cruzamento seguro de pedestres.

## Componentes Necessários
- Arduino Uno
- 3 LEDs (vermelho, amarelo e verde)
- 1 botão push-button
- 3 resistores de 220Ω (para os LEDs)
- 1 resistor de 10kΩ (para o botão, se não usar `INPUT_PULLUP`)
- Fios e protoboard

## Como Funciona
1. O LED verde acende por padrão, liberando a passagem de veículos.
2. Quando o botão é pressionado:
   - O LED verde apaga e o amarelo acende por 2 segundos
   - Em seguida, o LED vermelho acende por 5 segundos
3. Após esse tempo, o LED verde volta a acender, reiniciando o ciclo.

## Conexões
| Arduino       | Componente         |
|---------------|--------------------|
| Pino 8        | LED Verde          |
| Pino 9        | LED Amarelo        |
| Pino 10       | LED Vermelho       |
| Pino 12       | Botão              |
| GND e 5V      | LEDs e botão (via resistores) |

## Como Usar
1. Baixe o arquivo `.ino`
2. Abra na IDE Arduino
3. Monte o circuito conforme a tabela acima
4. Carregue o código na placa Arduino
5. Pressione o botão para simular a travessia de pedestres

## Personalização
Você pode ajustar no código:
- Tempo do semáforo vermelho e amarelo
- Pinos utilizados
- Adição de LEDs para pedestre ou buzzer

---

Feito por Matheus Ferreira.  
✉ Contato: matheushollifer@gmail.com
