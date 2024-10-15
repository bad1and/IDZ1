#include <locale.h>
#include <string.h>
#include <ncurses.h>
#include <stdlib.h>

// Проверка символов
int bad_input(char* input, char* badChars) {
    for (int i = 0; i < strlen(input); i++) {
        for (int j = 0; j < strlen(badChars); j++) {
            if (input[i] == badChars[j]) {
                return 1;
            }
        }
    }
    return 0;
}

// Вывод
void output() {
    setlocale(LC_ALL, "");
    initscr();
    printw("%s", "Bad_chars by Tikhanov Oleg\n");
    printw("%s", "ver 0.9\n");
    printw("%s", "---------------------------\n\n");

    char* bad_chars = "!@#$%^&*()";  // Запрет символы
    char input[100];

    printw("Введите строку: ");
    scanw("%s", input);

    input[strcspn(input, "\n")] = 0;

    if (bad_input(input, bad_chars)) {
        printw("Введеная строка содержит запрещенные символы.\n");
    } else {
        printw("Введена строка: %s\n", input);
    }

    printw("\nНажмите любую клавишу для выхода...\n");
    getch();
}

int main() {
    output();
    return 0;
}

