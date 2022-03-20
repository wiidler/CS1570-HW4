Score: 94

Notes:
- Literals that should be constants. (-1)
```cpp
// The 10 needs to be a constant.
while (questionNumber <= 10 && lives != 0){

// Example
const int TOTAL_ROUNDS = 10;
while (questionNumber <= TOTAL_ROUNDS && lives != 0){
```
- Function parameters that remain unchanged need to be constant. (-5)
```cpp
void printQuestion(const int questionNumber);
```

Good job!
