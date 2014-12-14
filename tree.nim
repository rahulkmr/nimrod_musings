type
    TBinaryTree[T] = object
        le, ri: ref TBinaryTree[T]
        data: T
    PBinaryTree*[T] = ref TBinaryTree[T]

proc newNode*[T](data: T): PBinaryTree[T] =
    new(result)
    result.data = data

proc add*[T](root: var PBinaryTree[T], n: PBinaryTree[T]) =
    if root == nil:
        root = n
    else:
        var it = root
        while it != nil:
            var c = cmp(it.data, n.data)
            if c < 0:
                if it.le == nil:
                    it.le = n
                    return
                else:
                    if it.ri == nil:
                        it.ri = n
                        return
                    it = it.ri

proc add*[T](root: var PBinaryTree[T], data: T) =
    add(root, newNode(data))

iterator preorder*[T](root: PBinaryTree[T]): T =
    var stack: seq[PBinaryTree[T]] = @[root]
    while stack.len > 0:
        var n = stack.pop()
        while n != nil:
            yield n.data
            add(stack, n.ri)
            n = n.le

var
    root: PBinaryTree[string]
add(root, newNode("hello"))
add(root, "world")
for str in preorder(root):
    stdout.writeln(str)
