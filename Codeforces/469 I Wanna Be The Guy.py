# https://codeforces.com/problemset/problem/469/A
print("Oh, my keyboard!") if int(input()) != len((set(list(map(int, input().split()))[1:]+list(map(int, input().split()))[1:])-{0})) else print("I become the guy.")