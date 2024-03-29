# Число - палиндром [⬀](https://acmp.ru/index.asp?main=task&id_task=173)

*(Время: 1 сек. Память: 16 Мб Сложность: 29%)*

Напомним, что палиндромом называется строка, одинаково читающаяся с обеих сторон. Например, строка «ABBA» является палиндромом, а строка «ABC» - нет.

Необходимо определить, в каких системах счисления с основанием от 2 до 36 представление заданного числа N является палиндромом.

В системах счисления с основанием большим 10 в качестве цифр используются буквы английского алфавита: A, B, ... , Z. Например, A11 = 1010, Z36 = 3510.

## Входные данные
Входной файл INPUT.TXT содержит заданное число N в десятичной системе счисления (1 ≤ N ≤ 10⁹).

## Выходные данные
Если соответствующее основание системы счисления определяется единственным образом, то выведите в первой строке выходного файла OUTPUT.TXT слово «unique», если оно не единственно — выведите в первой строке выходного файла слово «multiple». Если же такого основания системы счисления не существует — выведите в первой строке выходного файла слово «none».

В случае существования хотя бы одного требуемого основания системы счисления выведите через пробел в возрастающем порядке во второй строке выходного файла все основания системы счисления, удовлетворяющие требованиям.

|	INPUT.TXT | OUTPUT.TXT |
| ----------|------------|
| 123	      | unique<br>6  |
|	111	      | multiple<br>6 10 36 |
|	102892748	| none |