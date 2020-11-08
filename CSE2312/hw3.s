.global isStrSame
.global strConcatenate
.global sumU16_32
.global sumS32
.global countlnRange
.global rightStringFull
.global rightStringTrunc
.global sortAscending
.global decimalStringtoUint16
.global int8_t decimalStringToInt8
.global hexStringToUint8
.global uint32ToBinaryString
.global findCityAligned
.global findCityPacked

//a.
//bool isStrSame(const char str1[], const char str2[])
// returns 1 if the strings match, 0 otherwise
isStrSame:
    BX LR


//b.
//void strConcatenate(char strTo[], const char strFrom[])
// adds the contents of string strFrom to strTo
// note: strTo must have enough space to hold strFrom and strTo
strConcatenate:
    BX LR

//c.
//uint32_t sumU16_32(const uint16_t x[], uint32_t count)
// returns sum of the values in the array (x) containing count entries.
sumU16_32:
    BX LR

//d.
//int32_t sumS32(const int32_t x[], uint32_t count)
// returns sum of the values in the array (x) containing count entries
sumS32:
    BX LR

//e.
//uint32_t countInRange(const int32_t x[], int32_t low, int32_t high, uint32_t
//count)
// returns number of values in the array (x) containing count entries that are >=
//low and <= high
countInRange:
    BX LR

//f.
//void rightStringFull(char* strOut, const char* strIn, uint32_t length)
// input: array (strIn) containing the input string, and the number of characters to
//extract (length)
// output: array (strOut) containing length number of strIn characters from the
//end of the array or an empty string if the length is larger than can be
//accommodated
// strIn = ‘abcdef’, length = 5 → returns strOut = ‘bcdef’
// strIn = ‘abcdef’, length = 7 → returns strOut = ‘’
rightStringFull:
    BX LR


//g.
// void rightStringTrunc(char* strOut, const char* strIn, uint32_t length)
// input: array (strIn) containing the input string, and the number of characters to
//extract (length)
// output: array (strOut) containing up to, but not exceeding length number of
//strIn characters from the end of the array
// strIn = ‘abcdef’, length = 5 → returns strOut = ‘bcdef’
// strIn = ‘abcdef’, length = 7 → returns strOut = ‘abcdef’
rightStringTrunc:
    BX LR


//h.
//void sortAscending (uint32_t x[], uint32_t count)
// input: array (x) containing count entries
// output: array (x), with the values sorted in ascending order
sortAscending:
    BX LR

//i.
//uint16_t decimalStringToUint16(const char* str)
// convert the null-terminated string (str) to an unsigned 16-bit integer
// treat the string as representing a decimal number
// if a character other than 0, 1, 2, 3, 4, 5, 6, 7, 8, or 9 is present or the value is
//too large, return 0
decimalStringToUint16:
    BX LR


//j.
//int8_t decimalStringToInt8(const char* str)
// convert the null-terminated string (str) to a signed 8-bit integer
// treat the string as representing a decimal number
// if a character other than 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, or – is present or the value is
//out of range, return 0
decimalStringToInt8:
    BX LR


//k.
//uint8_t hexStringToUint8(const char* str)
// convert the null-terminated string (str) to an unsigned 8-bit integer
// treat the string as representing a hexadecimal number
// if a character other than 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, or F is present
//or the value is too large, return 0
hexStringToUint8:
    BX LR


//L.
//void uint32ToBinaryString (char* str, uint32_t x)
// convert the unsigned integer (x) to a null-terminated string (str) representing a
//binary number
uint32ToBinaryString:
    BX LR

//m.
//int32_t findCityAligned (const char city[], const BUSINESS6 business[], uint32_t
//count)
// returns the index of the first entry in the array (business) containing count
//entries which matches the requested city. If the city is not found, return a value
//of -1. You can assume that C default alignment is used for this problem.
findCityAligned:
    BX LR

//n. 
//int32_t findCityPacked (const char city[], const BUSINESS6 business[], uint32_t
//count)
// returns the index of the first entry in the array (business) containing count
//entries which matches the requested city. If the city is not found, return a value
//of -1. You can assume that C packing is used for this problem.


