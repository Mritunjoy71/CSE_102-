
#include<stdio.h>
#include<string.h>

int main() {
    char c, str[100];
    int cnt[26] = {};
    int i, n, k;

    gets(str);
    n = strlen(str);

    for(i = 0; i < n; i++) {
        c = str[i];
        if(c>='a' && c<='z')cnt[c-'a']++;
    }
    k = 0;
    for(i = 0; i < 26; i++) {
        if(cnt[i] > cnt[k]) {
            k = i;
        }
    }

    printf("%c %d\n", k+'a', cnt[k]);

    return 0;
}
