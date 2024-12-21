def hilbert_curve_order(n):
    """生成n x n的Hilbert曲线顺序"""
    def d2xy(d):
        x = y = 0
        s = 1
        while s < n:
            rx = 1 & (d // 2)
            ry = 1 & (d ^ rx)
            x, y = rot(s, x, y, rx, ry)
            x += s * rx
            y += s * ry
            d //= 4
            s *= 2
        return x, y

    def rot(n, x, y, rx, ry):
        if ry == 0:
            if rx == 1:
                x = n - 1 - x
                y = n - 1 - y
            x, y = y, x
        return x, y

    return [d2xy(i) for i in range(n*n)]

def create_hilbert_matrix(matrix):
    n = len(matrix)
    order = hilbert_curve_order(n)
    hilbert_matrix = [['' for _ in range(n)] for _ in range(n)]
    chars = ''.join(matrix)
    
    for i, (x, y) in enumerate(order):
        hilbert_matrix[y][x] = chars[i]
    
    return hilbert_matrix

# 读取16x16的汉字方阵
matrix = [
    '将方白水合止月日石色作巽放日防眼',
    '你歌纵交句兑夷酒分旧看杳红部每珀',
    '紫词左㫘左何曜丕穿肧前字嚣诗焜黄',
    '得骅体逐王甚王王惊初玩离并见草上',
    '回落堆芽文成当离按爪列峦峰容英百',
    '览酸烽众山小生阵之日胞排连火电大',
    '棒王王月终将橙全心话哥这读后王三',
    '右西连空图海三开插衰叶已下水用缺',
    '乾四上北令拆形一右东右二下枪中左',
    '三一南于的已艮球讶衾步删冷一前去',
    '先余由祝天强字自八长卦取宗拼木狭',
    '照松月大道细子小王王王一朝成三明',
    '琥下天内赤用阳基组完序树震案重石',
    '字田出球后中奀底杕灰枂绝何中巽旲',
    '余王后明答十最旦吾昌字列最王王今',
    '夕是能鸟池边话替层惊二坎组再年剩'
]

# 创建Hilbert曲线排序的矩阵
hilbert_matrix = create_hilbert_matrix(matrix)

# 打印结果
for row in hilbert_matrix:
    print(''.join(row))

# 验证第一行的前四个字符
print("\n第一行的前四个字符:", ''.join(hilbert_matrix[0][:4]))