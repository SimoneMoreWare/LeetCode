#define ATOINT(x) ((x) - 48)
#define MAX_INT   0x7FFFFFFF
#define MIN_INT   0x80000000

int myAtoi(char* str)
{
    char *s = str;
    char sign = '+';
    int val = 0;
    long long tval = 0;

    /* Maintain sanity */
    if (!s)
        return 0;

    /* Ignore white space */
    while (*s == ' ')
        ++s;

    /* Account for the sign */
    sign = (*s == '-') || (*s == '+') ?  *s++ : '+';

    /* Loop creating the integer while the character is valid and
       the value is within the bounds */
    while ((*s >= 48 && *s <= 57) && (tval < MAX_INT))
    {
        tval *= 10;
        tval += ATOINT(*s);
        ++s;
    }

    /* Handle any possible overflow/underflow */
    if (tval > MAX_INT)
        val = (sign == '+') ? MAX_INT : MIN_INT;
    else
    {
        val = tval;
        val = (sign == '-') ? -val : val;
    }

    /* Return the integer */
    return val;
}
