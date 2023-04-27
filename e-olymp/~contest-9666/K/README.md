# Kebab House [⬀](https://www.e-olymp.com/en/contests/9666/problems/84873)
The young man Vahtang Bumerang makes kebabs at the world-famous fast-food chain Kebab House. Each kebab contains many ingredients.

This morning Vahtang has received an order to make n kebabs. At first, he should put q₁ ingredients to the first kebab, then q₂ ingredients in the second one and so on. Vahtang spends one second to put one ingredient to a kebab, so it takes qᵢ seconds to make the i-th kebab. When he finishes the kebab he immediately proceeds to the next one.

Vahtang often dreams about his lovely boomerang while making kebabs. Each dream takes exactly one second and Vahtang forgets to put one ingredient to kebab during this second. Fortunately, he never dreams twice in any consecutive (t + 1) seconds.

Due to dreams about boomerang, some kebabs may have lesser than the desired number of ingredients, but customers are still happy if the i-th kebab has at least xᵢ ingredients in it.

Vahtang wants to calculate the number of ways to have dream seconds during his work while keeping all customers happy. Can you help him? The real answer may be very huge, so you have to calculate it modulo 10⁹ + 7.

## Input
The first line contains two integers n and t (1 ≤ n ≤ 1000, 0 ≤ t ≤ 100) - the number of kebabs and minimal possible time between dream seconds.

Each of the next n lines contains two integers qᵢ, xᵢ (1 ≤ qᵢ ≤ 250, 0 ≤ xᵢ ≤ qᵢ)- the number of ingredients in the i-th kebab and the minimum number of ingredients to make the i-th customer happy.

## Output
Print one integer - the number of ways to distribute dream seconds modulo 10⁹ + 7.

## Input example #1
```
3 1
4 3
2 2
2 1
```

## Output example #1
```
15
```
