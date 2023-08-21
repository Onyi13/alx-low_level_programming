/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 * Description: This function takes a string as an argument and reverses it.
 * To do this, it first finds the end of the string and then swaps the characters
 * from the beginning and the end moving towards the center.
 */
void rev_string(char *s)
{int start = 0, end = 0;
char temp;
while (s[end])
{end++; }
end--;
while (start < end)
{temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--; }}
