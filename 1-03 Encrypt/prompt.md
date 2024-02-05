Considering the `int encrypt(char *dst, char *src, char *key)` C function below. Write a corresponding `int decrypt(char *dst, char *src, char *key)` that decripts into `dst` the string `src` that has been encrypted with the key `key`.
```
/**
 * Performs a mixed encryption transformation on a string.
 * 
 * This function encrypts the input string `src` according to a set of rules,
 * writing the encrypted version to `dst` using the encryption `key`.
 * Digits are inverted (complement to 9), uppercase letters are ROT13 and XORed
 * with the key, and lowercase letters are directly XORed with the key. Other
 * characters are left unchanged. The transformation cycles through the key
 * for each character of the input.
 * 
 * @param dst The buffer where the transformed string is written.
 * @param src The input string to be transformed.
 * @param key The key used for the XOR encryption part of the transformation.
 * @return Returns 0 on successful transformation, -1 if the key is empty.
 */
int encrypt(char *dst, char *src, char *key) {
    int key_len = strlen(key);
    if (key_len == 0)  return -1;
    int key_index = 0;
    for (int i = 0; src[i] != '\0'; ++i) {
        if (src[i] >= '0' && src[i] <= '9') {
            dst[i] = '9' - (src[i] - '0');
        } else if (src[i] >= 'A' && src[i] <= 'Z') {
            dst[i] = rot13(src[i]) ^ key[key_index];
        } else if (src[i] >= 'a' && src[i] <= 'z') {
            dst[i] = src[i] ^ key[key_index];
        } else {
            dst[i] = src[i];
        }
        key_index = (key_index + 1) % key_len;
    }
    dst[strlen(src)] = '\0';
    return 0;
}
```