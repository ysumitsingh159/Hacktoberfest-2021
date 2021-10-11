from heapq import heapify, heappush, heappop

for tcase in range(int(input())):
    n, k, m = map(int, input().split())

    pqx, pqy = [], []
    for i in range(m):
        hx, hy, tx, ty = map(int, input().split())

        pqx.append( ( min(hx, tx), max(hx, tx) ) )
        pqy.append( ( min(hy, ty), max(hy, ty) ) )

    heapify(pqx)
    heapify(pqy)

    lx, ly = (n-k) // 2 + 1, (n-k) // 2 + 1
    rx, ry = lx-1, ly-1
    ok, result = True, 0

    while ok and lx <= (n+k) // 2 and len(pqx) > 0:
        while len(pqx) > 0 and pqx[0][0] <= lx:
            rx = max(rx, heappop(pqx)[1])
        ok = rx >= lx
        result += 1
        lx = rx+1

    while ok and ly <= (n+k) // 2 and len(pqy) > 0:
        while len(pqy) > 0 and pqy[0][0] <= ly:
            ry = max(ry, heappop(pqy)[1])
        ok = ry >= ly
        result += 1
        ly = ry+1

    print( result if ok else -1 )
