# chess in c++ 

just a chess board i made while learning c++. it prints an 8x8 board in the terminal with all the pieces in the right starting positions. still pretty early stages

<br>

## what it does so far

- prints a full chess board in the terminal
- uses a 2d array to store piece positions
- shows column letters (a-h) and row numbers (1-8) so it actually looks like a real board
- lowercase = black pieces, uppercase = white pieces
- asks you to enter a move but doesnt do anything with it yet lol

<br>

## what im still working on

- move parsing (reading input like "e2 e4")
- move validation so pieces actually move correctly
- turn switching between white and black
- check / checkmate detection
- maybe a better UI eventually

<br>

## how to run it

you need a c++ compiler like g++

```bash
g++ chess.cpp -o chess
./chess
```

<br>

## pieces key

| symbol | piece |
|---|---|
| K / k | King |
| Q / q | Queen |
| R / r | Rook |
| B / b | Bishop |
| N / n | Knight |
| P / p | Pawn |

uppercase = white, lowercase = black

<br>

## about

made this while i was learning c++, mostly just to practice arrays and loops. its not done but its a start
