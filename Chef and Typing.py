side = dict([('d', 0), ('f', 0), ('j', 1), ('k', 1)])

def calc_word(x):
    total = 2
    prev = side[x[0]]
    for y in x[1:]:
        if side[y] == prev:
            total += 4
        else:
            total += 2
            prev = side[y]
    return total
    

for _ in range(int(input())):
    n = int(input())
    words = [input() for i in range(n)]
    finished = dict()
    megatotal = 0
    for w in words:
        if w in finished:
            megatotal += (finished[w] // 2)
            continue
        val = calc_word(w)
        finished[w] = val
        megatotal += val
    print(megatotal)
    
