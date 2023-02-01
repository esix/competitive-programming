# [Солдат и значки](https://codeforces.com/contest/546/problem/B)

- ограничение по времени на тест: 3 секунды
- ограничение по памяти на тест: 256 мегабайт
- ввод: стандартный ввод
- вывод: стандартный вывод

У полковника есть `n` значков. Он хочет дать по значку каждому из `n` его солдатов. У каждого значка есть *коэффициент крутизны*, который показывает уровень, достигнутый владельцем значка. Коэффициент крутизны можно увеличить на 1 за одну монету.

Для каждой пары солдат один из них должен получить значок, коэффициент которого строго выше второго. Для солдат не важно, какие у них значения коэффициента, требуется лишь, чтобы их коэффициенты отличались друг от друга.

Полковник знает, какому солдату должен достаться какой значок исходно, но есть вот какая проблема. У некоторых значков может быть одинаковый коэффициент крутизны. Помогите ему и подсчитайте, сколько денег надо суммарно заплатить, чтобы у всех значков были различные коэффициенты крутизны.

## Входные данные

Первая строка состоит из единственного целого числа `n (1 ≤ n ≤ 3000)` — количества солдат.

В следующей строке записано n целых чисел `ai (1 ≤ aᵢ ≤ n)`, обозначающих коэффициент крутизны каждого значка.

## Выходные данные

Выведите единственное целое число — минимальное количество монет, которые придется выплатить полковнику.

## Примеры

### входные данные
```
4
1 3 1 4
```
### выходные данные
```
1
```

### входные данные
```
5
1 2 3 2 5
```

### выходные данные
```
2
```

### Примечание
В первом тесте из примера мы можем увеличить коэффициент первого значка на 1.

Во втором тесте из примера мы можем увеличить коэффициенты второго и третьего значка на 1.
