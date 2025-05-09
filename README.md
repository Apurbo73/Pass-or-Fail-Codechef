# CodeChef Pass Or Fail
##Idea:
The problem is about determining whether Chef passes or fails an exam based on his performance. Each test has `N` total questions, and Chef answers all of them. He gets `X` questions correct and the rest incorrect. For each correct answer, he earns 3 marks, and for each incorrect answer, he loses 1 mark. Chef needs at least `P` marks to pass the exam. Given multiple test cases, for each one, we need to compute Chef's score  and compare it to `P`. If the score is greater than or equal to `P`, Chef passes, otherwise, he fails. The output should be "PASS" or "FAIL" for each test case based on this comparison.

## Implementation:
It first reads an integer n, the number of test cases.

For each test case, it reads three integers:

a = total questions (N),

b = correct answers (X),

c = passing marks (P).

It calculates the score:

d = 3 * b → marks for correct answers,

e = (a - b) * -1 → penalty for incorrect answers,

f = d + e → total score.

If f >= c, it prints "PASS"; otherwise, it prints "FAIL".
