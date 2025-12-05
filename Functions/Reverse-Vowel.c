char* reverseVowels(char* s) {
    int i=0, vowelCount=0;

    while(s[i] != '\0'){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vowelCount++;
        }
        i++;
    }

    if (vowelCount == 0){
        return s;
    }
    char vowelArray[vowelCount];

    i=0;
    int j=0;
    while(s[i] != '\0'){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vowelArray[j] = s[i];
            j++;
        }
        i++;
    }
    j--;

    i=0;
    while(s[i] != '\0'){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            s[i] = vowelArray[j];
            j--;
        }
        i++;
    }

    return s;
}