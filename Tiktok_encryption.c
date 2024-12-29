#include <stdio.h>
#include <string.h>

char *characters[] = {
    "&", "$", ".", "#", "@", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k",
    "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B",
    "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S",
    "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"
};

char *cipher[] = {
    "23", "21", "2b", "26", "45", "64", "67", "66", "61", "60", "63", "62", "6d", "6c", "6f", "6e",
    "69", "68", "6b", "6a", "75", "74", "77", "76", "71", "70", "73", "27", "d7", "c7", "f7", "44", "47",
    "46", "41", "40", "43", "42", "4d", "4c", "4f", "4e", "49", "48", "4b", "4a", "55", "54", "57", "56",
    "51", "50", "53", "52", "5c", "5d", "5f", "34", "37", "36", "31", "30", "33", "32", "3d", "3c", "35"
};

int find_character_index(char c) {
    int i = 0;
    while (i < 64) {
        if (characters[i][0] == c) return i;
        i++;
    }
    return -1;
}

void crypt(const char *text) {
    int i = 0;
    while (text[i]) {
        int idx = find_character_index(text[i]);
        if (idx != -1) printf("%s", cipher[idx]);
        else printf("%c", text[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char text[] = "Hello123";
    crypt(text);
    return 0;
}
